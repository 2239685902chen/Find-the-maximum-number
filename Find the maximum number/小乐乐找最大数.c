#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int cmp(const void* x, const void* y)
{
	return *((int*)x) - *((int*)y);
}
int main()
{
	int q = 0, w = 0, e = 0, r = 0;
	scanf("%d%d%d%d", &q, &w, &e, &r);
	int t[4] = { q,w,e,r };
	qsort(t, sizeof(t) / sizeof(t[0]), sizeof(t[0]), cmp);
	printf("%d\n", t[3]);
	return 0;
}