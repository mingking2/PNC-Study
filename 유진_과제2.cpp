#include <iostream>
using namespace std;

int main() {
  int number;
  int list[100] = {0}; //소수 넣어둘 배열
  int array[100][2]; //합한 거 넣어둘 배열
  while(1){
    cout << "4 이상의 짝수를 입력하세요(0을 입력하면 종료): ";
    cin >> number;
    if(number == 0) break; //0일 땐 멈추기
    else if(number % 2 != 0) continue; //홀수면 다시
    else if(number <4) continue; //4 이하면 다시
    else { //셋 다 아닐 땐 실행
      int n = 0;
      for (int i = 2; i <= number; i++) {
        int num=0;
        for (int j = 2; j < i; j++) {
          if(i % j == 0) num++;
        }
        if(num == 0) {list[n] = i; n++;} //소수 넣어둠 7 -> 2, 3, 5, 7
      }
      /*for(int i = 0; list[i] != 0; i++){ //확인차 출력
        cout << list[i] << endl;
      }*/
      
      int m = 0;
      for(int i = 0; list[i] < number && list[i] > 0; i++){
        for(int j =0; list[j] < number && list[j] > 0; j++){
          if((list[i] + list[j]) == number) { //list 배열 안에 있는 소수 하나씩 더해보면서 number랑 같은거는 array 배열에 넣어두기
            array[m][0] = list[i];
            array[m][1] = list[j];
            m++;
          } 
        }
      }

     /* for(int i = 0; array[i][0] < number && array[i][0] > 0; i++){ //확인차 출력
          cout<<array[i][0] << " "<< array[i][1] <<endl;
      }*/
      
      int max = array[0][1] - array[0][0]; //소수 중 차이가 제일 큰 두 수를 찾기 위해
      int a = array[0][0];
      int b = array[0][1];
      for(int i = 1; array[i][0] < number && array[i][0] > 0 ; i++,m++){
        if(array[i][1] - array[i][0] > max) array[i][1] = a; array[i][0] = b;
      }
      cout << number << " = " << a << " + " << b << endl;
    }
    
  }
}