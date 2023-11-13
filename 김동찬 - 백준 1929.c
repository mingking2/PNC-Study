#include<stdio.h>
int main(void){
  int n, m;
	scanf_s("%d %d", &n, &m);
	for (n; n <= m; n++)
	{
		if (n ==2)printf("2\n");
		if (n % 2 != 0 && n!=1) 
		{
			int i = 2;
			while (i <= n) {
				if (i == n) printf("%d\n", n);
				if (n % i == 0) break;
				i++;
			}
		}
	}
}