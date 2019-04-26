/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Setembro/2017

*/

#include <iostream>
#include <queue>
#include <locale.h>

class ClassFila
{
	private:
		std::queue<int> Queue;
	public:
		void Enqueue(int element);
		int Dequeue();
		int Size();
		bool isEmpty();
		int Front();
};
