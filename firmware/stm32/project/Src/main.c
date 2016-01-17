#include "stm32f10x.h"
#include "hardware.h"

static volatile uint32_t rxBuf[BUFSIZE], txBuf[BUFSIZE];
static volatile int spi_data_ready;


void InitGPIO(void)
{
  //GPIO structure used to initialize port
  GPIO_InitTypeDef GPIO_InitStructure;
  //Enable clock on APB2 pripheral bus where button and LEDs are connected
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB,  ENABLE);
  //select pins to initialize LED
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
  //select output push-pull mode
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  //highest speed available
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init( GPIOB, &GPIO_InitStructure);
}


 void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
}


int main(void)
{

 
while(1)
	{
		Delay(500000);
   	GPIOB->BSRR =GPIO_BSRR_BS11;		// ????????? ??? 3.  GPIO_BSRR_BS3 ??? ????????
		Delay(500000);
   	GPIOB->BSRR =GPIO_BSRR_BR11;		// ???????? ??? 3. 
	}


}	
