/*7-21 �����жϣ�10 �֣�
ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����

�����ʽ��
������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�

�����ʽ��
��һ���������������ʾ�������ʽΪ��Speed: V - S������V�ǳ��٣�S������Speeding��������OK��

��������1��
40
�������1��
Speed: 40 - OK
��������2��
75
�������2��
Speed: 75 - Speeding
*/


#include <stdio.h>  
int main()  
{  
  int m;  
  scanf("%d",&m);  
  
  if(m>60)  
    printf("Speed: %d - Speeding\n",m);  
  else  
    printf("Speed: %d - OK\n",m);  
    
  return 0;  
}  
