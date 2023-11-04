#include <iostream>
using namespace std;

int main() {
  int list[15][14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14}; //0층 1~14호까지 지정
  for(int i=1; i<15; i++){
    for(int j =1 ; j<14;j++){
      list[i][0] = 1; //각층 1호는 1로 고정
      list[i][j] = list[i-1][j] + list[i][j-1]; //i-1층 j호와 i층 j-1호를 더해서 i층 j호를 지정
    }
  }
  /*
  for(int i=0; i<15; i++){ //출력
    for(int j =0 ; j<14;j++){
      cout << list[i][j] << " ";
    }
    cout << endl;
  }*/
  
  int num;
  cin >> num;
  int k, n; 
  for(int i=0; i< num ;i++){ //num만큼 반복
    cin >> k >> n; // k,n 입력
    cout << list[k][n-1] << endl; // k층 n호의 수 출력
  }
}