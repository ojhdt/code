from sys import exit
from random import randint
from textwrap import dedent

class Scene(object):

    def enter(self):
        print("This scene is not yet complete.")
        print("Subclass it and implement enter().")
        exit(1)

class Engine(object):

    def __init__(self, scene_map):
        self.scene_map = scene_map
        #将a_map接收为scene_map并赋给self.scene_map
    
    def play(self):
        current_scene = self.scene_map.opening_scene()#a_map执行opening_scene()
        last_scene = self.scene_map.next_scene('finished')

        while current_scene != last_scene:
            next_scene_name = current_scene.enter()
            current_scene = self.scene_map.next_scene(next_scene_name)
            print

            current_scene.enter()

class Death(Scene):

    quips = [
        "You died. You kinds suck at this.",
        "Your mom would be proud...if she were smarter.",
        "Such a loser.",
        "I hanve a small puppy that's better at this.",
        "You are worse than your Dad's jokes."
    ]

    def enter(self):
        print(Death.quips[randint(0, len(self.quips)-1)])
        exit(1)

class CentralCorridor(Scene):

    def enter(self):
        print(dedent("""
        The Gothons of planet Percal #25 have invaded your ship and 
        destroyed youe entire crew.You are the last surviving 
        member and your last mission is to get the neutron destruct bomb from the Weapons Armory, put it in the bridge, and 
        blow the ship up after getting into an escape pod.
        """))

        action = input("> ")

        if action == "shoot!":
            print(dedent("""
            Quick on the draw you yank out your blaster and fire 
            it at the Gothon.His clown costume is flowing and
            moving around his body, which throws off your aim.
            Your laser hits his costume bit misses him entirely.
            This completely ruins his brand new costume his mother
            bought him, which makes him fly into an insane rage
            and blast you repeatedly in the face until you are'dead. Then he eats you.
            """))
            return 'death'

        elif action == "dodge!":
            print(dedent("""
            Lake a world class boxen your dodge, weave, slip and
            slide right as the Gothon's blaster cranks a laser
            pest your head. In the middle of your artful dodge
            your foot slips and you bang your hed on the metal
            wall and pass out. You wake up shortly after only to
            die as the Gothon stomps on your head and eats you.
            """))
            return 'death'

        elif action == "tell a joke":
            print(dedent("""
            Lucky for you they made you learn Gothon insuits int he academy.
            You tell the onr Goyhon joke you konw:
            Lbhe rbgure vb fb sng,jura fur fvgf nebhaq qur ubhfr,
            fur fvgf nebhaq qur ubhfr. The Gothon stops, tries
            not to laugh,then busts out laughing and can't move.
            While he's laughing you run up abd shoot him spuare in
            the head putting his down, then jump through the
            Weapon Armory door.
            """))
            return 'laser_weapon_armory'

        else:
            print("DOES NOT COMPUTE!")
            return 'central_corridor'

class laserWeaponArmory(Scene):
    def enter(self):
        print("into the Weapon ARmory.")
        code = f"{randint(1, 9)}{randint(1, 9)}{randint(1, 9)}"
        guess = input("[kedpad]> ")
        guesses = 0

        while guess != code and guesses < 10:
            print("BZZZZEDDD!")
            guesses += 1
            guess = input("[kedpad]> ")
        if guess == code:
            print("container opened.")
            return 'the_bridge'

        else:
            print("lock,die.")
            return 'death'

class TheBridge(Scene):

    def enter(self):
        print("brust onto the bridge,set off the bomb.")

        action = input("> ")

        if action == "throw the bomb":
            print("you blow up")
            return 'death'

        elif action == "slowly place the bomb":
            print("escape.")
            return 'escape_pod'

        else:
            print("DOEN NOT COMPUTE!")
            return 'the_bridge'

class EscapePod(Scene):

    def enter(self):
        print("5 pods,which one do you take?")
    
        good_pod = randint(1,5)
        guess = input("[pod #]> ")

        if int(guess) != good_pod:
            print("die.")
            return 'death'

        else:
            print("jump into pod {guess},won!")
            return 'finished'

class Finished(Scene):
    def enter(self):
        print("You won!")
        return 'finished'

class Map(object):

    scenes = {
        'central_conridor': CentralCorridor(),
        'laser_weapon_armory':laserWeaponArmory(),
        'the_bridge':TheBridge(),
        'escape_pod':EscapePod(),
        'death':Death(),
        'finished':Finished(),
    }

    def __init__(self, start_scene):
        print("start_scene:",start_scene)#接收参数赋为start_scene
        self.start_scene = start_scene 
        #将Map提供参数接受为start_scene，赋给self:self.start_scene
        print("self.start_scene:",self.start_scene)


    def next_scene(self, scene_name):
        val = Map.scenes.get(scene_name)
        return val
    
    def opening_scene(self):
        return self.next_scene(self.start_scene)


a_map = Map('central_conridor') #__init__将central_conridor赋给start_scene
#相当于执行
# a_map.start_scene = central_conridor
#print(start_scene)非class内执行无效
print("a_map.start_scene:",a_map.start_scene)
a_game = Engine(a_map)
#相当于执行
#a_game.scene_map = a_map
print("a_game.scene_map:",a_game.scene_map)

a_game.play()
#已知
#a_game.scene_map = a_map
#a_map.opening_scene = a_map.next_scene(a_map.start_scene) = CentralCorridor(central_conridor)
#相当于执行
#current_scene = a_game.scene_map.opening_scene() = a_map.opening_scene() = a_map.next_scene(a_map.start_scene) = CentralCorridor(central_conridor) #携带central_conridor参数的CentralCorridor类定义
#last_scene = a_game.scene_map.next_scene('finished') = a_map.next_scene('finished') =Map.scenes.get(finished) = Finished()
#如果二者不相等
#next_scene_name = current_scene.enter() #CentralCorridor类定义到了current_scene，并执行enter函数，获取到下一关的字典名
#current_scene = a_geme.scene_map.next_scene(next_scene_name) = a_map.next_scene(next_scene_name) = Map.scenes.get(next_scene_name) = Map.scenes.get(current_scene.enter()) = LaserWeaponAnmory()或等等##将新类定义到current_scene
#current_scene.enter() #直接用新对象执行class中的enter命令换场景！NBBBBBB!!!!!!!!