#include<reg51.h>
void delay(unsigned int count){
unsigned int k;
while(count){
k=115;
	while(k>0)
		k--;
count--;


}

}
void main(){
unsigned char i;
	for(i=0x00;i<=0xFF;i++){
	P2=i;
		delay(20);
	}


}