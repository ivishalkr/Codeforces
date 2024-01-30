#include<iostream>
using namespace std;

int main(){
    int m,n,count=0,freefund;
    cin>>m>>n;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];       
    }
    /*for (int i = 0; i < m; i++)     in case if we had to arrange the array before, thats why my testcases were failing.
    {
            if (arr[i]<arr[i+1])
            {
                freefund=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=arr[i];
            }
            
        
    }*/
    for (int i = 0; i < m; i++)
    {
        if (arr[i]>=arr[n-1] && arr[i]>0)
        {
            count=count+1;
        }
        
    }
    
    cout<<count;
    return 0;
    
}