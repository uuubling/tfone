
#include <iostream>  
#include<stdio.h>  
using namespace std;  
#include<vector>  
#include<set>  
#include<algorithm>  
int MAX=0;//收集到的最大苹果数  
/*  tree :用一个二维的矩阵表示树tree[i] 的值为节点i所有的子孩子， 
    apple:为含有苹果的节点集合。 
    x:节点id 
    返回值：返回x到叶子节点的所有路径中最多的苹果数 
*/  
int dfs(vector<vector<int> > &tree,set<int> &apple,int x){  
    //flag表示该节点x是否有苹果，有为True，没有为False  
    bool flag=false;  
    if(apple.find(x)!=apple.end()){  
        flag=true;  
    }  
    //递归终止条件，叶子节点  
    if(tree[x].size()==0)  
        return (flag==true?1:0);  
    //m1 节点x的所有子节点到叶子节点最多的苹果数  
    //m2  节点x的所有节点到叶子节点第二多的苹果数  
    //这两个数主要用来更新节点X的最大路径，若x有苹果，经过x的路径含有的最多苹果数为m1+m2+1, x没有苹果，为m1+m2  
    int m1=0;  
    int m2=0;  
    for(int i=0;i<tree[x].size();i++){  
        //计算所有子节点到叶子节点最多苹果数  
        int child=dfs(tree,apple,tree[x][i]);  
        if(child>m1){  
            m2=m1;  
            m1=child;  
        }else if(child>m2){  
            m2=child;  
        }  
        MAX=max(MAX,m1+m2+(flag==true?1:0));  
    }  
    //返回值很重要，返回的是该节点到叶子节点的这段路径上的最多苹果数  
    return m1+(flag==true?1:0);  
}  
int main()  
{  
    freopen("in.txt","r",stdin);  
    cout << "Hello world!" << endl;  
    int N,K;  
    while(cin>>N>>K){  
    set<int> apple;  
    int m;  
    vector<vector<int> > tree(N+1);  
    for(int i=0;i<K;i++){  
        cin>>m;  
        apple.insert(m);  
    }  
    int x,y;  
    for(int i=0;i<N-1;i++){  
        cin>>x>>y;  
        tree[x].push_back(y);  
    }  
    for(int i=1;i<tree.size();i++){  
        for(int j=0;j<tree[i].size();j++){  
            cout<<i<<" "<<tree[i][j]<<endl;  
        }  
    }  
    dfs(tree,apple,1);  
    cout<<MAX<<endl;  
    }  
    return 0;  
}  
