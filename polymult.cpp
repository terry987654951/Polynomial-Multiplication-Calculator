#include <iostream>

using namespace std;

int main() {
  int m, n;
  // The first polynomial: P[i] = coefficient of x^i
  int P[1001];
  // The second polynomial: Q[j] = coefficient of x^j
  int Q[1001];
  int R[2003]={0};

  cin>> m >> n;
  for (int i=0; i<=m; i++){
    cin>> P[i];
  }
  for(int j=0; j<=n; j++){
    cin>> Q[j];
  }

  for(int k=0; k<=m; k++){
    for(int l=0; l<=n; l++){
      R[k+l]=R[k+l]+(P[k]*Q[l]);
    }
  }

  for(int o=0; o<=m+n; o++){
    cout<<R[o];
    if(o<m+n){
      cout<<" ";}
      else{
        cout<<endl;
      }
    }
    return 0;
  }
