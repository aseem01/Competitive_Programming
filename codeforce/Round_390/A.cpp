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
    map<int,int>mp;
    int n,keep,sum;
    while(cin>>n)
    {
        vector<pair<int,int> > v;
        sum=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            cin>>keep;
            mp[i]=keep;
            sum+=mp[i];
        }
        if(sum!=0)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<endl;
            cout<<"1 "<<n<<endl;
            flag=1;
        }
        else
        {
            sum=0;
            int i;
            for(i=0; i<n; i++)
            {
                sum+=mp[i];
                if(sum!=0)
                {
                    v.push_back(make_pair(1,i+1));
                    break;
                }
            }
            i=i;
            int tt=i+2;
            //cout<<"tt = "<<tt<<endl;
            for(; i<n; i++)
            {
                sum+=mp[i];
            }
            if(sum!=0)
            {
                v.push_back(make_pair(tt,n));
                //break;
            }

            //
            if(v.size()==2)
            {
                cout<<"YES"<<endl;
                cout<<"2"<<endl;
                for(int i=0; i<2; i++)
                {
                    cout<<v[i].first<<" "<<v[i].second<<endl;
                    flag=1;
                }
            }


        }
        if(!flag) cout<<"NO"<<endl;
        mp.clear();
        v.clear();
    }


}
