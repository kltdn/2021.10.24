#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    char a;
    scanf("%c", &a);
    printf("%d\n", a);
}


int main()
{
	int a;
	scanf("%d", &a);
	printf("%c", a);
}


int main()
{
	float a, b, r;
	scanf("%f %f", &a, &b);
	r = 1 / (1 / a + 1 / b);
	printf("Ī�������ĵ���ֵ��%f\n", r);
}


#include <math.h>
int main()
{
	float Xa, Xb, Ya, Yb;
	float m;
	scanf("%f %f", &Xa, &Ya);
	scanf("%f %f", &Xb, &Yb);
	m = sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb));
	printf("Ī���������߶γ���Ϊ%.3f", m);
}


int main()
{
	double a, b, r;
	int k;
	scanf("%lf %lf", &a, &b);
	k = a / b;
	r = a - k * b;
	printf("Ī����ļ�������%g", r);
}
