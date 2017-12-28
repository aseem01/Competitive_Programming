/****************************************************************************\
                       Belief yourself,Respect yourself                       |
                                                                              |
        /\           /--------|   |--------|  |--------|    ----       ----   |
       /  \         /             |           |             | \         / |   |
      /    \       |              |           |             |  \       /  |   |
     /      \      |----|         |--------|  |--------|    |   \     /   |   |
    /--------\          |------|  |           |             |    -----    |   |
   /          \                |  |           |             |             |   |
  /            \               /  |           |             |             |   |
----          ---- |----------/   |--------|  |--------|  ----          ----  |
                                                                              |
*****************************************************************************/
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

//Bit Operation
bool checkBit(LL n, int i) { return n&(1LL<<i); }  //AND
LL setBit(LL n, int i) { return n|(1LL<<i);; }     //OR
LL resetBit(LL n, int i) { return n&(~(1LL<<i)); } //OFF

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

long long gcd(long long a, long long b) {
  while (b != 0) {
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
    int n,p,cnt;
    while(cin>>n)
    {
int ar[n+10];
map<int,int>mp;
set<int>s;
vector<int>v,vv;
        rep(i,0,n)
        {
            cin>>ar[i];
            s.insert(ar[i]);
            mp[ar[i]]++;
        }
        if(s.size()==n)
        {
            cout<<"0"<<endl;
            rep(i,0,n-1) cout<<ar[i]<<" ";
            cout<<ar[n-1]<<endl;
            continue;
        }

         for(int i=1;i<=n;i++) if(mp[i]==0) v.push_back(i);
         v.push_back(200001);
         p=0;
         for(int i=0;i<n;i++)
         {
             if(mp[ar[i]]==1)
             {
                 vv.push_back(ar[i]);
                 mp[ar[i]]=-1;
             }
             else if(mp[ar[i]]>1)
             {
                 if(ar[i]<=v[p])
                 {
                     vv.push_back(ar[i]);
                     mp[ar[i]]=0;
                 }
                 else
                 {
                 vv.push_back(v[p]);
                 mp[ar[i]]-=1;
                 p++;
                 }
             }
             else if(mp[ar[i]]==0)
             {
                vv.push_back(v[p]);
                p++;
             }
         }
           cout<<v.size()-1<<endl;
           for(int i=0;i<vv.size()-1;i++) cout<<vv[i]<<" ";
           cout<<vv[vv.size()-1]<<endl;
    }

}









