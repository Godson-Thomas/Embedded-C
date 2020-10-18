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
sbit pin=P2^0;
void main(){
while(1){

pin=0;
	delay(2000);
pin=1;
	delay(2000);

}
}