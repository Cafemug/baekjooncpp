#include <iostream>
#include <algorithm>
using namespace std;
char arr[16];
int a,b,check[16];
void recur(int idx,int depth,int mo,int za){
    if(depth==a){
        if(mo>=1&& za>=2){
            for(int t=0;t<b;t++){
            if(check[t])
                cout<<arr[t];
            }
            cout<<"\n";
        }
        
    }
    
    for(int i=idx;i<b;i++){
        if(!check[i]){
            check[i]=1;
            if(arr[i]=='a' || arr[i]=='o' || arr[i]=='u' || arr[i]=='i' || arr[i]=='e' )
                recur(i,depth+1,mo+1,za);
            else
                recur(i,depth+1,mo,za+1);
         
            check[i]=0;
        }
    }

}
int main(){
    cin>>a>>b;
    for(int i=0;i<b;i++){
        cin>>arr[i];
    }
    sort(arr,arr+b);
    recur(0,0,0,0);

}