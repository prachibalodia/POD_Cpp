//27-09-21
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {

        if (i == 1)
        {
            if (arr[n] < arr[i] && arr[i] < arr[i + 1])
            {
                cout << i << endl;
                c++;
            }
        }

        if (i > 1 and i < n)
        {

            if (arr[i - 1] < arr[i] && arr[i] < arr[i + 1])
            {
                cout << i  << endl;
                c++;
            }
        }

        if (i == n)
        {
            if (arr[i - 1] < arr[i] && arr[i] < arr[1])
            {
                cout << i << endl;
                c++;
            }
        }
    }

    if (c == 0)
    {
        cout << "None";
    }



    return 0;
}
//----------------------------------------------------------------------
//28-09-21
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int x[n];
    int y[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }

    int c1 = 0;
    int c2 = 0;

    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] == x[j])
            {
                c1++;
            }
            if (y[i] == y[j])
            {
                c2++;
            }
        }
    }

  if(c2>1)
  {
      c2--;
      
  }

  if(c1>1)
  {
      c1--;

  }

    cout << c1 << endl;
    cout << c2 << endl;
    return 0;
}
//OR
#include<iostream>
#include<cmath>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int n,hs=0,vs=0,ma=0,mi=0;
    cin>>n;
    vector<pair<int,int>>v,v1;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        v1.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int t=0,t1=0;
    for(int i=0;i<n;i++)
    {
       while(v[i].first==v[i+1].first && v[i+1].second>v[i].second)
       {
           i++;
           vs++;
       }
       if(vs>ma)
       {
           ma=vs;
       }
    }
    for(int j=0;j<n;j++)
    {
        while(v1[j].first==v1[j+1].first && v1[j+1].second>v1[j].second)
        {
            j++;
            hs++;
        }
        if(hs>mi )
        {
            mi=hs;
        }
    }
    cout<<mi<<endl<<ma<<endl;
    return 0;
}
//-------------------------------------------------------------------------
//29-09-21
#include<iostream>
using namespace std;
int main()
{
    int m,n,p,r;
    cin>>m;
    cin>>n;
    cin>>p;
    r= m*n-p;
    cout<<r;
    return 0;
}