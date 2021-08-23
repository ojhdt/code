import java.util.ArrayList;
import java.util.List;

public class App {
    public static <T> T count(T[] arr){
        return arr[arr.length-1];
    }
    public static void main(String[] args) {
        List<String> arrl = new ArrayList<String>();
        arrl.add("aa");
        Integer []intt = {1,2,3,4,5};
        Integer aa = Integer.valueOf(2);
        double c = aa.doubleValue();
        System.out.println(c);
        System.out.println(count(intt));
    }
}
