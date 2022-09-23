


class Solution
{
	int  select(int arr[], int i) //a function to mind the minimum elelemet
{
     int min =i;
     for(int j = i+1;j<arr.length;j++)
         if(arr[min]>arr[j]){
             min = j;
         }
    return min;
}
   
void selectionSort(int arr[], int n)
{
      for(int i =0;i<n;i++){
     int min = select(arr,i);
       int temp = arr[min];
       arr[min] =arr[i];
       arr[i]= temp;
}
   }
}