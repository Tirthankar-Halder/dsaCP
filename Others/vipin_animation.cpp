#include <iostream>
#include <unistd.h> // for sleep()
using namespace std;
int main()
{
    cout << '-' << flush;
    for (;;) {
        sleep(1);
        cout << "\b\\" << flush;
        sleep(1);
        cout << "\b|" << flush;
        sleep(1);
        cout << "\b/" << flush;
        sleep(1);
        cout << "\b-" << flush;
    }
    // cout<<"Waiting "<<flush;
    // for(;;){
    //     sleep(1);
    //     cout<<'.'<<flush;
    //     sleep(1);
    //     cout<<'.'<<flush;
    //     sleep(1);
    //     cout<<'.'<<flush;
    //     sleep(1);
    //     cout<<'.'<<flush;
    //     sleep(1);
    //     cout<<'.'<<flush;
    //     cout<<"\b\b\b\b\b\b"<<flush;
        

    }
}