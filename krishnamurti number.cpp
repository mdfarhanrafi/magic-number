#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<string>
#define ll long long 
#define vi vector<int>
#define vs vector<string>
#define vst vector<string>::iterator
#define vit vector<int>::iterator
using namespace std;
// krishnamurti number is that which digits factorial sum is equal to that number.
int fact(int n){
    int factorial=1;
    if(n!=0){
    	while(n){
    		factorial = factorial*n;
    		n--; 
    	}
    }   
    return factorial;
}
bool krishnamurti(int n){
      int sum=0,temp=n;    
      while(temp){
          sum+=fact(temp%10);
          temp=temp/10;
 
       }
     if(sum==n)return 1;
     else return 0;

}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,t;
    cin>>n;
    t=krishnamurti(n);
    (t)? cout<<"Yes\n": cout<<"No\n"; 
   return 0;
}       