#include <bits/stdc++.h> 
bool isPossible(vector<int> &temp,int &n,long long int&barrier){
    int days=1;
    long long int chap=0;
    for(int i=0;i<temp.size();i++){
        if(barrier<temp[i] ) return false;
        if(temp[i]+chap>barrier){
            chap=temp[i];
            days++;
        }
        else chap+=temp[i];
    }
    return (days<=n); 
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long int i=time[0],j=0;
    for(int x=0;x<m;x++){
        j+=time[x];
        i=max(i,1ll*time[x]);
    }
    long long int ans=-1;
    while(i<=j){
        long long int mid=(i+j)>>1;
        if(isPossible(time,n,mid)){
            j=mid-1;
            ans=mid;
        }
        else i=mid+1;
    }
    return ans;
}