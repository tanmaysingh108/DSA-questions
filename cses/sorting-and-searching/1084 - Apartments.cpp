#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits.h>

using namespace std;

int main(){
    int m,n,k;
    cin>>n>>m>>k;
    vector<int> a;
    vector<int> b;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for (int i=0;i<m;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int count=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (int i=0,j=0;i<n && j<m;){
        if(b[j]<a[i]-k){
            j++;
        }
        else if((b[j]>=a[i]-k)&&(b[j]<=a[i]+k)){
            j++;
            i++;
            count++;
            continue;
        }
        else if (b[j]>a[i]+k){
            i++;
        }
    }
    cout<<count<<"\n";
}