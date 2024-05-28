#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n,days=0;
    cin>>n;
    int currPages=n,prevDayCurrPage=n;
    vector<int> weekp;

    for(int i=0;i<7;i++){
        int page;
        cin>>page;
        weekp.push_back(page);
    }
    // for(auto x:weekp){
    //     cout<<x<<" ";
    // }
    int j=0;
    while(currPages>0){
        if(j>6){
            j=0;
            days=0;
        
        }
        // cout<<currPages<<" "<<j<<endl;
        currPages=prevDayCurrPage-weekp[j];
        j++;
        days++;
        // if(currPages<prevDayCurrPage){
        //     days++;
        // }
        if(currPages<=0){
            break;
        }
        // cout<<days<<endl;
        prevDayCurrPage = currPages;
        
    }
    
    
    cout<<days;


    return 0;

}