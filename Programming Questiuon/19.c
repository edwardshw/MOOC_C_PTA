/*7-19 ����������15 �֣�
����Ҫ���д�������ĳ��ĳ��ĳ���Ǹ����еĵڼ��졣

�����ʽ:
������һ���а��ո�ʽ��yyyy/mm/dd����������/��/�ա����������ڡ�ע�⣺������б������Ǹ�������ܱ�4���������ܱ�100�����������ܱ�400�����������2����29�졣

�����ʽ:
��һ����������Ǹ����еĵڼ��졣

��������1:
2009/03/02
�������1:
61
��������2:
2000/03/02
�������2:
62
*/


#include<stdio.h>

int main ()

{
	int year, month, day;
	int sum, i;
	
	scanf("%d/%d/%d", &year, &month, &day);
	
	sum += day;
	
	for (i = 1; i < month; i++) {
		
		switch (i) {
			case 1: sum += 31; break;
			case 3: sum += 31; break;
			case 4: sum += 30; break;
			case 5: sum += 31; break;
			case 6: sum += 30; break;
			case 7: sum += 31; break;
			case 8: sum += 31; break;
			case 9: sum += 30; break;
			case 10: sum += 31; break;
			case 11: sum += 30; break;
			case 12: sum += 31; break;
			case 2:
				if (year%4 == 0 && year%100 != 0 || year%400 == 0) {
					sum += 29; break;
				} else {
					sum += 28; break;
				}
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
