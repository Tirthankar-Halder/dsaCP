#include <iostream>
#include <stack>
using namespace std;



int main()
{
	int n = 10;
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			for (int k = 0; k < n; k++) {
				cout << k + 1 << " ";

			}
			cout << endl;
		} else {
			for (int k = 0; k < n; k++) {
				if (k == (n - i - 1)) {
					cout << k+1 << endl;
				}else{
                    cout<<"  ";
                }
			}
            cout<<endl;
		}

	}

	return 0;
}