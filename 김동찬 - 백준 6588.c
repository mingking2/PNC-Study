#include<stdio.h>
int arr[1000000] = { 0 };
int max_arr[1000000] = { 0 };
int main(void) {
	int count = 0; // test case 개수 체크용 
	while (1) {
		int n, max = 0, m = 3;
		scanf_s("%d", &n);
		if (n == 0) {
			for (int k = 0; k <= count-1; k++) // 0은 출력하지 않기위함 
			{
				if (max_arr[k] == arr[k] - max_arr[k]) printf("Goldbach's conjecture is wrong.\n"); // 같은 수로 나올경우 제외함
				else {
					printf("%d = %d + %d\n", arr[k], arr[k] - max_arr[k], max_arr[k]);
				}
			}
			break;
		}
		for (m; m <= n; m++) // n까지의 소수 판별 하기위한 반복문
		{
			if (m % 2 != 0)
			{
				int i = 2;
				while (i <= m) {
					if (i == m) {
						if (max < m && n - m != 1) max = m; // 8,12,14등 n과 max의 차가 1이면 max에서 제외함
					}
					if (m % i == 0) break;
					i++;
				}
			}	
		}
		max_arr[count] = max;
		arr[count] = n;
		count += 1;
	}
}
