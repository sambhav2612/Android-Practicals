#include<iostream>
using namespace std;

//Structure for data.
typedef struct
{
int data;
}packet;

//Structure for frame.
typedef struct
{
int sequence;
int ack;
packet info;
}frame;


//structure for 3 possible cases.
typedef enum{frame_recieved,timeout,no_event}event_type;


int i=0;
char turn;

frame DATA;


	//creating main.
	int main()
	{
	sender();
	reciever();

	return 0;
	}


//sender func.

void sender()
{
static frame s;
event_type event;
packet information;
static frameToSend=0;
static int flag=0;


		if(flag==0)
		{
		dataAtSend(&information);

		s.info=information;
		s.sequence=frameToSend;
		cout<<"INFO :"<<s.info<<"            "<<"SEQUENCE NO :"<<s.sequence;
		turn =r;

		dataToSend(&s);

		flag=1;
		}

	waitForEventAtSenderSide(&event);

			if(turn=='s')
			{
				if(event==frame_arrived)
				{
				dataAtSend(&information);
				frameToSend++;
				s.info=information;
				s.sequence=frameToSend;
				cout<<"INFO :"<<s.info<<"            "<<"SEQUENCE NO :"<<s.sequence;
				turn =r;

				//dataToSend(&s);

				}

				if(event==timeout)
				{
				cout<<"RESENDING FRAME\n";
				turn='r';
				//dataToSend(&s);
				}
			}
}


void receiver()
{
static int frameExpected=0;
frame s,r;
evnt_type event;

	waitForEventAtReceiversSide(&event);

			if(turn=='r')
			{
				if(event==frame_arrived)
				{
				dataAtRec(&r);
						if(r.info==frameExpected)
						{
						cout<<"PACKET "<<(*information).data<<" RECEIVED........ACKNOWLEDGEMENT SENT \n";
						frameExpected++;
						}

						else
						cout<<"ACKNOWLEDGEMENT RESENT\n";
				turn=s;
				cout<<"PACKET RECEIVED........ACKNOWLEDGEMENT SENT \n";

				}
				
			}
}


void dataAtRec(packet *information)
{
	*information=DATA;
}


void dataAtSend(packety *information)
{
	(*information).data=i;
	i++;
}


waitForEventAtSenderSide(event_type *e)
{
static int timer=0;
	if(turn =='s')
	{
		timer++;

			if(timer=TIMEOUT)
			{*e=timeout;
			cout<<"ACKNOWLEDGEMMENT NOT RECIEVED\n";
			timer =0;
			 return;
			}

			else
			{
			timer=0;
			*e frame_arrived;
			}
	}
}



waitForEventAtReceiversSide(event_type *e)
{
	if(turn =='r')
	{
		*e=frame_arrived;
	}
}

















































