#include <iostream>
using namespace std;

int main() {
  int number;
  int list[100] = {0};
  int array[100][2];
  while(1){
    cout << "4 이상의 짝수를 입력하세요(0을 입력하면 종료): ";
    cin >> number;
    if(number == 0) break;
    else if(number % 2 != 0) continue;
    else if(number <4) continue;
    else {
      int n = 0;
      for (int i = 2; i <= number; i++) {
        int num=0;
        for (int j = 2; j < i; j++) {
          if(i % j == 0) num++;
        }
        if(num == 0) {list[n] = i; n++;} //소수 넣어둠 7 -> 2, 3, 5, 7
      }
      /*for(int i = 0; list[i] != 0; i++){
        cout << list[i] << endl;
      }*/
      
      int m = 0;
      for(int i = 0; list[i] < number && list[i] > 0; i++){
        for(int j =0; list[j] < number && list[j] > 0; j++){
          if((list[i] + list[j]) == number) {
            array[m][0] = list[i];
            array[m][1] = list[j];
            m++;
          } 
        }
      }

     /* for(int i = 0; array[i][0] < number && array[i][0] > 0; i++){
          cout<<array[i][0] << " "<< array[i][1] <<endl;
      }*/
      
      int max = array[0][1] - array[0][0];
      int a = array[0][0];
      int b = array[0][1];
      for(int i = 1; i< 100; i++,m++){
        if(array[i][1] - array[i][0] > max) array[i][1] = a; array[i][0] = b;
      }
      cout << number << " = " << a << " + " << b << endl;
    }
    
  }
}