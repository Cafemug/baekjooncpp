#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int arr[10],res[10];
bool check[10];
void recur(int start, int x){
    if(x==m){
        for(int i=0;i<m;i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=start;i<n;i++){
        if(check[i]) continue;
        check[i]=true;
        res[x]=arr[i];
        recur(i+1, x+1);
        check[i]=false;
        
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    recur(0,0);
    
}
