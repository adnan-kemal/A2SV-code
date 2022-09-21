class Solution {
    public List<String> fizzBuzz(int n) {

      
        List<String> ch = new ArrayList<String>();
        

        for (int ref=1; ref <= n; ref++) {

            
            if (ref % 15 == 0) {
               //check if divisible by 5 and 3 
                ch.add("FizzBuzz");
            } else if (ref % 3 == 0) {
               //check if divisible by 3
                ch.add("Fizz");
            } else if (ref % 5 == 0) {
                //check if divisible by 5
                ch.add("Buzz");
            } else {
              
                ch.add(Integer.toString(ref));
            }
        }

        return ch;
    }
}