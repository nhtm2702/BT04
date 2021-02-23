#include <iostream>
using  namespace std;
int main()
{
    int n,j,i;
    cin >> n;
    int f[n];
    for (i=1;i<n;i++) f[i]=1;
    f[0]=0;f[1]=1;
    for (i=2;i<n;i++)
    {
      j=2;
      if (f[i]==1)
      {
          while (i*j<=n)
          {
            f[i*j]=0;
            j++;
          }
      }
    }
    for (int i=2;i<n;i++)
        if (f[i]==1) cout << i << " ";
}
