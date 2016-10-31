double findminilength(int n,int k,int *x,int hx,int hy){
    double res;
    int s=x[k-1];
    sort(x,x+n);
    int b,a,p;
    for(int i=0;i<n;i++ )
    {
        if(x[i]==s)
        {  p=i;
            break;
        }
        
            
    }
    if(p==0)
    {
        int res=x[n-1]-x[0]+sqrt((hx-x[n-1])*(hx-x[n-1])+hy*hy);
        
        return res;
    }
    
    if(p==n-1)
    {
        res=x[n-1]-s+sqrt((hx-x[0])*(hx-x[0])+hy*hy);
        return res;
    }
    double res1=x[p]-x[0]+sqrt((hx-x[0])*(hx-x[0])+hy*hy)+sqrt((hx-x[n-1])*(hx-x[n-1])+hy*hy)+x[n-1]-x[p+1];
    double res2=x[n-1]-x[p]+sqrt((hx-x[n-1])*(hx-x[n-1])+hy*hy)+sqrt((hx-x[0])*(hx-x[0])+hy*hy)+x[p-1]-x[0];
    double res3=sqrt((hx-x[p])*(hx-x[p])+hy*hy)+sqrt((hx-x[n-1])*(hx-x[n-1])+hy*hy)+x[n-1]-x[0];
    double res4=sqrt((hx-x[p])*(hx-x[p])+hy*hy)+sqrt((hx-x[0])*(hx-x[0])+hy*hy)+x[n-1]-x[0];
    res=res1<res2?res1:res2;
    res=res<res3?res:res3;
    res=res<res4?res:res4;
    


        
    return res;
}
int main()
{
    int N,M;
    cin>>N>>M;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    
    int hx,hy;
    cin>>hx>>hy;
    
    cout<< findminilength( N,M,arr, hx, hy);
    return 0;
        
}
 
