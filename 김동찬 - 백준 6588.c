#include<stdio.h>
#include<stdlib.h>
int pn_arr[1000000] = { 0, };
int PN()
{
	for (int j = 2; j * j <= 1000000; j++)
	{
		for (int k = j * j; k <= 1000000; k += j)
		{
			pn_arr[k] = 1;
		}
	}
	pn_arr[1] = 1; //1은 소수가 아님
	return 0;
}
int main(void) {
	PN();
	while (1) {
		int m, max = 0;
		scanf_s("%d", &m);

		if (m == 0) break;

		for (int i = 3; i <= m; i++) {
			if(m-i<=0) printf("Goldbach's conjecture is wrong.\n");
			else if (pn_arr[m - i] == 0 && pn_arr[i] == 0) 
			{
				printf("%d = %d + %d\n", m, i, m - i);
				break;
			}
		}
		
	}
}