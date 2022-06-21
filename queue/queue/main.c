#include <stdio.h>
#include <stdlib.h>
#define size = 100

/*
 * Process: Each process has a name and has an execution time.
 *          We keep track of how long the process still needs
 *          to run on the processor. "remaining_time" is the
 *          remaining execution time of the process.
 * Item: An item that is being enqueued to or dequeued from the queue
 *       It is a pointer to the process
 */
typedef struct {
	char *name;
	int remaining_time;
} Process, *Item;
/*
 *
 */
typedef struct Node {
	Item data;
	struct Node* next;
} Node;
/*
 *
 */
typedef struct {
	/* TODO: ADD YOUR CODE HERE */
	Node front;
	Node back;

} Queue;
/*
 *
 */
void init(Queue *q) {
	/* TODO: ADD YOUR CODE HERE */
	int arr[size];
	q->front = -1;
	q->back = -1;
}
/*
 *
 */
int isEmpty(Queue *q) {


	if(q->back == -1 && q->front == -1){

        return 1;
	}
	else{

        return 0;
	}
}
/*
 *
 */
Item dequeue(Queue *q) {
	/* TODO: ADD YOUR CODE HERE */
	Item value;
	if(isEmpty(&q)){

      printf("error queue empty");
      exit(1);
	}

	else if(q->front = q->back){

        q->front = q->back = -1;
	}
	else{

        value = q->front.data;
        q->front++;
	}
}
/*
 *
 */
void enqueue(Queue *q, Item val) {
	/* TODO: ADD YOUR CODE HERE */


	if (q->back == size - 1){

        printf("error stack full");
	}

	else if(isEmpty(&q)){

        q->front = q->back = 0;
        arr[q->back] = val;
	}
	else{

        q->back++;
        arr[q->back] = val;
	}
}
/*
 *
 */
void destroy(Queue *q) {
	/* TODO: ADD YOUR CODE HERE */
}
/*
 * RoundRobin Scheduling
 */
void RoundRobin(char* filename)
{
	/* TODO: ADD YOUR CODE HERE */
}
/*
 *
 */
int main(int argc, char**argv) {
	if(argc!=2) {
		printf("Usage: %s filename\n", argv[0]);
		exit(1);
	}

	RoundRobin(argv[1]);

	return 0;
}
