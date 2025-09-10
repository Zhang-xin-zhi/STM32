//这是一个用于Git测试的工程

#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

uint8_t KeyNum;		//定义用于接收按键键码的变量

int main(void)
{
    OLED_Init();
    //OLED_ShowChar(1,1,'A');
    OLED_ShowString(1,3,"Hello World!");
    
    OLED_ShowSignedNum(2,7,-66,5);
    
    OLED_ShowHexNum(3,1,0xAA55,4);              //显示16进制数
    OLED_ShowBinNum(4,1,0xAA55,16);             //显示2进制数
    
    
	while (1)
	{

		
		
		
		
		
		
		
		
	}
}
