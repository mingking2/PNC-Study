#include <iostream>
using namespace std;

int main() {
  int number;
  int list[100000] = {0}; //소수 넣어둘 배열
  int array[10000][2]; //합한 거 넣어둘 배열
  while(1){
    cout << "6 이상의 짝수를 입력하세요(0을 입력하면 종료): ";
    cin >> number;
    if(number == 0) break; //0일 땐 멈추기
    else if(number % 2 != 0) continue; //홀수면 다시
    else if(number < 6) continue; //6 미만이면 다시
    else{ //체
      int array_1[1000000] = {0};
      array_1[0] = 1;
      int n = 0;
      for (int j = 2; j * j <= number; j++){
        if(array_1[j] == 0){
           for (int k = j * j; k <= number; k += j){
             array_1[k-1] = 1;
           }
        }
      }
      for (int i = 0; i<number; i++) {
        if(array_1[i] == 0) {
          list[n] = i; 
          n++;
        } 
      }

      int m = 0;
      for(int i = 0; list[i]!=0; i++){
        for(int j = i;list[j]!=0; j++){
          if((list[i] + list[j]) == number) { //list 배열 안에 있는 소수 하나씩 더해보면서 number랑 같은거는 array 배열에 넣어두기
            array[m][0] = list[i];
            array[m][1] = list[j];
            m++;
          } 
        }
      }

      int max = array[0][1] - array[0][0]; //소수 중 차이가 제일 큰 두 수를 찾기 위해
      int a = array[0][0];
      int b = array[0][1];
      for(int i = 1; list[i]!=0 ; i++,m++){
        if(array[i][1] - array[i][0] > max) {a = array[i][1]; b = array[i][0];}
      }
      cout << number << " = " << a << " + " << b << endl;
    }

  }
}