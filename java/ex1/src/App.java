
public class App {
    public static <T> T count(T[] arr){
        return arr[arr.length-1];
    }
    public static void main(String[] args) {
        Integer []intt = {1,2,3,4,5};
        System.out.println(count(intt));
    }
}
