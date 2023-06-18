double multiply(double m,int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans*=m;
    }
    return ans;
}
int NthRoot(int n, int m) {
  double low=0,high=m,eps=1e-8;
  while((high-low)>eps){
        double mid=(low+high)/2.0;
        if(multiply(mid,n)>m)high=mid;
        else low=mid;
  }
  int result = (int)high;
    if (multiply(result, n) == m)
        return result;
    else
        return -1;

}