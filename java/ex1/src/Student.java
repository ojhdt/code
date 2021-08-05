public class Student {
    String name;
    int num;
    public Student(String name){
        this.name = name;
    }
    public void setNum(int num){
        this.num = num;
    }
    public void outPut(){
        System.out.println(this.name + ':' + String.valueOf(num));
    }
}
