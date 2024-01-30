#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        if (arr[i][j]==1)
        {
            int x,y,beautiful;
            x=2-i;
            y=2-j;
            beautiful=abs(x)+abs(y);
            cout<<beautiful;
            break;
        }
        
        
    }
    return 0;

    
}