#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits.h>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int y;
        cin>>y;
        arr.push_back(y);
    }
    sort(arr.begin(), arr.end());

int count = 0;
int i = 0, j = n - 1;

while (i <= j) {
    if (arr[i] + arr[j] <= x) {
        i++;
        j--;
    }
    else {
        j--;
    }
    count++;
}

cout << count << '\n';
}