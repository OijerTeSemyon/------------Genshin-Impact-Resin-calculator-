#include <time.h>
#include <stdio.h>
#include <windows.h> 


void display(int t){
	if (t==0) printf("��ǰ�˺ţ����\n"); 
		else if (t==1) printf("��ǰ�˺ţ�С��\n"); 
			else if (t==2) printf("��ǰ�˺ţ�����\n"); 
				else return;
}
int main(){
	int g,i=0,t,j=0,c;
	printf("���뵱ǰ�˺�\n");
	printf("��ţ�0\nС�ţ�1\n������2\n");
	scanf("%d",&c); 
	display(c);
	printf("��ǰ��֬����������");
	scanf("%d",&g);
	while (g<0||g>160){
		printf("error! ���䣡");
		printf("��ǰ��֬����������");
		scanf("%d",&g);
		printf("\n");
		}	
	printf("��ʼ��ʱ���Ǿ�ȷ��\n");
	while (t<=160){	
		Sleep(480000);
		i++;
		time_t timer = time(NULL);
		printf("%s\n", ctime(&timer));
		display(c);
		printf("	��ǰ��֬����������%d \n",g+i); 
		t=g+i;
		if(t>=40&&t<80) {
			printf("\n����1��\n"); 
		}
		if(t>=80&&t<120) {			
			printf("\n����2��\n"); 	
		}
		if(t>=120&&t<160) {
			printf("\n����3��\n"); 	
		}
	}
	display(c);
	printf("��֬��������������"); 
	for (int i=0;i<10;i++){
		printf("%c",7);
		Sleep(250);
	}
	
	MessageBox(0, "��ǰ�˺���֬��������������", "ˢ����ʾ!", 0);
	
} 
