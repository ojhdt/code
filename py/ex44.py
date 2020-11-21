class Parent(object):
    def __init__(self,text):
        self.text = text
        print(self.text)
    
    def abcd(self):
        print("abcd")

class Child(Parent):
    def abcd(self):
        print("efgh")
        super(Child, self).abcd()  #super(Child, self)相当于Parent

ab = Child("hh")
ab.abcd()