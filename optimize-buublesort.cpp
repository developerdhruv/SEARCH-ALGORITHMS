#include <iostream>
using namespace std;
void BubbleSort(int a[], int n){
  int flag = 0;
  for(int i = 0; i<n-1; i++){
    for(int j = 0; j<= n-2; j++){
      if(a[j]>a[j+1]){
        swap(a[j], a[j+1]);
        flag = 1;
      }
    }

    if(flag ==0){
      break;
    }
  }
}

int main(){
  int n;

  cin>>n;
  int a[n];
  for(int i = 0; i<n; i++){
    cin>>a[i];
  }

  BubbleSort(a,n);

  for(int i = 0; i <n; i++){
    cout<<a[i]<<" ";
  }


}