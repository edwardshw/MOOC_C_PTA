/*7-17 �ɼ�ת����15 �֣�
����Ҫ���д����һ���ٷ��Ƴɼ�ת��Ϊ����Ƴɼ���ת������

*���ڵ���90��ΪA��
*С��90�Ҵ��ڵ���80ΪB��
*С��80�Ҵ��ڵ���70ΪC��
*С��70�Ҵ��ڵ���60ΪD��
*С��60ΪE��
*�����ʽ:
*������һ���и���һ�������İٷ��Ƴɼ���

�����ʽ:
��һ���������Ӧ������Ƴɼ���

��������:
90
�������:
A
*/


#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n /= 10;
    
    switch( n ) {
    	case 10:
    	case 9:
    		printf("A\n");
    		break;
    	case 8:
    		printf("B\n");
    		break;
    	case 7:
    		printf("C\n");
    		break;
    	case 6:
    		printf("D\n");
    		break;
    	default:
    		printf("E\n");
    		break;
	}
	
    return 0;
}
