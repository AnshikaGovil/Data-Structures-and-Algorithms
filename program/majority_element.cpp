#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  int freq = 0;
  int major = 0;
  int count=1;
  for(int i=1;i<a.size();i++)
  {
  	if(a[major]==a[i])
  		count++;
  	else
  		count--;
  	if(count==0)
  	{
  		major=i;
  		count=1;
	}
  }
  for(int i=0;i<a.size();i++)
  {
  	if(a[i]==a[major])
  		freq++;
  }
  if(freq>a.size()/2)
  	return a[major];
  else
    return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
