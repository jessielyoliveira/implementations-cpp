/**
 * @file swap.h
 * @author Jessiely Oliveira (jessiely.costa@gmail.com)
 */

#ifndef SWAP_H
#define SWAP_H

class Node {
private:
	int content;
	Node *previous;
	Node *next;
	Node *first;
	Node *last;
public:
	Node();
	
	Node *getPrevious() { return this->previous; }
	Node *getNext() { return this->next; }
	int getContent() { return this->content;}

	void setPrevious(Node *previous) { this->previous = previous; }
	void setNext(Node *next) { this->next = next; }
	void setContent(int content) { this->content = content; }

	bool empty();
	void add(int content);
	
};

/**
 * @brief default constructor
 */
Node::Node() {
	this->first = NULL;
	this->last = NULL;
}

/**
 * @brief checks if the list is empty
 */
bool Node::empty() {
	((this->first == NULL) && (this->last == NULL)) ? true : false;
}

void Node::add(int content) {
	Node newContent = new Node();
	newContent->

}

#endif