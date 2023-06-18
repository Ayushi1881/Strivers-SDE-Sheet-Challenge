double median(vector<int>& a, vector<int>& b) {
	int n=a.size();
	int m=b.size();
	if(n>m) return median(b,a);
	int i=0,j=n;
	while(i<=j){
		int p1=(i+j)/2;
		int p2=(n+m+1)/2-p1;

		int l1=(p1==0)?INT_MIN:a[p1-1];
		int l2=(p2==0)?INT_MIN:b[p2-1];

		int r1=(p1==l)?INT_MAX:a[p1];
		int r2=(p2==m)?INT_MAX:b[p2];

		if(l1<=r2 && l2<=r1){
			if((n+m)%2==0) return (max(l1,l2)+min(r1,r2))/2.0;
			else return max(l1,l2);
		}
		else if(l1>r2) j=p1-1;
		else i=p1+1;
	}
	return 0.0;
}