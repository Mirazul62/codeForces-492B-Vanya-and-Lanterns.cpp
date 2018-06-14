#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m,d=0,a[10000],temp;
    float ans,sagol=0,f,l,baal;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    sagol=a[1]-a[0];
     f=a[0]-0;
     l=m-a[n-1];

    /// cout<<f<<" "<<l;
    for(i=0;i<n;i++)
    {
        if(a[i+1]-a[i]>sagol)
            sagol=a[i+1]-a[i];
    }
    ans=sagol/2;
    ///cout<<ans;
    baal=max(f,l);

    cout<<fixed<<setprecision(10)<<max(baal,ans);

}
