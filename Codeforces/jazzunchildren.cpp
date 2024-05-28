#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n,m;
    queue<int> num;
    queue<int> index;
    cin>>n;
    cin>>m;
    for(int i= 0;i<n;i++){
        int val;
        cin>>val;
        num.push(val);
        index.push(i+1);
    }
    while(index.size() != 1){
        if(num.front()> m){
            num.push(num.front()-m);
            num.pop();
            index.push(index.front());
            index.pop();
        }else{
            num.pop();
            index.pop();
        }
        // cout<<"interval"<<endl;
        // showq(num);
        // showq(index);
    }
    showq(index);
    


    return 0;

}