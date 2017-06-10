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
#define rep(i,intial,n) for(int i=intial; i<(n) ; i++)
#define REP(i,intial,n) for(int i=intial; i<=(n) ; i++)
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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test;
    string s;
    cin>>test;
    while(test--)
    {
        cin>>s;
        int len=s.size();
        int sum=0;
        int pos=0;
        int ans=-1;
        int cnt=1;
        string ss="";
        for(int i=len-1; i>=0; i--)
        {
            ss+=s[i];
            if(cnt==4) break;
            cnt++;
        }
        reverse(ss.begin(),ss.end());
        //cout<<ss<<endl;
        int temp=0;
        for(int i=0; i<ss.size(); i++)
        {
            temp=temp*10+(ss[i]-'0');
        }
        //cout<<temp<<endl;
        if(temp%8==0)
        {
            if(s[0]=='A')
            {
               cout<<"YES"<<endl;
               cout<<"1"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<"0"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


}
