/*
 * ringbuffer.h
 *
 *  Created on: Mar 18, 2023
 *      Author: dawid
 */

#ifndef INC_RINGBUFFER_H_
#define INC_RINGBUFFER_H_

#define bufforsize 20
#define ClearBuffer(buffor,cowpisac,size)  memset(buffor,cowpisac,size)


typedef struct
{
	uint8_t head;
	uint8_t tail;
	uint8_t data[bufforsize];
}Ring_buffer_t;


void RingBufferWrite(uint8_t data,Ring_buffer_t* buffor);
uint8_t RingBufferRead(uint8_t data,Ring_buffer_t* buffor);
void RestartBuffor(Ring_buffer_t* buffor);

#endif /* INC_RINGBUFFER_H_ */
