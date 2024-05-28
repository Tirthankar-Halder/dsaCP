#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int isPowerOfThree(int n) {
        if(n==0 || n<0 ){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        if(n%3 !=0)
            return 0;
        return isPowerOfThree(n/3);
}
int main()
{

   cout<<isPowerOfThree(27);

   return 0;

}