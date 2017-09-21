//Belief yourself,Respect yourself
#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define upper(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Upper value search;
#define lower(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Lower value search;
#define max3(a,b,c) max(max(a,b),c)//maximum value find three value;
#define min3(a,b,c) min(min(a,b),c)//minimum value find three value;
#define rep(i,intial,n) for(int i=intial; i<(n) ; i++)
#define REP(i,intial,n) for(int i=intial; i<=(n) ; i++)
#define PI acos(-1.0)//PI Calculation
#define LL long long
#define MP make_pair
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define MX 1000005
#define MOD 1000000007
template<typename T> T POW(T b,T p)          //Pow calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b);
        b=(b*b);
        p>>=1;
    }
    return r;
}

LL big_mod(LL n, LL p)
{
    if(p==0) return 1;
    if(!(p&1))
    {
        LL r = big_mod(n,p/2) % MOD;
        return ( (r%MOD) * (r%MOD) ) % MOD;
    }
    else return ( ( n%MOD) * (big_mod(n,p-1) %MOD)) % MOD;
}
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    string s,ss;
    while(cin>>s>>ss)
    {
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        reverse(ss.begin(),ss.end());
        int n=s.size();
        deque<char>a,b;
        rep(i,0,(n+1)/2) a.push_back(s[i]);
        rep(i,0,n/2) b.push_back(ss[i]);
        string pre="";
        string suf="";
        int flag;
        rep(i,0,n)
        {
            flag=0;
            if(i&1)
            {
                if(!a.empty() && a[0]>=b[0]) flag=1;
                if(flag) suf+=b.back(),b.pop_back();
                else pre+=b.front(),b.pop_front();
            }
            else
            {
                if(!b.empty() && a[0]>=b[0]) flag=1;
                if(flag) suf+=a.back(),a.pop_back();
                else pre+=a.front(),a.pop_front();
            }
        }
        cout<<"suf = "<<suf<<endl;
        reverse(suf.begin(),suf.end());
        cout<<pre+suf<<endl;
    }

}