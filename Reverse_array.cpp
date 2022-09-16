// Given an array arr[] of positive integers of size N. 
// Reverse every sub-array group of size K
//User function template for C++

class Solution{
public:
void reverse(vector<long long>& arr, int i, int j){
    int temp;
    while(i<j){
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
         j--; 
         i++;
    }
}
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
     int i=0; 
     while(i<n-k){
         reverse(arr, i, i+k-1); 
         i=i+k;
              }
    k=n%k;
    reverse(arr, i, i+k-1);
    }
};