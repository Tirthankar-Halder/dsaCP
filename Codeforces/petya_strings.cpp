#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int driverFunc(string s1,string s2){
    int i=0;
    while(i<s1.length()){
        if(tolower(s1[i]) == tolower(s2[i])){
            i++;
        }else{
            if((tolower(s1[i]) - 'a') <(tolower(s2[i]) -'a')){
                return -1;
            }else{
                return 1;
            }
            break;

        }

    }

    return 0;
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<driverFunc(s1,s2);
    


    return 0;

}