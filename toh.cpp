#include <iostream>
using namespace std;
 
 int c=0;
 
void toH(int n, char S, char D, char T)
{
    if (n == 1) {
    	cout<<++c<<"\t";
    cout << "Move disk " << n << " from rod " << S << " to rod " << D << endl;
    return;
    }
    
    toH(n - 1, S, T, D);
    cout<<++c<<"\t";
    cout << "Move disk " << n << " from rod " << S << " to rod " << D << endl;
    toH(n - 1, T, D, S);
}
 
int main()
{
    int n = 3;
 
    toH(n, 'A', 'C', 'B');
    return 0;
}
