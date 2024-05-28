#include <iostream>  
#include <string>  
#include <vector>  
#include <sstream> 
#include <algorithm>
using namespace std;  
   
int main()  
{  
    string S, T; 
    string a[10];
    int j=0;
    getline(cin, S); 
    stringstream X(S);
    while (getline(X, T, '+')) {  
        
        a[j] = T;
        j++;
    }  
    sort(a, a + (j+1));
    
    for (int i = 1; i < (j+1); i++)
        a[i] = a[i] +a[i+1];  
    return 0;  
}  