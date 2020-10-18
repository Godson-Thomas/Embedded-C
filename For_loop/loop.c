#include<reg51.h>
void delay(unsigned int count){
unsigned i;
	while(count){
	i=115;
		while(i>0)
			i--;
count--;
	
	}

}
void main(){

unsigned int j;
	for(j=1;j<=10;j++){
	
	P2=0xFF;
		delay(500);
	P2=0x00;
	  delay(500);
	}
	delay(2000);
	
	for(j=1;j<=10;j++){
	
	P2=0x55;
		delay(500);
	P2=0xAA;
		delay(500);
	}

}