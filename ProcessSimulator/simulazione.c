#include <stdio.h>

#define MAXP 4

struct process {
	int pid;
	int priority;
};

int generateProcess(process *);   // generate a process

main()
{
    proces ready[MAXP];
    int i;
    int pid=0;    // this is a progressive counter 
    
    for (i=0; i<MAXP; i++){       // generate MAXP process
      generateProcess(process *ready, pid);
    }  
    
}


// **generateProcess: generate a process and insert it into the 
//                    ready queue process maintaning the priority order

int generateProcess(process *p) {
	
}
