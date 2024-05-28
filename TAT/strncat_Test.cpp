#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{
    char src[50] = "efg";
    char dest[50]= "";
  
   // Appends 5 character from src to dest
   int i=0;
    strncat(dest, src, 0);

//    for(int j=0;j<3;j++){
//     char temp = src[j];
//     strncat(dest, temp, i);
//     i++;

//    }
   cout<<dest;
   

   return 0;

}