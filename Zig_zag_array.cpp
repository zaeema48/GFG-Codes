// Given an array arr of distinct elements of size N,
// the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array
// should be in the below form: 

// arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n].

//User function template for C++
class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	   for(int i=1; i<n; i+=2){
	       if(arr[i-1]>arr[i])
	       swap(arr[i-1], arr[i]);
	       if(i+1<n && arr[i]<arr[i+1])
	       swap(arr[i], arr[i+1]);
	   }
	}
};