#include<reg51.h>
sbit p=P2^0;
sbit n=P2^1;
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

while(1){

p=1;
n=0;
delay(5000);
p=0;
n=1;
delay(5000);
}


}