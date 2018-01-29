#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
  
#define KEY 81
#define BUFFSIZE 1024

typedef struct msgbuf {
        unsigned long mtype;
        char mtext[BUFFSIZE];      /* message text */
}MSGBUF;

int main(){
	MSGBUF  sndbuf;
	int msgid = msgget(KEY, IPC_CREAT | 0660 ) ;
	printf("KEY:%d\n", KEY);	
	printf("id:%d\n", msgid);
	
	while(1){
		char str[BUFFSIZE];
		memset(str, sizeof(str), 0);
		memset(&sndbuf, sizeof(sndbuf), 0);
		
		scanf("%s", str);
		
		sndbuf.mtype = 1;
		strcpy(sndbuf.mtext, str);
		int rc = msgsnd(msgid, &sndbuf ,strlen(str), 0 ); 
	}
	
	return 0;
}
