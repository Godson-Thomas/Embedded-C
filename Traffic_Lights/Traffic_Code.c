#include<reg51.h>
sbit r=P2^0;
sbit y=P2^1;
sbit g=P2^2;
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

r=y=g=0;
	while(1){
	g=1;
		delay(5000);
	g=0;
	y=1;
		delay(2000);
		y=0;
	r=1;
	delay(5000);
		r=0;
	
	}


}