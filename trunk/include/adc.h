/*
 * adc.h
 *
 * Created: 27.07.2012 17:57:30
 *  Author: OliverS
 *
 * $Id: adc.h 7 2012-07-30 11:23:46Z olischulz24@googlemail.com $
 */ 


#ifndef ADC_H_
#define ADC_H_

void adcInit();
uint16_t adcRead(uint8_t channel);
uint16_t adcGet(uint8_t channel);


#endif /* ADC_H_ */