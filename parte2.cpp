#include <bits/stdc++.h> 
using namespace std; 

/* ---------------------------------------------------------------------- */
// tt
struct Node 
{  
	int number;
    string cadena; 
	Node* next; 
	Node* prev; 
}; 

void insertarInicio(Node** list, int new_number, string cadena) 
{ 
	Node* new_node = new Node(); 
	new_node->number = new_number;
    new_node->cadena = cadena;
	new_node->next = (*list); 
	new_node->prev = NULL; 

	if ((*list) != NULL) 
		(*list)->prev = new_node; 

	(*list) = new_node; 
} 

void insertarFinal(Node** list, int new_number, string cadena) 
{ 
	Node* new_node = new Node(); 
	Node* last = *list;
	new_node->number = new_number; 
    new_node->cadena = cadena;
	new_node->next = NULL; 


	if (*list == NULL) 
	{ 
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

void deleteNode(Node** list, Node* del) 
{ 
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

Node* findNodeByNumber(Node** list, int number){
  Node* last = *list;

  while (last){
    if(last->number == number){
      return last;
    }
    last = last->next; 
  }

  return NULL;
}

Node* findNodeByString(Node** list, string cadena){
  Node* last = *list;

  while (last){
    if(last->cadena == cadena){
      return last;
    }
    last = last->next; 
  }

  return NULL;
}

void deleteNodeAux(Node** list, int number){
  Node* nodoBorrar = findNodeByNumber(list, number);
  deleteNode(list, nodoBorrar);
}


void showList(Node* node) 
{ 
	Node* last; 
	cout<<"\nMostrando list hacia adelante \n"; 
	while (node != NULL) 
	{ 
		cout<<" "<<node->number<<" "; 
		last = node; 
		node = node->next; 
	} 

	cout<<"\nMostrando list hacia atras \n"; 
	while (last != NULL) 
	{ 
		cout<<" "<<last->number<<" "; 
		last = last->prev; 
	} 
} 

/* ----------------------------------------------------------------------------- */
// uu
void swap(Node* a, Node* b) {
  Node t = *a;
  a->number = b->number;
  a->cadena = b->cadena;
  b->number = t.number;
  b->cadena = t.cadena;
}
 
Node* findNodeByPosition(Node* node, int position){
  Node* last, *aux = node;
  int currentIndex = 0; 
	while (aux->next != NULL && currentIndex < position) { 
		aux = aux->next; 
    currentIndex++;
	}
  return aux;
}
 
int partition (Node** list, int low, int high) {
  Node* last = *list;
  Node* pivot = findNodeByPosition(last, high);
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++) {
    Node* current = findNodeByPosition(last, j);
    if (current->number > pivot->number) {
      i++;
      Node *auxI = findNodeByPosition(last, i);
      Node *auxJ = findNodeByPosition(last, j);
      swap(auxI, auxJ);
    }
  }
  Node *auxH = findNodeByPosition(last, i + 1);
  swap(auxH, pivot);
  return (i + 1);
}
 
void quickSort(Node** list, int low, int high) {
  if (low < high) {
    int pi = partition(list, low, high);
    quickSort(list, low, pi - 1);
    quickSort(list, pi + 1, high);
  }
}

/* ----------------------------------------------------------------------------- */
// vv

void swap(Node* a, Node* b) {
  Node t = *a;
  a->number = b->number;
  a->cadena = b->cadena;
  b->number = t.number;
  b->cadena = t.cadena;
}
 
 
Node* findNodeByPosition(Node* node, int position){
  Node* last, *aux = node;
  int currentIndex = 0; 
	while (aux->next != NULL && currentIndex < position) { 
		aux = aux->next; 
    currentIndex++;
	}
  return aux;
}
 
int partition (Node** list, int low, int high) {
  Node* last = *list;
  Node* pivot = findNodeByPosition(last, high);
  int i = (low - 1), result;
  for (int j = low; j <= high - 1; j++) {
    Node* current = findNodeByPosition(last, j);
    char *p = &current->cadena[0];
		char *m = &pivot->cadena[0];
    result = strcmp(p,m);
    if (result > 0) {
      i++;
      Node *auxI = findNodeByPosition(last, i);
      Node *auxJ = findNodeByPosition(last, j);
      swap(auxI, auxJ);
    }
  }
  Node *auxH = findNodeByPosition(last, i + 1);
  swap(auxH, pivot);
  return (i + 1);
}
 
void quickSort(Node** list, int low, int high) {
  if (low < high) {
    int pi = partition(list, low, high);
    quickSort(list, low, pi - 1);
    quickSort(list, pi + 1, high);
  }
}

/* ------------------------------------------------------------------------- */
// ww

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

/* ------------------------------------------------------------------------- */
// xx
void readCSV(Node** list) 
{ 
	fstream fin; 

	fin.open("data.csv", ios::in); 

	vector<string> row; 
	string line, word; 

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

/* ------------------------------------------------------------------------- */
// yy
void createCSV(Node** list) 
{ 
  fstream fout; 
  fout.open("data.csv", ios::out | ios::app); 

	Node* node = *list;
  
  while(node != NULL) { 
    fout << node->cadena << ", " << node->number << "\n"; 
		node = node->next;
  } 
} 
