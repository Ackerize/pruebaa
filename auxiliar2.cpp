#include <bits/stdc++.h> 
using namespace std; 

struct Node {  
	int number;
  string cadena; 
	Node* next; 
	Node* prev; 
}; 

void insertarInicio(Node** list, int new_number, string cadena) { 
	Node* new_node = new Node(); 
	new_node->number = new_number;
  new_node->cadena = cadena;
	new_node->next = (*list); 
	new_node->prev = NULL; 

	if ((*list) != NULL) 
		(*list)->prev = new_node; 

	(*list) = new_node; 
} 

void insertarFinal(Node** list, int new_number, string cadena) { 
	Node* new_node = new Node(); 
	Node* last = *list;
	new_node->number = new_number; 
  new_node->cadena = cadena;
	new_node->next = NULL; 

	if (*list == NULL) { 
		new_node->prev = NULL; 
		*list = new_node; 
		return; 
	} 

	while (last->next != NULL) 
		last = last->next; 

	last->next = new_node; 
	new_node->prev = last; 
	return; 
} 

void deleteNode(Node** list, Node* del) { 
  if (*list == NULL || del == NULL) 
    return; 
 
  if (*list == del) 
    *list = del->next; 
 
  if (del->next != NULL) 
    del->next->prev = del->prev; 
 
  if (del->prev != NULL) 
    del->prev->next = del->next; 
 
  free(del); 
  return; 
} 

Node* findNodeByNumber(Node** list, int number) {
  Node* last = *list;

  while (last){
    if(last->number == number) return last;
    last = last->next; 
  }
  return NULL;
}

Node* findNodeByString(Node** list, string cadena) {
  Node* last = *list;

  while (last){
    if(last->cadena == cadena) return last;
    last = last->next; 
  }

  return NULL;
}

void deleteNodeAux(Node** list, int number){
  Node* nodoBorrar = findNodeByNumber(list, number);
  deleteNode(list, nodoBorrar);
}


void showList(Node* node) { 
	Node* last; 
	cout<<"\nMostrando list hacia adelante \n"; 
	while (node != NULL) { 
		cout<<" "<<node->number<<" "; 
		last = node; 
		node = node->next; 
	}
}

void truncate(Node** list){
	Node* node = *list;
	int cont = 0;
	while (node != NULL) { 
		cont++;
		if(cont > 10){
			deleteNode(list, node);
		}
		node = node->next; 
	}
}

void createCSV(Node** list) 
{ 
    fstream fout; 
    fout.open("reportcard.csv", ios::out | ios::app); 

		Node* node = *list;
  
    while(node != NULL) { 
      fout << node->cadena << ", " << node->number << "\n"; 
			node = node->next;
    } 
} 

void readCSV(Node** list) 
{ 
	fstream fin; 

	fin.open("reportcard.csv", ios::in); 
	
	int rollnum, roll2, count = 0; 

	vector<string> row; 
	string line, word, temp; 

	while (!fin.eof()) { 
		row.clear(); 
		getline(fin, line); 
		stringstream s(line);
		while (getline(s, word, ',')) { 
			row.push_back(word); 
		} 
		int currentNumber = atoi(&row[1][0]);
		insertarFinal(list, currentNumber, row[0]);
	} 
} 


int main(){
  Node* inicio = NULL; 
	/*insertarFinal(&inicio, 6, "Rudi"); 
	insertarInicio(&inicio, 70, "Ana"); 
	insertarInicio(&inicio, 45, "David"); 
	insertarFinal(&inicio, 14, "Belen"); 
	insertarFinal(&inicio, 60, "Rudi"); 
	insertarInicio(&inicio, 7, "Ana"); 
	insertarInicio(&inicio, 5, "David"); 
	insertarFinal(&inicio, 4, "Belen"); 
	insertarFinal(&inicio, 6, "Rudi"); 
	insertarInicio(&inicio, 75, "Ana"); 
	cout << "La lista creada es: "; 
	showList(inicio); 
  createCSV(&inicio);
  read_record(&inicio); 
  cout << "La lista creada es: "; 
	showList(inicio);
  */
  return 0;
}
