#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
int romanToInt(string s) {
        
        unordered_map<char,int> dict={
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        };
        int res = 0;
        int len = s.length();
     
        for(int i=0;i<len;i++){
            if(dict[s[i]] < dict[s[i+1]]){
                res+=dict[s[i+1]]-dict[s[i]];
                i++;
                continue;
            }
            res+=dict[s[i]];
        }
        return res;
        
    }
void inttoRoman(int n) {
    /*Step 1

Initially number = 3549
Since 3549 >= 1000 ; largest base value will be 1000 initially.
Divide 3549/1000. Quotient = 3, Remainder =549. The corresponding symbol M will be repeated thrice.
We append the Result value in the 2nd List.
Now Remainder is not equal to 0 so we call the function again.
Step 2

Now, number = 549
1000 > 549 >= 500 ; largest base value will be 500.
Divide 549/500. Quotient = 1, Remainder =49. The corresponding symbol D will be repeated once & stop the loop.
We append the Result value in the 2nd List.
Now Remainder is not equal to 0 so we call the function again.
Step 3

Now, number = 49
50 > 49 >= 40 ; largest base value is 40.
Divide 49/40. Quotient = 1, Remainder = 9. The corresponding symbol XL will be repeated once & stop the loop.
We append the Result value in the 2nd List.
Now Remainder is not equal to 0 so we call the function again.
Step 4

Now, number = 9
Number 9 is present in list ls so we directly fetch the value from dictionary dict and set Remainder=0 & stop the loop.
Remainder = 0. The corresponding symbol IX will be repeated once and now remainder value is 0 so we will not call the function again.
Step 5

Finally, we join the 2nd list values.
The output obtained MMMDXLIX.
*/
        int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i= 12;
        while(n>0){
            int div = n/num[i];
            n= n%num[i];
            while(div--){
                cout<<sym[i];
            }
            i--;
        }
        
}
 
int main()
{

   cout<<"Roman to Int: "<< romanToInt("VIII")<<endl;
   cout<<"Roman to Int: ";
   inttoRoman(10);

   return 0;

}