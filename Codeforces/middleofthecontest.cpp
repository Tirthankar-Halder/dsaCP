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
    int h1,h2,m1,m2;
    int conDuration,midofContest,totalDuration;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    if(m1 || m2){
        totalDuration = (abs(h2-h1)-1)*60 + (60-m1)+m2;
        // cout<<totalDuration<<endl;
        midofContest = totalDuration/2;
        // cout<<midofContest<<endl;
        h1+=midofContest/60;
        if(m1+midofContest%60>=60){
            h1+=(m1+midofContest%60)/60;
            m1=(m1+midofContest%60)%60;
        }else{
            m1+=midofContest%60;
        }

    }else{
        conDuration = abs(h2-h1);
        if(conDuration %2 ==0){
            midofContest = conDuration/2;
            h1+=midofContest;
        }else{
            midofContest = conDuration/2;
            h1+=midofContest;
            m1+=30;
        }

    }
    printf("%02d:%02d",h1,m1);
    return 0;

}