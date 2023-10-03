public class Solution {
    public static void selectionSort(int[] arr) {
        //Your code goes here
        int n=arr.length;
        int min=0;
        for(int i=0;i<n-1;i++)
        { 
            min=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                    int temp=arr[min];
                    arr[min]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}
