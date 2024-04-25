//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        int min = arr[i], m = i;
        
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < min) {
                min = arr[j];
                m = j;
            }
        }
        return m;
    }
     
    void selectionSort(int arr[], int n)
    {
        int tmp, selected;
        
        for (int i = 0; i < n; ++i) {
            selected = select(arr, i, n);
            
            if (arr[selected] < arr[i])
            {
                swap(arr[i], arr[selected]);
            }
        }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends