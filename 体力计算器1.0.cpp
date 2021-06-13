#include <time.h>
#include <stdio.h>
#include <windows.h> 


void display(int t){
	if (t==0) printf("当前账号：大号\n"); 
		else if (t==1) printf("当前账号：小号\n"); 
			else if (t==2) printf("当前账号：其他\n"); 
				else return;
}
int main(){
	int g,i=0,t,j=0,c;
	printf("输入当前账号\n");
	printf("大号：0\n小号：1\n其他：2\n");
	scanf("%d",&c); 
	display(c);
	printf("当前树脂（体力）：");
	scanf("%d",&g);
	while (g<0||g>160){
		printf("error! 重输！");
		printf("当前树脂（体力）：");
		scanf("%d",&g);
		printf("\n");
		}	
	printf("开始计时（非精确）\n");
	while (t<=160){	
		Sleep(480000);
		i++;
		time_t timer = time(NULL);
		printf("%s\n", ctime(&timer));
		display(c);
		printf("	当前树脂（体力）：%d \n",g+i); 
		t=g+i;
		if(t>=40&&t<80) {
			printf("\n已有1次\n"); 
		}
		if(t>=80&&t<120) {			
			printf("\n已有2次\n"); 	
		}
		if(t>=120&&t<160) {
			printf("\n已有3次\n"); 	
		}
	}
	display(c);
	printf("树脂（体力）已满！"); 
	for (int i=0;i<10;i++){
		printf("%c",7);
		Sleep(250);
	}
	
	MessageBox(0, "当前账号树脂（体力）已满！", "刷本提示!", 0);
	
} 
