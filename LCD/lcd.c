#include<reg51.h>
sbit en=P1^1;
sbit rs=P1^0;
void delay(unsigned int count){
unsigned int i;
	while(count){
	i=115;
	while(i>0)
	i--;
count--;
}

}
void cmd(unsigned char val){

rs=0;
P2=val;
en=1;
delay(50);
en=0;
}
void dat(unsigned char val){
rs=1;
P2=val;
en=1;
delay(50);
en=0;
}


void main(){

  cmd(0x38);
	cmd(0x02);	// return home
	// clear display
	cmd(0x0C);	// Display ON cursor OFF
	cmd(0x06);		
	cmd(0x80);	// 0xC0 address of 2nd Row
	
while(1){

dat('h');
dat('e');
dat('l');
dat('l');
dat('o');

cmd(0x01);	
}

}
