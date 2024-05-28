#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,i=0,j=0;
        string s,arr;
        arr = "abcdefghijklmnopqrstuvwxyz";

        cin>>n;
        cin>>s;
        while(i<floor(n/2)){
            char temp = s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i+=2;


        }
        cout<<s;
    
        while(n--){
            int id = arr.find(s[j]);
            cout<<id<<endl;
            if (id<12){
                s[j] = arr[25-j];
            }else if (id>12){
                s[j] = arr[25-j];
            }
            

            j++;

        }
        cout<<s;


    }
}