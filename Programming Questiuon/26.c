/*7-26 最大公约数和最小公倍数（15 分）
本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。

输入样例:
511 292
输出样例:
73 2044
*/


#include<stdio.h>

int main()
{
	int m,n,a,b,t,temp,h;
	scanf("%d" "%d", &m, &n);
	a=m;
 	b=n;
 	
 	if(a<b) {
  		t=a;
  		a=b;
 		b=t;
 	}
 	
    while(b!=0) {
  		temp=a%b;
    	a=b;
  		b=temp; 
	}
	
	h=m*n/a;
	printf("%d %d", a, h);
	
	return 0;
}
