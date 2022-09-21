
    public static void countSwaps(List<Integer> a) {
    
       int swap = 0;
          for (int i = 0; i < a.size(); i++) {
             for (int j = 0; j < a.size() - i - 1; j++) {
                  if (a.get(j) > a.get(j+1)){
                      int temp = a.remove(j);//temp used to store the number to be moved
                      a.add(j+1, temp);//add the value on temp back into the integerarray
                     swap++;
            }
        }
    }
    System.out.println("Array is sorted in "+swap+" swaps.");  
    System.out.println("First Element: " + a.get(0)); 
    System.out.println("Last Element: " +   a.get(a.size()-1));
    }

}