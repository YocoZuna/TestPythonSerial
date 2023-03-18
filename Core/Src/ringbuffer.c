/*
 * ringbuffer.c
 *
 *  Created on: Mar 18, 2023
 *      Author: dawid
 */
#include "main.h"
#include "ringbuffer.h"



void RingBufferWrite(uint8_t data,Ring_buffer_t* buffor);
uint8_t RingBufferRead(uint8_t data,Ring_buffer_t* buffor);
void RestartBuffor(Ring_buffer_t* buffor);






uint8_t RingBufferRead(uint8_t data,Ring_buffer_t* buffor)
{
	uint8_t tempHead;

	tempHead = buffor->head+1;
	if(tempHead == buffor->tail)
		return -1;
	else
	{
		buffor->data[buffor->head] = data;

		buffor->head++;
		buffor->head  =buffor->head% bufforsize;				// Sprawdzenie przekroczenia buffora
	}
	return 0 ;
}
void RestartBuffor(Ring_buffer_t* buffor)
{
	buffor->head=0;
	buffor->tail=0;
	ClearBuffer(buffor,0,bufforsize);
}
