#include <stdio.h>
#include <stdlib.h>

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

	Node *rear;
	Node *front;

} Queue;
/*
 *
 */
void init(Queue *q) {
	/* TODO: ADD YOUR CODE HERE */

	q->front = NULL ;
	q->rear = NULL ;

}
/*
 *
 */
int isEmpty(Queue *q) {
	/* TODO: ADD YOUR CODE HERE */

	if(q->front == q->rear == NULL){

        return 1;

	}
	else
	return 0;
}
/*
 *
 */
Item dequeue(Queue *q) {
	/* TODO: ADD YOUR CODE HERE */

	Item item;
	if(isEmpty(&q)){

        printf("error");
	}
	else{

        item = q->front->data ;
        q->front = q->front->next ;
        return item;
	}


}
/*
 *
 */
void enqueue(Queue *q, Item val) {
	/* TODO: ADD YOUR CODE HERE */

	Node *temp = (Node)* malloc(sizeof(Node));
	temp->data = val;

	if(isEmpty(&q)){

        q->front = q->rear = temp ;
        q->rear->next = NULL;
	}
	else{

		q->rear = temp;
        q->rear->next = NULL;
	}

}
/*
 *
 */
void destroy(Queue *q) {
	/* TODO: ADD YOUR CODE HERE */

	Node *temp ;
	while(q->front != NULL){

        temp = q->front;
        q->front = q->front->next;
        free(temp);
	}
	free(q->front);
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
