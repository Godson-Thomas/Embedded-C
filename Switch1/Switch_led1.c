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
sbit led=P2^0;
sbit sw1=P2^5;
sbit sw2=P2^4;
void main(){
	
led=0;
	while(1){
if(sw1==0 || sw2==0){

led=1;
}
else {
	led=0;
}
}
}