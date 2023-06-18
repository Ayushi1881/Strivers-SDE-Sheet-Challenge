int countgreat(vector<int> &row, int target){
    int i=0,j=row.size()-1;
    while(i<=j){
        int mid=(i+j)>>1;
        if(row[mid]>target) j=mid-1;
        else i=mid+1;
    }
    return i;
}

int getMedian(vector<vector<int>> &matrix)
{   int m=matrix.size();
    int n=matrix[0].size();
    int i=1,j=INT_MAX;
    
    while(i<=j){
        int mid=(i+j)>>1;
        int cnt=0;
        for(int x=0;x<m;x++){
        cnt+=countgreat(matrix[x],mid);
        }
        if(cnt<=(m*n)/2) i=mid+1;
        else j=mid-1;
    }
    return i;
    
}