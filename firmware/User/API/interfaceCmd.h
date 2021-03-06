#ifndef _INTERFACECMD_H_
#define _INTERFACECMD_H_

#include "includes.h"


#define CMD_MAX_LIST 20
#define CMD_MAX_CHAR 100


typedef struct 
{
	char 	queue[CMD_MAX_LIST][CMD_MAX_CHAR];
	u8	 	index_r ; // Ring buffer read position
	u8		index_w ; // Ring buffer write position
//    u8      parsed ;  //
	u8		count ; 	// Count of commands in the queue	
}QUEUE;

extern QUEUE infoCmd ;


bool storeCmd(const char * format,...);
void mustStoreCmd(const char * format,...);
void clearCmdQueue(void);
void parseQueueCmd(void);
void sendQueueCmd(void);

#endif

