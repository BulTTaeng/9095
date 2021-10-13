#include <iostream>
#include <stdlib.h>

using namespace std;

int dp[12] = {0,};

int main() {
  int T;
  cin >> T;
  int * n = (int*)malloc(sizeof(int) * (T+1));
  int * ans = (int*)malloc(sizeof(int) * (T+1));

  for(int i=0; i<T; i++){
    cin >> n[i];
  }

  dp[1] =1;
  dp[2] = 2;
  dp[3] = 4;

  for(int i =4; i < 12; i++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }
  
  for(int i=0; i< T; i++){
    cout << dp[n[i]] <<"\n";
  }
  

  return 0;
}