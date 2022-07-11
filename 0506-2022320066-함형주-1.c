#include <stdio.h>
#pragma warning(disable : 4996)

int prime(int);
int integer(void);

int main(void)
{
	int result, n;

	n = integer();
	result = prime(n);

	if (result == 1)
		printf("%d은 소수임", n);
	else
		printf("%d은 소수가 아님", n);

	getchar();
	getchar();
	return 0;

}
int integer(void) {
	int n;
	printf("정수 입력 :");
	scanf("%d", &n);
	return n;
}
int prime(int n) {
	int i, count = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count++;
	}
	return(count == 2);
}