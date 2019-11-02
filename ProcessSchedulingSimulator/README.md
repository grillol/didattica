# Process scheduling simulator


### Premise

## Round Robin Algorithm




__The algorithm description:__

1. The queue structure in ready queue is of First In First Out (FIFO) type.

2. A fixed time quantum or time slice is allotted to every process that arrives in the queue.

3. The first process that arrives is selected and sent to the processor for execution. 
   
4. If it is not able to complete its execution within the time quantum provided, 
   then an interrupt is generated using an automated timer. The process is then stopped and 
   is sent back at the end of the queue. However, the state is saved and context is thereby 
   stored in memory. This helps the process to resume from the point where it was interrupted.

5. The scheduler selects another process from the ready queue and dispatches it to the processor for its execution. 
   It is executed until the time Quantum does not exceed.

6. The same steps are repeated until all the process are finished.



## First Come First Served (FCFS) Scheduling Algorithm ##


__The algorithm description:__

The process that requests the CPU first is allocated the CPU first. This is easily implemented with a FIFO queue for managing the tasks. As the process come in, they are put at the end of the queue. As the CPU finishes each task, it removes it from the start of the queue and heads on to the next task.


## Shortest Job First (SJF) Scheduling Algorithm ##


__The algorithm description:__

In shortest job first scheduling algorithm, the processor selects the waiting process with the smallest execution time to execute next.


## Priority Scheduling Algorithm ##


__The algorithm description:__

In priority scheduling algorithm each process has a priority associated with it and as each process hits the queue, it is stored in based on its priority so that process with higher priority are dealt with first. It should be noted that equal priority processes are scheduled in FCFS order.

