#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> &v){
    for(auto i: v) cout<<i<<", ";
    cout<<endl;
}

int main(){

    vector<string> board;
    for(int i = 0;i<10;i++){
        if (i%2==0){
            for(int k=0; k<10; k++){
                string tmp;
                //scanf("%s",&tmp);
                cin>>tmp;
                board.push_back(tmp);
            }
        }else{
            vector<string> tmpv;
            string tmp;
            for(int k=0;k<10;k++){
                //scanf("%s",&tmp);
                cin>>tmp;
                tmpv.push_back(tmp);
            }
            //printVec(tmpv);
            auto it=--tmpv.end();
            for(int k=0;k<10;k++){
                board.push_back(*it);
                it--;
            }
        }
    }
    printVec(board);
    board.push_back("0");
    reverse(board.begin(), board.end());

    vector<int> inp

return 0;
}