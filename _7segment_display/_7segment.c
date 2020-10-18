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
unsigned char ar[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned char i=10;
P2=0x00;
while(1){
for(i=0;i<10;i++){

P2=ar[i];
	delay(1000);



}



}
}
