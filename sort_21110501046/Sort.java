public Sort{
    public static void TheradSort(List<Integer> list){
        int n = list.size();
        List<Integer> sorted = new ArrayList<>(list);
        for(int i=0;i<n;i++){
            new Therad(()->{
                int ele=0;
                while(ele<list.get(i)){
                    ele++;
                }
                sorted.set(i,ele);
            })
        }
        list=sorted;
    }
}