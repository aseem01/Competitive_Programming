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
/*int LCS(string a,string b,int lena,int lenb)
{
    if(lena==0 || lenb==0) return 0;
    else if(a[lena-1]==b[lenb-1]) return 1+LCS(a,b,lena-1,lenb-1);
    else return max(LCS(a,b,lena,lenb-1),LCS(a,b,lena-1,lenb));
}*/
int LCS(string a,string  b,int lena,int lenb)
{
    int L[lena+1][lenb+1];
    int i,j;
    for( i=0; i<=lena; i++)
    {
        for(j=0; j<=lenb; j++)
        {
            if(i==0 || j==0) L[i][j]=0;
            else if(a[i-1]==b[j-1]) L[i][j]=1+L[i-1][j-1];
            else L[i][j]=max(L[i][j-1],L[i-1][j]);
        }
    }
    return L[lena][lenb];
}

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test;
    string a,b;
    while(cin>>a>>b)
    {
        cout<<LCS(a,b,a.size(),b.size())<<endl;
    }

}