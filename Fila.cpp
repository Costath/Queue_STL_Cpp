/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Setembro/2017

*/

#include "Fila.hpp"


void ClassFila::Enqueue(int element){
	
	Queue.push(element);
	
}

int ClassFila::Dequeue(){
	int retirado;
	
	retirado = Queue.front();
	
	Queue.pop();
	
	return retirado;
}

int ClassFila::Size(){
	
	return Queue.size();
}

bool ClassFila::isEmpty(){

	return Queue.empty();
}

int ClassFila::Front(){
		
	return Queue.front();
}



