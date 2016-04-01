#include "person.hpp"
#include "node.hpp"
#include "list.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
using std::string;
using std::stringstream;
using namespace std; 



Node::Node()
{

}

Node::Node(Person persona)
{
	next = new Node(persona);
}

Node::~Node()
{
	if (next)
		delete[] next;		

}

Person Node::getValue()
{
	return persona; 

}

Node* Node::getNext()
{
	return next; 
}

void Node::setValue(Person persona)
{
	this -> persona = persona; 
}

void Node::setNext(Node* next)
{
	this -> next = next;

}

bool Node::hasNext()
{
	if(next == NULL) 
		return false; 
	else
		return true; 	

}


