#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>
#include<string.h>
#include<stdio.h>

#define MSGSZ 128

typedef struct msgbuf {

	int mtype;
	char mText[MSGSZ];

};

void main () {

int msgid;
key_t key = 1234;

msgget(key, 0666);

struct msgbuf rbuf;

msgrcv(msgid, &rbuf, MSGSZ, 1, 0);

printf("%s", rbuf.mText);

}
