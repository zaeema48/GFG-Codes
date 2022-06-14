//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zero=0, one=0;
        for(int i=0; i<n; i++){
            if(a[i]==0)
            zero++;
            
            else if(a[i]==1)
            one++;
            
        }
        
        for(int i=0; i<n; i++){
            if(zero>0){
            a[i]=0;
            zero--;
            }
            
            else if(one>0){
            a[i]=1;
            one--;
            }
            
            else 
            a[i]=2;
        }
    }
    
};