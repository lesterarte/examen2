#include "node.hpp"
#include "list.hpp"
#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>
using std::string;
using std::stringstream;
using namespace std; 

List::List()
{

}

List::List(Person persona)
{
	head = new Node(persona); 
}

List::~List()
{
	if(head)
		delete [] head; 

}

void List::setHead(Person persona)
{
	this->head = new Node(persona); 
}

Person List::getHead()
{
	return this-> head -> getValue(); 
}

void List::insert(int posicion, Person persona)
{

	

}

Person List::at(int posicion)
{
	Node* temp = head; 
	int cont=0;
	if(size() >posicion)
	{
		if(posicion==0)
		{
			return head->getValue();
		}
		while(cont<posicion)
		{
			temp= temp->getNext();
			cont++; 
		}
		return temp->getValue();
	}
}

void List::erase(int posicion)
{
	Node* temp = head;
	Node* temp2 = head;  
	Node* temp3 = head; 

	if(posicion == 0 )
	{
		setHead(head->getNext()->getValue());
	}
	else
	{
		for(int i=0; i<posicion-1; i++)
		{
			temp = temp->getNext();
		}

		for(int i=0; i<posicion+1; i++)
		{
			temp2 = temp2->getNext();
		}
		for(int i=0; i<posicion; i++)
		{
			temp3 = temp3->getNext();
		}

		temp = temp2; 
		delete[] temp3;		
	}	
}

void List::concat(List* lista)
{
	
}

int List::find(Person persona)
{
	Node* temp = head; 
	int cont=0;
	while(temp -> hasNext())
	{
		if((head->getValue().getName()) == (temp->getValue().getName()))
		{
			cont++; 
			break; 			
		}
		temp = temp->getNext(); 
	}

	return cont; 
}

int List::size()
{
	int cont=0; 
	while(head -> hasNext())
	{
		cont++; 

	}
	return cont; 
}

void List::push_back(Person persona)
{
	
	if(head == NULL)
	{
		head = new Node(persona);
	}
	else
	{
		Node* temp = head; 
		while(temp->hasNext())
		{
			temp = temp->getNext();
		}
		head = new Node(persona);
	}
}

Node* List::first()
{
	return head; 

}