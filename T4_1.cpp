#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int n,minn,maxx;
    int *a=new int [n];
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i];
    minn=a[0];maxx=a[0];
    for (int i=1;i<n;i++)
    {
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
    }
    int *d=new int [maxx];
    for (int i=minn;i<=maxx;i++) d[i]=0;
    for (int i=0;i<n;i++) d[a[i]]=1;
    for (int i=0;i<n;i++)
        if (d[0-a[i]]==1)
    {
        cout << a[i] << " " << 0-a[i];
        return 0;
    }
    cout << "Khong co cap nao tong bang 0";
    return 0;
}
