#include <bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define sortt(x) sort(x.begin(), x.end())
#define reversee(x) reverse(x.begin(), x.end())
#define F first
#define S second

const int sz = 1e5 + 7;
const int inf = 0x3f3f3f3f3f3f3f3f;

int a[sz];

void fre(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

string yn(bool ans,string y="YES",string n="NO"){
    return (ans ? y : n);
}

int dist[sz];
vector<int>g[sz];

void dijkstra(int node){
    multiset<pii>ms;
    memset(dist, inf, sizeof(dist));
    dist[node] = 0;
    ms.insert({dist[node], node});
    while(!ms.empty()){
        auto it = ms.begin();
        int from = it->second;
        ms.erase(it);
        for(auto i : g[from]){
            int to, l;
            if(dist[to] > dist[from] + l){
                ms.erase({dist[to], l});
                dist[to] = dist[from] + l;
                ms.insert({dist[to], to});
            }
        }
    }
}

void version(){
    if (__cplusplus == 202002L) std::cout << "C++20\n";
    else if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
}

long long binpow(long long n, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent & 1) {
            result *= n;
        }
        n *= n;
        exponent >>= 1; 
    }
    return result;
}

void contest(){
    //usaco(lostcow);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for(int i = 1; i < n - 1; i++){
        sum += a[i];
    }
    if(k - sum > 100){
        cout << -1;
    }   
    else
        cout << k - sum;
}

signed main()  
{
    // int t = 1;
    // //cin >> t;
    // while(t--){
    //     contest();
    // }
    version();
}  

