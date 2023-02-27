#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long n, m, i;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	int cnt2, cnt5;
	scanf("%lld %lld", &n, &m);

	for (i = 2; i <= n; i *= 2) num1 += n / i;
	for (i = 2; i <= m; i *= 2) num2 += m / i;
	for (i = 2; i <= n - m; i *= 2) num2 += (n - m) / i;
	cnt2 = num1 - num2;

	for (i = 5; i <= n; i *= 5) num3 += n / i;
	for (i = 5; i <= m; i *= 5) num4 += m / i;
	for (i = 5; i <= n - m; i *= 5) num4 += (n - m) / i;
	cnt5 = num3 - num4;
	
	if (cnt2 > cnt5) printf("%d\n", cnt5);
	else printf("%d\n", cnt2);
	return 0;
}