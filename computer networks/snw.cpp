#include<iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;

int j = 1;
int k = 0;
int i;

void to_physical_layer();

struct packet
{ 
        int data;
};

struct frame
{ 
        packet p;
        int seqno;
        int event;

}f,sframe,copyframe;

int wait_for_event()
{
	return rand() % 2;
} 

void from_network_layer()
{
	sframe.p.data =k;
        k++;
	to_physical_layer();	
}

void to_physical_layer() //framing of the packet
{
	if(k<i){


		sframe.seqno=(j+1)%2;
		copyframe=sframe; // store current frame
		sframe.event=wait_for_event();
	
	        cout<<"\n\nEvent Generated "<<sframe.event<<"\n\n";
        	j++;
	}
}

void sender()
{
	if(k<i+1)
	{
	        sleep(1);
	        if(sframe.event==0)
	        {   
		        cout<<"\n Data: "<<k;
		        cout<<"\n Ack recived "<<k-1<<"\n";
	
			from_network_layer();
			sender();
	
		
	        }
	        if(sframe.event==1)
	        {
		        cout<<"\n Time Out Lossing of data : ";
		        cout<<"\n Resending Data!";
		        //frame.seqno=(j+1)%2;
                        do{
			   copyframe.event = wait_for_event();
                           if(copyframe.event==1)
                            { cout<<"\n Time Out Lossing of data : ";
		              cout<<"\n Resending Data!";
                            }
			    else 
                            { cout<<"\n";
                              cout<<"\nEvent generated : "<<copyframe.event; 
                              cout<<"\n Data: "<<k;
		              cout<<"\n Ack recived "<<k-1<<"\n";
			     
			      k++;
       			      to_physical_layer();
			      sender();
                             
                            } 
                          }while(copyframe.event==1);

		        //sender();
		}
	}
}

int main() {
	
	extern int i;
	cout << "\nEnter number of checks: ";
	cin >> i;
	from_network_layer();	
	sender();

        return 0;
}	
