#include<bits/stdc++.h>
#define PI acos(-1.0)
#define X first
#define Y second
#define mpp make_pair
#define nl printf("\n")
#define SZ(x) (int)(x.size())
#define pb(x) push_back(x)
#define pii pair<int,int>
#define pll pair<ll,ll>
///---------------------
#define S(a) scanf("%d",&a)
#define P(a) printf("%d",a)
#define SL(a) scanf("%lld",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
///------------------------------------
#define all(v) v.begin(),v.end()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define fr(i,a,n) for(int i=a;i<=n;i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
///int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31}; //Not Leap Year
///int dx[]= {1,0,-1,0};int dy[]= {0,1,0,-1}; //4 Direction
///int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 Direction
///int dx[]= {2,1,-1,-2,-2,-1,1,2};int dy[]= {1,2,2,1,-1,-2,-2,-1}; //Knight Direction
///==========CONSTANTS=============///
///  Digit     0123456789012345678 ///
#define MX     3000025
#define lim    2000110
#define inf    10000000100000000LL
#define MD     1000000007LL
#define eps    1e-9
///===============================///

char s[MX+2];
char ans[MX+2];
set<int>St;
int main() {
    int n,i,j,k,x,y;
    for(i=0; i<lim; i++) {
        ans[i]='*';
        St.insert(i);
    }
    ans[lim]='\0';
    S(n);
    int mx=0;
    while(n--) {
        scanf("%s",s);
        int len=strlen(s);
        S(k);
        while(k--) {
            S(x);
            x--;
            int nx=x+len-1;
            cout<<"nx = "<<nx<<endl;
            for(i=x; i<=nx; i++) {
                cout<<"St.count = "<<St.count(i)<<endl;
                if( St.count(i) ) {
                    ans[i]=s[i-x];
                    St.erase(i);
                    mx=max(mx,i);
                    continue;
                }
                int ni=*(St.upper_bound(i));
                cout<<"ni = "<<ni<<endl;
                if( ni>nx ) {
                    break;
                } else {
                    i=ni;
                    ans[i]=s[i-x];
                    mx=max(mx,i);
                    St.erase(i);
                }
            }
        }
    }

    for(i=0;i<=mx;i++){
        if(ans[i]=='*')ans[i]='a';
    }
    ans[mx+1]='\0';

    printf("%s",ans);


    return 0;
}
