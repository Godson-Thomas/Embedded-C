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
	
	
signed int z;
	while(1){
	for(z=-4;z<=4;z++){
	P2=z;
		delay(2000);
	
	}
}

}