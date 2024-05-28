#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p;
    for (int i = 1 ; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
           cin >> p;
           if (p == 1){
               cout << abs(i - 3) + abs(j - 3);
           }
        }
        
    }
    return 0;
    
    
}