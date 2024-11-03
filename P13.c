#include<stdio.h>
double P(double, int);

void main(void) {
	int k; double Ans;
	printf("計算3.5的k次方?請輸入:");
	scanf("%d", &k);
	Ans = P(3.5, k);
	printf("3.5的%d次方=%f\n", k, Ans);
}

double P(double X, int n) {
	int i; double PowerXn = 1;
	for (i = 1; i <= n; i++) {
		PowerXn = PowerXn * X;
	}
	return PowerXn;
}