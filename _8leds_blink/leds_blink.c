#include<reg51.h>
void delay(unsigned int count){
unsigned int i;
while(count){
i=115;
	while(i>0)
		i--;
	
count--;

}

}
void main(){
P2=0xF0;
delay(2000);
P2=0x0F;
delay(2000);

}