#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=1,counter=0;
    string t,s = "";
    cin>>n;
    cin>>t;
    while(counter<n){
        counter +=j;
        s+=t[counter -1];
        j++;
    }
    cout<<s;

    return 0;

}