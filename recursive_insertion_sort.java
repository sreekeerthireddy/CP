/*package whatever //do not write package name here */

import java.io.*;

class GFG {
    
    static void insertionsort(int arr[], int start)
    {
        if(arr.length==1 || start==arr.length)
        {
            return;
        }
        int s=start-1;
        int val=arr[start];
        while(s>=0 && arr[s]>val)
        {
            arr[s+1]=arr[s];
            s--;
        }
        arr[s+1]=val;
        start++;
        insertionsort(arr, start);
    }
    
	public static void main (String[] args) {
		int arr[]= new int[]{12, 11, 3, 2,1};
		insertionsort(arr, 1);
		for(int i=0;i<arr.length;i++)
		{
		    System.out.println(arr[i]);
		}
	}
}
