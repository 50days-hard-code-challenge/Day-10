public class Solution {
    public static void selectionSort(int[] arr) {
        //Your code goes here
        //int min = arr[0];
        for(int i = 0; i<arr.length-1; i++){
            int min = i;
            for(int j = i+1; j<arr.length; j++){
                if(arr[min]>arr[j]){
                    // update the minimum index
                    min = j;
                }
            }
            // swap it 
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
