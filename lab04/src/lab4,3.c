#include <stdio.h>
int main()
{
	int k,m,n,addi;
	k = 7;
	m = 4;
	n = 1;
	if (n<m){
	addi = n;
	n = m;
	m = addi;
	} if (m < k){
	addi = m;
	m = k;
	k = addi;
	} if (n<m){
	addi = n;
	n = m;
	m = addi;
	}
	printf ("%d", k);
	printf ("%d", m);
	printf ("%d", n);
	return 0;
}
