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
unsigned char val[]="012345ABC";
unsigned char i;
for(i=0;i<=9;i++){
P2=val[i];
delay(1000);
}






}