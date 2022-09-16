// Given a sorted array of size N and an integer K, 
// find the position at which K is present in the array using binary search.
class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int mid, left=0, right=n-1;
        for(int i=0; i<n; i++){
            mid=(left+right)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
    
        return -1; 
    }
};