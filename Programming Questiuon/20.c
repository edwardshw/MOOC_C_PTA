/*7-20 �򵥼�������20 �֣�
ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ��������������������������ȼ���ͬ���������ҵ�˳����㡣

�����ʽ:
������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������

�����ʽ:
��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����

��������:
1+2*10-10/2=
�������:
10
*/


#include<stdio.h>

int main ()

{
	int value1,value2;  
    int sum=0;  
    char ch;  
    scanf("%d",&value1);  
    
    while((ch=getchar())!='=')  
    {  
        scanf("%d",&value2);  
        if(ch=='/'&&value2==0){  
                printf("ERROR\n");  
                return 0;  
  
        }  
        switch(ch)  
        {  
            case '+':sum=value1+value2;break;  
            case '-':sum=value1-value2;break;  
            case '*':sum=value1*value2;break;  
            case '/':sum=value1/value2;break;  
            default:printf("ERROR\n");return 0;  
  
        }  
        value1=sum;  
  
    }  
    printf("%d\n",value1);  
	
	return 0;
}
