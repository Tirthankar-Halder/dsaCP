#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
    long long number;
    cin>>number;
    int digit,flag = 0;
    while(number!=0){
        digit = number%10;
        cout<<digit<<endl;

        if (digit>=5){
            if (flag==0 && digit == 9){
                s.insert(0,to_string(digit));
            }else{
                s.insert(0,to_string(9-digit));
            }
        }else{
            s.insert(0,to_string(digit));

        }
        number = number/10;
        flag++;
    }
    if (s[0]==0){
        s[0]==9;
    }
    cout<<stoi(s);
    

    return 0;

}