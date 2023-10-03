import java.util.* ;
import java.io.*; 
public class Solution {
	public static int getLongestSubarray(int []nums, int k) {
		// Write your code here.
		int n = nums.length;
		int len = 0;
		for(int i = 0; i<n; i++){
			int sum = 0;
			for(int j = i; j<n; j++){
				// add the current element to subarray a[i....j-1]
				sum = sum + nums[j];

				if(sum == k){
				len = Math.max(len,j-i+1);
			    }
		    }
		}
		return len;
	}
}
