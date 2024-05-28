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
void subSequentGen(int k,string str,vector<char> &v){
    if(k==str.length()){
        printVec(v);
        cout<<endl;
    }else{
        // include k in the subset
        v.push_back(str[k]);
        subSequentGen(k+1,str,v);
        v.pop_back();
        // Don't include k in the subset
        subSequentGen(k+1,str,v);

    }
}
void permutationGen(bool chosen [],string str,vector<char> &v){
    if(v.size() == str.length()){
        // printVec(v);
        string a = "";
        for(int i=0;i<v.size();i++){
            a+=v[i];
        }
        vector<char> subset;
        subSequentGen(0,a,subset);
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
int main()
{
    string str = "abc";
    vector<char> permutation;
    int n = str.length()+1;
    bool chosen[4];
    permutationGen(chosen,str,permutation);

    // GFG
    // cout<<"Gfg:"<<endl;
    // permute(str,0,str.length()-1);
   

   return 0;

}