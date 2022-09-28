class Solution {
    public int maxCoins(int[] piles) {
          Arrays.sort(piles);
  int sum=0;
  int i=piles.length-2;
  int k=piles.length/3;
  int j=0;
  
 while(j++ < k)
 {
	 sum+=piles[i];
	 i-=2;
 }
 
 return sum;
    }
}