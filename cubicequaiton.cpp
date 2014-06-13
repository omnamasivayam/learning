    #include<iostream>
    #include<cstdio>
    #include<algorithm>
    #include<cstring>
    #include<cmath>
    using namespace std;
  
    long long a,b,c,d,k;
    long long evaluate (long long t)
    {
    double T = t;
    double tmp = a*T*T*T + b*T*T + c*T + d;
    if(tmp + 1e-9 > 1e18 )
    return k+1;
    return a*t*t*t + b*t*t + c*t + d;
    }
    int main()
    {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&k);
    long long lo = 0, hi = (long long)1e6 , mid;
    long long ans = 0;
    while(lo<=hi)
    {
    mid = (lo+hi)>>1;
    if(evaluate(mid)<=k)
    {
    ans = mid;
    lo = mid+1;
    }
    else
    {
    hi = mid-1;
    }
    }
    printf("%lld\n",ans);
    }
    //system("pause");
    return 0;
    }
