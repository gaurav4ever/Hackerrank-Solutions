#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int check(int a[],int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1],count[n+1]={0},c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=i+1;
        }
        
        //code for Too Chaotic
        
        
        int flag,done=0;
        for(int k=0;k<3;k++){
            //cout<<"loop "<<k<<endl;
            for(int j=n-1;j>0;j--){
             
                if(a[j]<a[j-1]){   
                    count[a[j-1]]++;
                    if(count[a[j-1]]>2){done=1;break;}
                    int temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                    c++;
                }
               /* for(int m=0;m<n;m++)
                    cout<<a[m]<<" ";
                cout<<endl;
                */
                flag=check(a,n);
            //cout<<"flag value : "<<flag<<endl;
                if(flag==0)break;
                if(done==1)break;
            }  
             if(flag==0)break;
            if(done==1)break;
        }
        
        if(done==1)cout<<"Too chaotic"<<endl;
        else
            cout<<c<<endl;
        //if(flag==0)cout<<c<<endl;      
    }
    return 0;
}
