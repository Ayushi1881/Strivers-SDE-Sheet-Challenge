#include <bits/stdc++.h>
bool isPossible(vector<int> &stalls,int cow,int mid){
    int cntCows=1,lastPlaced=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-lastPlaced>=mid){
            cntCows++;
            lastPlaced=stalls[i];
        }
    }
    if(cntCows>=cow) return true;
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int high=stalls[n-1]-stalls[0];
    int low=1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(isPossible(stalls,k,mid)){
            low=mid+1;
        }
        else high=mid-1;
    }
    return high;
}