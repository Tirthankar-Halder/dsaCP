// https://www.geeksforgeeks.org/recursively-remove-adjacent-duplicates-given-string/

#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
// void removeAllAdjacentElement(){
    
// }

int main()
{   
    string s= "abccbccba";
    vector<char> vect;
    deque<char> res_deque;
    string res_string = "";
    for(int i =0;i<s.size();i++){
        vect.push_back(s[i]);
    }
    // for(auto i:vect){
    //     cout<<i;
    // }
    // char left_src[vect.size()/2]
    // char right_src[vect.size()/2]

    int left_ptr=(vect.size()/2)-1;
    int right_ptr = vect.size()/2;
    while(left_ptr<right_ptr && left_ptr>=0 && right_ptr<vect.size()){
        // cout<<vect[left_ptr]<<" "<<vect[right_ptr];
        if(vect[left_ptr]!=vect[right_ptr]){
            // strncat(left_src,left_ptr,)
            res_deque.push_back(vect[right_ptr]);
            res_deque.push_front(vect[left_ptr]);
        }
        // nl
        left_ptr--;
        right_ptr++;

    }
    // for (int i = 0; i < res_deque.size(); i++) {
    //     res_string = res_string+res_deque[i];
    // }
    // cout<<res_string;

   return 0;

}