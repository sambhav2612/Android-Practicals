#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/types.h>
#include<string.h>
#include<stdio.h>

#define MSGSZ 128

struct msgbuf {
	long mtype;
	char mText[MSGSZ];
};

void main() {

int msgid, buflen;
int msgflag = IPC_CREAT / 0666;

key_t key = 1234;

struct msgbuf sbuf;

msgid = msgget(key, msgflag);

scanf("%s", &sbuf.mText);

sbuf.mtype = 1;
getchar();

buflen = strlen(sbuf.mText) + 1;

msgsnd(msgid, &sbuf, buflen, IPC_NOWAIT);
}
