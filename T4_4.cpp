#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int *a=new int [n];
    int *b=new int [n];
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i] >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    for (int i=0;i<n;i++)
        if (a[i]<=b[i]) {cout << "No";return 0;}
    cout << "Yes";
    return 0;
}
