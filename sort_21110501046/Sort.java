import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;

public class Sort {
    public static List<Integer> TheradSort(List<Integer> list,List<Integer> sortedList){
        int n = list.size();
        List<Thread> threads = new ArrayList<>();
        AtomicInteger cur = new AtomicInteger();
        for (int i = 0; i < n; i++) {
            final int idx = i;
           Thread thread = new Thread(() -> {
                try {
                    Thread.sleep(list.get(idx)*10);
                } catch (InterruptedException e) {
                    throw new RuntimeException(e);
                }
               synchronized (sortedList) {
                   sortedList.add(list.get(idx));
               }

            });
            thread.start();
            threads.add(thread);
        }
        threads.forEach((thread)->{
            try {
                thread.join();
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        });
        return sortedList;
    }
}