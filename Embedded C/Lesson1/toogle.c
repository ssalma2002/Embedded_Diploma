#include <stdio.h>
typedef volatile unsigned int vuint32;
#define Base_RCC 0x40021000
#define Base_GPIOPA 0x40010800
#define RCC_APB2ENR *(volatile unsigned int *) (Base_RCC + 0x18)
#define  GPIOPA_CRH *(volatile unsigned int *) (Base_GPIOPA + 0x04)
#define  GPIOPA_ODR *(volatile unsigned int *) (Base_GPIOPA + 0x0c)
typedef union {
	vuint32 all_fields;
	struct{
		vuint32 reserved :13;
		vuint32 pin13:1;

	}Pin;
}Reg_ODR;
volatile Reg_ODR* R_ODR = (volatile Reg_ODR*)(GPIOPA_ODR);

int main(void)
{
	RCC_APB2ENR  |= 1<<2;
	GPIOPA_CRH &= fff0fffff;
	GPIOPA_CRH |= 000200000 ;
	while(1)
	{
		R_ODR->Pin.pin13 = 1;
		for (int i=0; i<5000;i++);
		R_ODR->Pin.pin13 = 0;
		for (int i=0; i<5000;i++);
	}
}
