
#ifndef ADC_H
	#define ADC_H

void ADCInit(void);
unsigned int adcRead(unsigned char channel);

void ADCInit(void)
{
	ADMUX = (1<<REFS1) | (1<<REFS0);	/* ADLAR = 0 (Right Aligned) */
	ADCSRA = (1<<ADEN) | (0x7);			/* Prescalar = /128 */
}

unsigned int adcRead(unsigned char channel)
{
	ADMUX = (0x20);
	ADMUX |= (channel);
	ADCSRA |= (1<<ADSC);
	while(!(ADCSRA & (1<<ADIF)))
		asm volatile("NOP");

	return (ADC);


#endif
}


