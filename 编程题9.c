/*7-2 ��������ֵ��10 �֣�
����Ҫ���д���򣬼���4�������ĺ���ƽ��ֵ����Ŀ��֤����������������ͷ�Χ�ڡ�

�����ʽ:
������һ���и���4������������Կո�ָ���

�����ʽ:
��һ���а��ո�ʽ��Sum = ��; Average = ƽ��ֵ��˳���������ƽ��ֵ������ƽ��ֵ��ȷ��С�����һλ��

��������:
1 2 3 4
�������:
Sum = 10; Average = 2.5
*/


#include <stdio.h>
int main()
{
	
	int a,b,c,d,Sum;
	double Average;
	
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	Sum = a+b+c+d;
	Average = Sum/4.0;
	
	printf("Sum = %d",Sum);
	printf("; Average = %.1lf",Average);
	
	return 0;
}
