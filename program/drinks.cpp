#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   int m,n;
   int count=0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < b.size(); i++) {
    cin >> b[i];
  }
  sort(a.begin(),a.end());
  for(int i=0;i<m;i++)
  {
 	count=upper_bound(a.begin(),a.end(),b[i])-a.begin();
	cout<<count<<"\n";
  }
	return 0;
}
