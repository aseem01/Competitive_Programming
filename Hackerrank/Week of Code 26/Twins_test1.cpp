//----->|try=0; while(!success) try++;|<------
//----->|Belief Yourself,Respect Yourself|<----
//----->|Be Proud Of Yourself,You're Doing Your best|<-----
#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define upper(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Upper value search;
#define lower(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Lower value search;
#define max3(a,b,c) max(max(a,b),c)//maximum value find three value;
#define min3(a,b,c) min(min(a,b),c)//minimum value find three value;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define REP(i, n) for(int i = 1; i <= n; ++i)
#define rep1(i,start,n) for(int i=start;i<n;++i)
#define PI acos(-1.0)//PI Calculation
#define LL long long
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a)|(b))
#define XOR(a,b) ((a) ^ (b))
#define MP make_pair
#define sqr(x) ((x)*(x))
#define sqrt(x) sqrt(1.0*(x))
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

template<typename T> T BigMod(T b,T p,T m) //BigMod Calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b)%m;
        b=(b*b)%m;
        p>>=1;
    }
    return r;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
bool prime[1000001];

void sieve(int l,int r)
{
    int temp=0;
    memset(prime,true,sizeof(prime));
    for(int i=2; i<=sqrt(r); i++)
    {
        if((l%i) == 0)
            temp =l;
        else
            temp = i*((l/i)+1);

        for(int j=max(2*i, temp); j<=r; j+=i)
        {
            prime[j-l]=false;

        }

    }
}

int main()
{
    int l,r;
    while(cin>>l>>r)
    {
        sieve(l,r);
        vector<int>v;
        //if(l==1) l=2;
        for(int i=max(l,2); i<=r; i++)
        {
            if(prime[i-l])
                //cout << i << "\n";
                v.push_back(i);
        }
        int cnt=0;
        for(int i=1; i<v.size(); i++)
        {
            if((abs(v[i]-v[i-1]))==2) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
