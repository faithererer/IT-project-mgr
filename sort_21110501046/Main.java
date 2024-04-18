 
import java.util.List;
public class Main{
    public static void main(String[] args){
        List<Integer> list = new ArrayList<>();
        list.add(3);
        list.add(4);
        list.add(1);
        Sort.ThreadSort(list);
        System.out.println(list);
    }
}