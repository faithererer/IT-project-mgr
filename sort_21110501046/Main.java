import java.util.ArrayList;
import java.util.List;
import java.util.TreeMap;

public class Main {
    public static void main(String[] args) throws InterruptedException {
        List<Integer> list = new ArrayList<>();
        list.add(3);
        list.add(1);
        list.add(4);
        list.add(2);
        list.add(3);
        list.add(1);
        list.add(4);
        list.add(2);
        list.add(3);
        list.add(1);
        list.add(4);
        List<Integer> sl = new ArrayList<>();
        Thread t1 =  new Thread(()->{
            Sort.TheradSort(list,sl);
        });
        t1.start();
        t1.join();
        System.out.println(sl);
    }
}
