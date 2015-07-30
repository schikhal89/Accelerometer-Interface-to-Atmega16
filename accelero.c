#include<avr/io.h>
#include<ADC.h>
#include<util/delay.h>
#include<LCD_mega16.h>
void main()
{
unsigned int adc_xval,adc_yval,adc_zval;
ADCInit();
lcd_init();
while(1)
{
adc_xval=adcRead(0);
lcd_gotoxy1(1);
lcd_showvalue(adc_xval);

adc_yval=adcRead(1);
lcd_gotoxy1(4);
lcd_showvalue(adc_yval);

adc_zval=adcRead(2);
lcd_gotoxy1(7);
lcd_showvalue(adc_zval);



}


}