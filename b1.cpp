#include <iostream>
using namespace std;
int main()
{
    int n,kq=0;
    int *a=new int [n];
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        kq+=a[i];
    }
    cout << "Sum = " << kq;
    return 0;
}
