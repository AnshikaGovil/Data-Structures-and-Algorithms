#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
int get_max_index (vector<int> weights, vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double)values[i]/weights[i] > max) {
            max = (double)values[i]/weights[i];
            max_i = i;
        }
    }
    return max_i;
}
double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int x;
  int num = weights.size();
  vector<int>a(num);
  for(int i=0;i<num;i++)
  	a[i]=0;
  for(int i=0;i<num;i++)
  {
  	if(capacity == 0)
  		return value;
  	int index = get_max_index(weights,values);
  	x = min(weights[index], capacity);
  	value += (double)(x*(double)values[index]/(double)weights[index]);
  	weights[index]-=x;
  	a[index]+=x;
  	capacity-=x;
  }
  return value;
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << std::endl;
  return 0;
}
