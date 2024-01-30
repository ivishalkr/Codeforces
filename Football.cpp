#include<iostream>
#include<string>
using namespace std;
int main(){
    string p,result="YES";
    cin>>p;
    if (p.length()>=7)
    {
        for (int i = 0; i < p.length()-6; i++)
        {
        if (p[i]==p[i+1]==p[i+2]==p[i+3]==p[i+4]==p[i+5]==p[i+6])
        {
            cout<<"YES";
            break;
        }
        else
        {
            cout<<"NO";
        }
        
        
    }
    }
    
    
    return 0;
    
}