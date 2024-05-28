#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
/*
123
12
13
1
23
2
3
*/
void printVec(vector<char> &v){
    for(char ch:v){
        cout<<ch;
    }
}
void permutationGen(bool chosen [],string str,vector<char> &v){
    if(v.size() == str.length()){
        printVec(v);
        cout<<endl;
    }else{
        for(int i=0;i<str.length();i++){
            if(chosen[i])
                continue;
            chosen[i] = true;
            v.push_back(str[i]);
            permutationGen(chosen,str,v);
            chosen[i] = false;
            v.pop_back();

        }
        
    }
}
//GFG
// void permute(string a, int l, int r) 
// { 
//     // Base case 
//     if (l == r) 
//         cout<<a<<endl; 
//     else
//     { 
//         // Permutations made 
//         for (int i = l; i <= r; i++) 
//         { 
  
//             // Swapping done 
//             swap(a[l], a[i]); 
  
//             // Recursion called 
//             permute(a, l+1, r); 
  
//             //backtrack 
//             swap(a[l], a[i]); 
//         } 
//     } 
// } 
int main()
{
    string str = "abc";
    vector<char> permutation;
    int n = str.length()+1;
    bool chosen[3];
    permutationGen(chosen,str,permutation);

    // GFG
    // cout<<"Gfg:"<<endl;
    // permute(str,0,str.length()-1);
   

   return 0;

}