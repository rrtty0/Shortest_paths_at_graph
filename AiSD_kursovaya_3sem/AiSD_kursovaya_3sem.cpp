// AiSD_kursovaya_3sem.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"



int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	Graph graph;
	
	//graph.keyboardInput();
	graph.fileInput();
	//graph.generation(graph.NEGATIVE);
	graph.output();

	//graph.algorithmOfDijkstra();
	//graph.rarefiedGraphAlgorithmOfDijkstra();
	graph.algorithmOfFloyd();

	cout << "\n\n";
	system("pause");
    return 0;
}

