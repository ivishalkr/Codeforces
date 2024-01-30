#include<iostream>
#include <string>
using namespace std;
int main() {
    string bit;
    int n,result=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>bit;
        if (bit=="++X"||bit=="X++")
        {
            result++;
        }
        else
        {
            result--;
        }
        
        
    }
    cout<<result;
    return 0;
    
}