#include<iostream>
#include<string>
using namespace std;
int main() {
    int n,count;
    cin>>n;
    string word[n];

    for (int i=0;i<n;i++){
        cin>>word[i];
    }
    for(int i=0;i<n;i++){
        if (word[i].length() <=10){
            cout<<word[i]<<endl;
        }
        else
        {
            cout<<word[i][0]<<word[i].length() -2<<word[i].back()<<endl;
        } 
        
    }
    return 0;
}