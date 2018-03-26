#include <stdio.h>
#include <stdlib.h>

void find(){

	unsigned int buffer=0x80ECFC0;
	unsigned int number[24];
	unsigned int count=0;
	
	
	for(unsigned int i=0; i <=0xffffffff; i++){
		srand((unsigned char*)i);

		for(int j=0; j<24; j++){
			number[j]=random();
		}

		/*
		seed value: 76200282
		number[22]: 80ecfed
		*/
                if(0x80ECFC0 <= number[22] && number[22] < 0x80ed040){

                        printf("seed value: %u\n",i);                        
                        printf("number[22]: %x\n",number[22]);                 
                 }
		
		if(i%1000000==0){
			printf("COUNT: %d\n",i);
		}
	}

}

int main(){

	find();
}
