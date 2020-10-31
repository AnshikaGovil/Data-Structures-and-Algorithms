#include <iostream>
#include <stack>
using namespace std;

int findMin(stack<int> s,int min){
    while(!s.empty()){
        if (s.top()>=min)
            s.pop();
        else
            return s.top();
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,min,i,j,k;
	    stack<int> s;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	   s.push(-1);
	   cout<<-1<<" ";
	   for(k=1;k<n;k++){
	       if (a[k]>a[k-1]){
	           s.push(a[k-1]);
	           cout<<a[k-1]<<" ";
	       }
	       else{
	           cout<<findMin(s,a[k])<<" ";
	       }
	   }
	   cout<<endl;
	}
	return 0;
}