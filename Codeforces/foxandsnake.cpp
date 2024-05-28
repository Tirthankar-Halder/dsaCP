#include<bits/stdc++.h>
using namespace std;
///TC:O(N^2)
int main()
{
    int m,n,line_flag=0,pos_flag =0;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        if (line_flag==0){
            for (int i=0;i<m;i++){
                cout<<"#";
            }
            line_flag = 1;
        }else{
            if (pos_flag==0){
                for (int i=0;i<m-1;i++){
                    cout<<".";
                }
                cout<<"#";
                pos_flag=1;
            }else{
                cout<<"#";
                for (int i=0;i<m-1;i++){
                    cout<<".";
                }
                pos_flag=0;
                
            }
            line_flag=0;

        }
        cout<<endl;
    }

    return 0;

}