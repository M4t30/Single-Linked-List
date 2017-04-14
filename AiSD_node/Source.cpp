#include <iostream>
#include <ctime>
using namespace std;

//*************************************************************************************************************************

struct node;

void insertNode(node * &Head, int x);
void insertNNodesWithRandomValues(node * &Head, int amount);
void deleteHead(node * &Head);
void deleteAllNodes(node * &Head);
void deleteAfterNode(node * &Head);
void deleteChosenNode(node * &Head, int value);
void swapWithPrev(node * &Head, int value);
void swapWithNext(node * &Head, int value);
void bubbleSort(node * &Head);
void changeHalfOfList(node * &Head);
void everySecondAtTheEnd(node * &Head);
void addTwoPasteIntoThirdAndDeleteBetween(node * &Head);
void flipList(node * &Head);
void insertWithSorting(node * &Head, int x);
void deleteNodesWithEvenValue(node * &Head);
void swapTwoChosenNodes(node * &Head, int valueOfFirst, int valueOfSecond);
void bubbleSortWithOneBumper(node * &Head);
void insertSort(node * &Head);
void selectSort(node * &Head);
void minimumSelectSort(node * &Head);
void mergeSort(node* &Head);
void combSort(node * &Head);
void copyNTimesEntireList(node * &Head, int amount);
void copyEntireListSumOfElementsTimes(node * &Head);
void addNodeEveryThreeNodes(node * &Head);
void changeNodesWithHisSuccessor(node * &Head);
void show(node *Head);
void top(node *Head);

//*************************************************************************************************************************

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                              
struct node
{
	int val;
	node *next;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                                    
int main()
{
	int amount;
	node *Head = NULL;

	int choice;
	int choice2;
	do
	{
		cout << "1. Show menu" << endl
			 << "2. Run function" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\n[SINGLE LINKED LIST]" << endl
				<< "1. Add new" << endl
				<< "2. Add n elements with random values" << endl
				<< "3. Delete head" << endl
				<< "4. Delete entire list" << endl
				<< "5. Delete successor" << endl
				<< "6. Delete chosen element" << endl
				<< "7. Swap chosen with his successor" << endl
				<< "8. Swap chosen with his predecessor" << endl
				<< "9. Bubblesort" << endl
				<< "10. Swap order of half of the list" << endl
				<< "11. Move every second to the end" << endl
				<< "12. Add two nodes, delete them and paste sum into third" << endl
				<< "13. Flip entire list" << endl
				<< "14. Insert with sorting" << endl
				<< "15. Delete even values from list" << endl
				<< "16. Swap two chosen nodes" << endl
				<< "17. Bubblesort with one bumper" << endl
				<< "18. Insertsort" << endl
				<< "19. Selectsort" << endl
				<< "20. Combsort" << endl
				<< "21. Selectsort from maximum to minumum" << endl
				<< "22. Mergesort" << endl
				<< "23. Copy entire list n times" << endl
				<< "24. Copy entire list as many as sum of all elements is equal to" << endl
				<< "25. Swap every node with his successor" << endl
				<< "26. Add new node every three nodes" << endl
				<< "27. Print list" << endl
				<< "28. Print head value" << endl
				<< "0. Exit" << endl;
			break;

		case 2:
			cout << "Choose function:";
			cin >> choice2;
			switch (choice2)
			{
			case 1:
				cout << "Enter node value: ";
				cin >> amount;
				insertNode(Head, amount);                                                               
				break;

			case 2:
				cout << "Enter amount of nodes which you want to add: ";
				cin >> amount;
				insertNNodesWithRandomValues(Head, amount);                   
				break;
			case 3:
				deleteHead(Head);                                                                 
				break;

			case 4:
				deleteAllNodes(Head);                                                   
				break;

			case 5:
				deleteAfterNode(Head);                                                    
				break;

			case 6:
				cout << "Enter value of node which you want to delete: ";  
				cin >> amount;
				deleteChosenNode(Head, amount);
				break;

			case 7:
				cout << "Enter value of node which you want to swap with his successor: ";
				cin >> amount;                         
				swapWithNext(Head, amount);
				break;

			case 8:
				cout << "Enter value of node which you want to swap with his predecessor: ";
				cin >> amount;                        
				swapWithPrev(Head, amount);
				break;

			case 9:
				bubbleSort(Head);                                                  
				break;

			case 10:                                                     
				changeHalfOfList(Head);
				break;

			case 11:
				everySecondAtTheEnd(Head);		                  
				break;

			case 12:
				addTwoPasteIntoThirdAndDeleteBetween(Head);     
				break;

			case 13:
				flipList(Head);                                                                 
				break;

			case 14:
				cout << "Enter value of node: ";                              
				cin >> amount;
				insertWithSorting(Head, amount);
				break;

			case 15:                                                                
				deleteNodesWithEvenValue(Head);
				break;

			case 16:
				cout << "Enter value of first node: ";        
				cin >> amount;
				cout << "Enter value of second node: ";
				int y;
				cin >> y;
				swapTwoChosenNodes(Head, amount, y);
				break;

			case 17:
				bubbleSortWithOneBumper(Head);                   
				break;

			case 18:
				insertSort(Head);													 
				break;

			case 19:
				selectSort(Head);	                                                    
				break;

			case 20:
				combSort(Head);                                                        
				break;

			case 21:
				minimumSelectSort(Head);                                              
				break;

			case 22:
				mergeSort(Head);                                                           
				break;

			case 23:
				cout << "Enter how many times would you like to copy entire liste: ";
				cin >> amount;
				copyNTimesEntireList(Head, amount);                                                       
				break;

			case 24:
				copyEntireListSumOfElementsTimes(Head);                                                           
				break;

			case 25:
				changeNodesWithHisSuccessor(Head);                                           
				break;

			case 26:
				addNodeEveryThreeNodes(Head);                            
				break;			

			case 27:
				show(Head);                                                               
				break;

			case 28:
				top(Head);                                                             
				break;
			}
		}

	} while (choice != 0);
}

//*************************************************************************************************************************
                                                                                                         
void insertNode(node * &Head, int x)
{
	node *tmp = new node;
	tmp->val = x;
	tmp->next = Head;
	Head = tmp;
}

//*************************************************************************************************************************
                                                                                     
void insertNNodesWithRandomValues(node * &Head, int x)
{
	srand(time(NULL));

	for (int i = 0; i < x; i++)
	{
		node *tmp = new node;
		tmp->val = rand() % 1000;
		tmp->next = Head;
		Head = tmp;
	}
}

//*************************************************************************************************************************
                                                                                                           
void deleteHead(node * &Head)
{
	node *tmp = Head;

	if (tmp != NULL)
	{
		Head = Head->next;
		delete tmp;
		cout << "Node has been deleted" << endl;
	}
	else
		cout << "An error occurred during deleting a node" << endl;
}

//*************************************************************************************************************************
                                                                                                     
void deleteAllNodes(node * &Head)
{
	while (Head != NULL)
	{
		node *tmp = Head;
		Head = Head->next;
		delete tmp;
	}	
}

//*************************************************************************************************************************
                                                                                           
void deleteAfterNode(node * &Head)
{
	if ((Head != NULL) && (Head->next != NULL))
	{
		node *tmp = Head->next;
		if (tmp != NULL)
		{
			Head->next = tmp->next;
			cout << "Successor has been deleted" << endl;
			delete tmp;
		}
	}
	else
		cout << "An error occurred during deleting a successor" << endl;
}

//*************************************************************************************************************************
                                                                                        
void deleteChosenNode(node * &Head, int x)
{
	bool isDeleted = false;

	if (Head != NULL)
	{
		node *tmp = Head;
		if (tmp->val == x)
		{
			Head = tmp->next;
			isDeleted = true;
			delete tmp;
		}
		else
		{
			while ((tmp->next != NULL) && (tmp->next->val != x))
			{
				tmp = tmp->next;
			}

			if (tmp->next != NULL)
			{
				node *tmp2 = tmp->next;
				tmp->next = tmp2->next;
				delete tmp2;
				isDeleted = true;
			}
		}
	}

	if (isDeleted == true)
		cout << "Node with value: " << x << " has been deleted" << endl;
	else
		cout << "An error occurred during deleting node with value of: " << x << endl;

}

//*************************************************************************************************************************
                                                          
void swapWithNext(node * &Head, int x)
{
	bool isSwapped = false;

	if ((Head != NULL) && (Head->next != NULL))
	{
		node *tmp = Head;

		if (tmp->val == x)
		{
			Head = Head->next;
			tmp->next = Head->next;
			Head->next = tmp;
			isSwapped = true;
		}


		else
		{
			while ((tmp->next != NULL) && tmp->next->val != x)
			{
				tmp = tmp->next;
			}

			if ((tmp->next != NULL) && (tmp->next->next != NULL))
			{
				node *tmp2 = tmp->next->next;
				tmp->next->next = tmp2->next;
				tmp2->next = tmp->next;
				tmp->next = tmp2;
				isSwapped = true;
			}
		}
	}

	if (isSwapped == false)
		cout << "An error occurred during swaping node with value of: " << x << " with his successor" << endl;

}

//*************************************************************************************************************************
                                                         
void swapWithPrev(node * &Head, int x)
{
	bool isSwapped;

	if ((Head != NULL) && (Head->next != NULL))
	{
		node *tmp = Head;

		if (tmp->next->val == x)
		{
			node *tmp2 = tmp->next;
			tmp->next = tmp2->next;
			tmp2->next = tmp;
			Head = tmp2;
			isSwapped = true;
		}

		else
		{
			while ((tmp->next->next->val != NULL) && (tmp->next->next->val != x))
			{
				tmp = tmp->next;
			}

			if (tmp->next->next != NULL)
			{
				node *tmp3 = tmp->next->next;
				tmp->next->next = tmp3->next;
				tmp3->next = tmp->next;
				tmp->next = tmp3;
				isSwapped = true;
			}
		}
	}

	if (isSwapped == false)
		cout << "An error occurred during swaping node with value of: " << x << " with his predecessor" << endl;
}

//*************************************************************************************************************************
                                                                                               
void bubbleSort(node * &Head)
{
	bool isSorted;
	node *tmp_prev = NULL;
	node *tmp = NULL;

	if (Head != NULL && Head->next != NULL)
	{
		do
		{
			isSorted = false;
			tmp = Head;

			while (tmp != NULL && tmp->next != NULL)
			{
				if (tmp->val > tmp->next->val)
				{
					if (tmp == Head)
					{
						Head = Head->next;
						tmp->next = Head->next;
						Head->next = tmp;
						tmp_prev = Head;
					}

					else
					{
						node *tmp_next = tmp->next;
						tmp->next = tmp_next->next;
						tmp_next->next = tmp;
						tmp_prev->next = tmp_next;
						tmp_prev = tmp_prev->next;
					}

					isSorted = true;
				}

				else
				{
					tmp_prev = tmp;
					tmp = tmp->next;
				}
			}

		} while (isSorted == true);
	}

	else
		cout << "List is to small to sort it" << endl;
}

//*************************************************************************************************************************
                                                                                
void changeHalfOfList(node * &Head)
{
	node *tmp = Head;
	int size = 0;
	int modulo_size = 0;
	node *tmp_back = NULL;

	while (tmp != NULL)
	{
		size++;
		tmp_back = tmp;
		tmp = tmp->next;
	}

	size = (size / 2) + modulo_size;

	tmp = Head;
	for (int i = 0; i<size; i++)
	{
		tmp = tmp->next;
	}

	node *tmp_NULL = Head;

	while (tmp_NULL->next != tmp)
	{
		tmp_NULL = tmp_NULL->next;
	}

	tmp_NULL->next = tmp_back->next;
	tmp_back->next = Head;
	Head = tmp;
}

//*************************************************************************************************************************
                                                                              
void everySecondAtTheEnd(node * &Head)
{
	if (Head->next->next != NULL)
	{
		node *tmp = Head->next;
		node *tmp2 = NULL;

		node *counter = Head;
		int size = 0;

		while (counter != NULL)
		{
			size++;
			counter = counter->next;
		}

		size /= 2;

		for (int i = 0; i<size; i++)
		{
			tmp2 = tmp;
			tmp = tmp->next->next;

			int x = tmp2->val;

			while (tmp2->next != NULL)
			{
				swapWithNext(Head, x);

			}

			tmp2 = tmp;
		}
	}

	else
		cout << "List is too short" << endl;
}

//*************************************************************************************************************************
                                                                                  
void addTwoPasteIntoThirdAndDeleteBetween(node * &Head)
{
	if (Head != NULL)
	{
		node *tmp = Head;

		while (tmp != NULL && tmp->next != NULL && tmp->next->next != NULL && tmp->next->next->next != NULL)
		{
			node *tmp2 = tmp->next;
			node *tmp3 = tmp2->next;
			node *tmp4 = tmp3->next;
			node *new_one = new node;

			new_one->val = (tmp2->val + tmp3->val);
			new_one->next = tmp4;
			tmp->next = new_one;
			delete tmp2;
			delete tmp3;

			tmp = tmp4;
		}
	}
}

//*************************************************************************************************************************
                                                                                                         
void flipList(node * &Head)
{
	if (Head != NULL && Head->next != NULL)
	{
		node *tmp = Head;
		node *tmp2 = tmp->next;
		node *tmp_Head = NULL;

		while (tmp != NULL)
		{
			tmp->next = tmp_Head;
			tmp_Head = tmp;
			tmp = tmp2;
			if (tmp2 != NULL)
				tmp2 = tmp2->next;
		}

		Head = tmp_Head;
	}
}

//*************************************************************************************************************************
                                                                                                 
void insertWithSorting(node * &Head, int x)
{
	node *tmp = new node; 
	tmp->val = x;
	node *tmp2 = Head;  
	if (Head == NULL)
	{
		tmp->next = Head;
		Head = tmp;
	}

	else
	{
		if (Head->val > x)
		{
			tmp->next = Head;
			Head = tmp;
		}

		else
		{
			while ((tmp2->next != NULL) && tmp2->next->val < x)
				tmp2 = tmp2->next;
			
			if (tmp2 != NULL)
			{
				tmp->next = tmp2->next;
				tmp2->next = tmp;
			}

			else
			{
				tmp->next = NULL;
				tmp2->next = tmp;
			}
		}
	}
}

//*************************************************************************************************************************
                                                                                                      
void deleteNodesWithEvenValue(node * &Head)
{
	if (Head != NULL)
	{
		while (Head != NULL && Head->val % 2 == 0)
		{
			node *tmp = Head; //(p)
			Head = Head->next;
			delete tmp;
		}

		if (Head != NULL)
		{
			node *tmp = Head;

			while (tmp != NULL)
			{
				if ((tmp->next != NULL) && (tmp->next->val % 2 == 0))
				{
					node *deleted = tmp->next;
					tmp->next = deleted->next;
					delete deleted;
				}

				else
				{
					tmp = tmp->next;
				}
			}
		}
	}
}

//*************************************************************************************************************************
                                                                              
void swapTwoChosenNodes(node * &Head, int x, int y)
{
	if ((Head != NULL) && (Head->next != NULL))
	{
		bool swapped = false;
		bool x_first = false;
		bool y_first = false;
		node *tmp = Head;
		node *tmp_x = NULL;
		node *tmp_y = NULL;
		node *tmp_x_prev = NULL;
		node *tmp_y_prev = NULL;
		int size = 0;

		while (tmp != NULL)
		{
			size++;
			if ((tmp->next != NULL) && (tmp->next->val == x))
				tmp_x_prev = tmp;

			if ((tmp->next != NULL) && (tmp->next->val == y))
				tmp_y_prev = tmp;

			if (tmp->val == x)
				tmp_x = tmp;

			if (tmp->val == y)
				tmp_y = tmp;

			if (tmp_x != NULL && tmp_y == NULL)
				x_first = true;

			if (tmp_y != NULL && tmp_x == NULL)
				y_first = true;

			tmp = tmp->next;
		}

		if ((tmp_y != NULL) && (tmp_x != NULL))
		{
			if (size == 2 || (tmp_x == Head && tmp_x->next == tmp_y) || (tmp_y == Head && tmp_y->next == tmp_x))
			{
				if (Head == tmp_x && swapped == false)   //list has two elements and x or y are on the first places
				{
					Head = Head->next;
					tmp_x->next = Head->next;
					Head->next = tmp_x;
					swapped = true;
				}

				if (Head == tmp_y && swapped == false)   //list has two elements and x or y are on the first places
				{
					Head = Head->next;
					tmp_y->next = Head->next;
					Head->next = tmp_y;
					swapped = true;
				}
			}

			else
			{
				if ((size > 2) && tmp_x == Head && tmp_y->next == NULL && swapped == false)          //x == Head, y == Tail
				{
					Head = tmp_y;
					Head->next = tmp_x->next;
					tmp_y_prev->next = tmp_x;
					tmp_x->next = NULL;
					swapped = true;
				}

				if ((size > 2) && tmp_y == Head && tmp_x->next == NULL && swapped == false)          //y == Head, x == Tail
				{
					Head = tmp_x;
					Head->next = tmp_y->next;
					tmp_x_prev->next = tmp_y;
					tmp_y->next = NULL;
					swapped = true;
				}

				if ((size > 2) && (tmp_y->next == NULL) && (tmp_x->next == tmp_y) && swapped == false)
				{                                                        //size>2, x i y are in the end, x first
					tmp_x_prev->next = tmp_y;
					tmp_y->next = tmp_x;
					tmp_x->next = NULL;
					swapped = true;
				}

				if ((size > 2) && (tmp_x->next == NULL) && (tmp_y->next == tmp_x) && swapped == false)
				{                                                        //size>2, x i y are in the end, y first
					tmp_y_prev->next = tmp_x;
					tmp_x->next = tmp_y;
					tmp_y->next = NULL;
					swapped = true;
				}

				if ((size > 2) && (tmp_x == Head) && swapped == false && tmp_y->next != NULL)
				{                                               //size>2, x == Head, y on random position, except tail
					node *tmp_x_next = tmp_x->next;
					Head = tmp_y;
					tmp_x->next = Head->next;
					Head->next = tmp_x_next;
					tmp_y_prev->next = tmp_x;
					swapped = true;
				}

				if ((size > 2) && (tmp_y == Head) && swapped == false && tmp_x->next != NULL)
				{                                               //size>2, y == Head, x on random position, except tail
					node *tmp_y_next = tmp_y->next;
					Head = tmp_x;
					tmp_y->next = Head->next;
					Head->next = tmp_y_next;
					tmp_x_prev->next = tmp_y;
					swapped = true;
				}

				if ((size > 2) && (tmp_x->next == NULL) && tmp_y != Head && swapped == false)
				{                                              //size>2, x == Tail, y on random position, except head
					tmp_y_prev->next = tmp_x;
					tmp_x->next = tmp_y->next;
					tmp_x_prev->next = tmp_y;
					tmp_y->next = NULL;
					swapped = true;
				}

				if ((size > 2) && (tmp_y->next == NULL) && tmp_x != Head && swapped == false)
				{                                              //size>2, y == Tail, x on random position, except head
					tmp_x_prev->next = tmp_y;
					tmp_y->next = tmp_x->next;
					tmp_y_prev->next = tmp_x;
					tmp_x->next = NULL;
					swapped = true;
				}

				if ((size > 2) && (tmp_x->next == tmp_y) && (tmp_x != Head) && (tmp_y->next != NULL) && swapped == false)
				{                                      //x i y are next to each other, x first, x != head, y != tail
					tmp_x_prev->next = tmp_y;
					tmp_x->next = tmp_y->next;
					tmp_y->next = tmp_x;
					swapped = true;
				}

				if ((size > 2) && (tmp_y->next == tmp_x) && (tmp_y != Head) && (tmp_x->next != NULL) && swapped == false)
				{                                     //x i y are next to each other, y first, y != head, x != tail
					tmp_y_prev->next = tmp_x;
					tmp_y->next = tmp_x->next;
					tmp_x->next = tmp_y;
					swapped = true;
				}

				if ((size > 2) && (tmp_x != Head) && (tmp_x->next != NULL) && (tmp_y != Head) && (tmp_y->next != NULL)
					&& (tmp_x->next != tmp_y) && (x_first == true))//size>2, x i y are on positions different than
				{	                                               //Head and Tail, they are separated by minumum
					node *tmp_y_next = tmp_y->next;				   //one position, x is first
					tmp_x_prev->next = tmp_y;
					tmp_y->next = tmp_x->next;
					tmp_x->next = tmp_y_next;
					tmp_y_prev->next = tmp_x;
					swapped = true;
				}

				if ((size > 2) && (tmp_x != Head) && (tmp_x->next != NULL) && (tmp_y != Head) && (tmp_y->next != NULL)
					&& (tmp_y->next != tmp_x) && (y_first == true))//size>2, x i y are on positions diferrent than 
				{	                                               //Head and Tail, they are separated by minimum
					node *tmp_x_next = tmp_x->next;                //one position, y is first
					tmp_y_prev->next = tmp_x;
					tmp_x->next = tmp_y->next;
					tmp_y->next = tmp_x_next;
					tmp_x_prev->next = tmp_y;
					swapped = true;
				}
			}
		}
	}
}

//*************************************************************************************************************************
                                                                                
void bubbleSortWithOneBumper(node * &Head)
{
	if (Head != NULL && Head->next != NULL)
	{
		bool isSorted = false;
		node *tmp = Head;
		node *front_bumper = NULL;

		do
		{
			isSorted = false;
			node *tmp_prev = NULL;

			while ((tmp != front_bumper))
			{
				if ((tmp->next != NULL) && (tmp->val > tmp->next->val))
				{
					if (tmp == Head)
					{
						Head = Head->next;
						tmp->next = Head->next;
						Head->next = tmp;
						tmp_prev = Head;
						isSorted = true;
					}

					else
					{
						node *tmp_next = tmp->next;
						tmp_prev->next = tmp_next;
						tmp->next = tmp_next->next;
						tmp_next->next = tmp;
						tmp_prev = tmp_prev->next;
						isSorted = true;
					}
				}

				else
				{
					tmp_prev = tmp;
					tmp = tmp->next;
				}
			}

			front_bumper = tmp_prev;
			tmp = Head;

		} while (isSorted == true);
	}
}

//*************************************************************************************************************************
                                                                                              
void insertSort(node * &Head)
{
	if (Head != NULL && Head->next != NULL)
	{
		node *tmp = Head;
		node *tmp_prev = NULL;
		node *current = tmp->next;
		node *current_next = current->next;

		do
		{
			tmp = Head;
			while (tmp->next != current)
			{
				tmp_prev = tmp;
				tmp = tmp->next;                               //set tmp on starting position, one before current
			}

			while (tmp->val > current->val)
			{
				if (tmp == Head)
				{
					tmp->next = current->next;
					current->next = tmp;
					Head = current;
				}

				else
				{
					tmp->next = current->next;
					current->next = tmp;
					tmp_prev->next = current;
				}

				tmp = Head;
				while (tmp != current && tmp->next != current)
				{
					tmp_prev = tmp;
					tmp = tmp->next;
				}
			}

			current = current_next;

			if (current_next != NULL)
				current_next = current_next->next;                       //setting current on next position

		} while (current != NULL);
	}
}

//*************************************************************************************************************************
                                                                                                   
void selectSort(node * &Head)
{
	if (Head != NULL && Head->next != NULL)
	{
		int actual_to_change_position = 0;
		node *actual_to_change_prev = NULL;
		node *actual_to_change = Head;
		node *current_min_prev = NULL;

		do
		{
			node *current_min = actual_to_change;
			node *current = actual_to_change;

			while (current->next != NULL)
			{
				if (current_min->val > current->next->val)
				{
					current_min = current->next;
					current_min_prev = current;
				}

				current = current->next;
			}

			if (actual_to_change != current_min)
			{
				if (actual_to_change == Head)
				{
					if (actual_to_change->next == current_min)
					{
						actual_to_change->next = current_min->next;
						current_min->next = actual_to_change;
						Head = current_min;
					}

					else
					{
						node *current_min_next = current_min->next;
						Head = current_min;
						Head->next = actual_to_change->next;
						current_min_prev->next = actual_to_change;
						actual_to_change->next = current_min_next;
					}
				}

				else
				{
					if (actual_to_change->next == current_min)
					{
						actual_to_change->next = current_min->next;
						current_min->next = actual_to_change;
						actual_to_change_prev->next = current_min;
					}

					else
					{
						node *current_min_next = current_min->next;
						actual_to_change_prev->next = current_min;
						current_min->next = actual_to_change->next;
						current_min_prev->next = actual_to_change;
						actual_to_change->next = current_min_next;
					}
				}
			}

			actual_to_change_position++;
			actual_to_change = Head;

			for (int i = 0; i < actual_to_change_position; i++)
			{
				actual_to_change_prev = actual_to_change;
				actual_to_change = actual_to_change->next;
			}

		} while (actual_to_change != NULL);
	}
}

//*************************************************************************************************************************
                                                                                                 
void combSort(node * &Head)
{
	bool last_run = false;
	bool stop = false;
	int size = 0;
	node *changed_1 = Head;
	node *changed_2 = NULL;
	node *changed_1_prev = NULL;
	node *changed_2_prev = NULL;

	while (changed_1 != NULL)
	{
		size++;
		changed_1 = changed_1->next;
	}

	long int gap = size;

	do
	{
		gap = (gap * 10) / 13;
		if (gap == 9 || gap == 10)
			gap = 11;                                                                      
		else
		{
			if (gap <= 1)
				gap = 1;
		}

		if (last_run == true)
			stop = true;

		if (gap == 1)
		{
			last_run = true;
		}

		changed_1 = Head;

		for (int i = 0; i < gap; i++)
		{
			changed_2_prev = changed_1;
			changed_1 = changed_1->next;      
		}

		changed_2 = changed_1;
		changed_1 = Head;

		while (changed_2 != NULL)
		{
			if (changed_1->val > changed_2->val)
			{
				if (changed_1 == Head)
				{
					if (changed_1->next == changed_2)
					{
						Head = Head->next;
						changed_1->next = Head->next;
						Head->next = changed_1;
					}

					else
					{
						node *changed_2_next = changed_2->next;
						Head = changed_2;
						Head->next = changed_1->next;
						changed_2_prev->next = changed_1;
						changed_1->next = changed_2_next;
					}
				}

				else
				{
					if (changed_1->next == changed_2)
					{
						changed_1->next = changed_2->next;
						changed_2->next = changed_1;
						changed_1_prev->next = changed_2;
					}

					else
					{
						node *changed_2_next = changed_2->next;
						changed_1_prev->next = changed_2;
						changed_2->next = changed_1->next;
						changed_2_prev->next = changed_1;
						changed_1->next = changed_2_next;
					}
				}

				node *change_position = changed_1;
				changed_1 = changed_2;                  
				changed_2 = change_position;
			}

			changed_1_prev = changed_1;
			changed_2_prev = changed_2;
			changed_1 = changed_1->next;                           
			changed_2 = changed_2->next;
		}
	} while ((gap > 1 || last_run == true) && stop == false);
}

//*************************************************************************************************************************
                                                                                                     
void copyNTimesEntireList(node * &Head, int x)
{
	if (Head != NULL)
	{
		node *tmp = Head;
		node *tail = NULL; //always last element
		node *last = NULL; //primal last element

		while (tmp != NULL)
		{
			tail = tmp;
			tmp = tmp->next;
		}

		last = tail;
		tmp = Head;

		for (int i = 0; i < x; i++)
		{
			tmp = Head;
			do
			{
				node *tmp_new = new node;
				tmp_new->val = tmp->val;
				tmp_new->next = NULL;
				tail->next = tmp_new;
				tail = tail->next;
				tmp = tmp->next;

			} while (last->next != tmp);
		}
	}
}

//*************************************************************************************************************************
                                                                                                        
void copyEntireListSumOfElementsTimes(node * &Head)
{
	if (Head != NULL)
	{
		node *tmp = Head;
		node *tail = NULL; //always last element
		node *last = NULL; //primal last element

		while (tmp != NULL)
		{
			tail = tmp;
			tmp = tmp->next;
		}

		last = tail;
		tmp = Head;

		int suma = 0;

		while (tmp != NULL)
		{
			suma += tmp->val;
			tmp = tmp->next;
		}

		suma = suma - 1;

		for (int i = 0; i < suma; i++)
		{
			tmp = Head;
			do
			{
				node *tmp_new = new node;
				tmp_new->val = tmp->val;
				tmp_new->next = NULL;
				tail->next = tmp_new;
				tail = tail->next;
				tmp = tmp->next;

			} while (last->next != tmp);
		}
	}
}

//*************************************************************************************************************************
                                                                                               
void changeNodesWithHisSuccessor(node * &Head)
{
	node * tmp = Head;
	node *tmp_prev = NULL;

	while (tmp != NULL)
	{
		if (tmp == Head)
		{
			Head = Head->next;
			tmp->next = Head->next;
			Head->next = tmp;
		}

		else
		{
			if (tmp->next != NULL)
			{
				node *tmp_next = tmp->next;
				tmp_prev->next = tmp_next;
				tmp->next = tmp_next->next;
				tmp_next->next = tmp;
				tmp_prev = tmp_prev->next;
			}
		}

		tmp_prev = tmp;
		tmp = tmp->next;

	}

}

//*************************************************************************************************************************
                                                                                     
void addNodeEveryThreeNodes(node * &Head)
{
	if (Head != NULL && Head->next != NULL && Head->next->next != NULL)
	{
		node *tmp = Head;
		node *tmp_2 = tmp->next;
		node *tmp_3 = tmp_2->next;
		node *tmp_next_third = NULL;
		node *tmp_connect = NULL;

		while (tmp != NULL && tmp_2 != NULL && tmp_3 != NULL)
		{
			tmp_next_third = tmp_3->next;
			node *tmp_new = new node;

			tmp_new->val = (tmp->val + tmp_2->val + tmp_3->val);

			if (tmp == Head)
			{
				Head = tmp_new;
				tmp_connect = tmp_new;
			}

			else
			{
				tmp_connect->next = tmp_new;
				tmp_connect = tmp_connect->next;
			}

			tmp_new->next = tmp_next_third;

			node *del_1 = tmp;
			node *del_2 = tmp_2;
			node *del_3 = tmp_3;

			tmp = tmp_next_third;
			if (tmp != NULL)
				tmp_2 = tmp->next;
			if (tmp_2 != NULL)
				tmp_3 = tmp_2->next;

			delete del_1;
			delete del_2;
			delete del_3;
		}
	}
}

//*************************************************************************************************************************
                                                                                                       
void minimumSelectSort(node * &Head)
{
	if (Head != NULL && Head->next != NULL)
	{
		int actual_to_change_position = 0;
		node *actual_to_change_prev = NULL;
		node *actual_to_change = Head;
		node *current_min_prev = NULL;

		do
		{
			node *current_min = actual_to_change;
			node *current = actual_to_change;

			while (current->next != NULL)
			{
				if (current_min->val < current->next->val)
				{
					current_min = current->next;
					current_min_prev = current;
				}

				current = current->next;
			}

			if (actual_to_change != current_min)
			{
				if (actual_to_change == Head)
				{
					if (actual_to_change->next == current_min)
					{
						actual_to_change->next = current_min->next;
						current_min->next = actual_to_change;
						Head = current_min;
					}

					else
					{
						node *current_min_next = current_min->next;
						Head = current_min;
						Head->next = actual_to_change->next;
						current_min_prev->next = actual_to_change;
						actual_to_change->next = current_min_next;
					}
				}

				else
				{
					if (actual_to_change->next == current_min)
					{
						actual_to_change->next = current_min->next;
						current_min->next = actual_to_change;
						actual_to_change_prev->next = current_min;
					}

					else
					{
						node *current_min_next = current_min->next;
						actual_to_change_prev->next = current_min;
						current_min->next = actual_to_change->next;
						current_min_prev->next = actual_to_change;
						actual_to_change->next = current_min_next;
					}
				}
			}

			actual_to_change_position++;
			actual_to_change = Head;

			for (int i = 0; i < actual_to_change_position; i++)
			{
				actual_to_change_prev = actual_to_change;
				actual_to_change = actual_to_change->next;
			}

		} while (actual_to_change != NULL);
	}
}

//*************************************************************************************************************************
                                                                                                  
void mergeSort(node* &Head)
{
	if (Head != NULL && Head->next != NULL)
	{
		node *tmp = Head;
		node *tmp_prev = NULL;
		node *Head_first = Head;
		node *Head_second = tmp->next;

		while (Head_second != NULL)
		{
			tmp_prev = tmp;
			tmp = tmp->next;

			if (Head_second->next != NULL)
				Head_second = Head_second->next->next;
			
			else
				break;				
		}

		tmp_prev->next = NULL;
		Head_second = tmp;

		mergeSort(Head_first);
		mergeSort(Head_second);

		Head = NULL;
		node *tmp_Head_next = NULL;

		while(Head_first != NULL || Head_second != NULL)
		{
			if ((Head_first != NULL && Head_second != NULL) && (Head_first->val <= Head_second->val))
			{
				if (Head == NULL)
				{
					Head = Head_first;
					tmp_Head_next = Head;				
					Head_first = Head_first->next;
				}

				else
				{
					tmp_Head_next->next = Head_first;
					tmp_Head_next = tmp_Head_next->next;				
					Head_first = Head_first->next;
				}
			}

			if ((Head_first != NULL && Head_second != NULL) && (Head_second->val < Head_first->val))
			{
				if (Head == NULL)
				{
					Head = Head_second;
					tmp_Head_next = Head;
					Head_second = Head_second->next;
				}

				else
				{
					tmp_Head_next->next = Head_second;
					tmp_Head_next = tmp_Head_next->next;
					Head_second = Head_second->next;
				}
			}

			if (Head_first == NULL && Head_second != NULL)
			{
				tmp_Head_next->next = Head_second;
				Head_second = NULL;
			}

			if (Head_second == NULL && Head_first != NULL)
			{
				tmp_Head_next->next = Head_first;
				Head_first = NULL;
			}
		}
	}
}

//*************************************************************************************************************************
                                                                                                  
void show(node *Head)
{
	cout << "Head->";
	node *tmp = Head;
	while (tmp != NULL)
	{
		cout << tmp->val << "->";
		tmp = tmp->next;
	}
	cout << "NULL" << endl;
}

//*************************************************************************************************************************
                                                                                               
void top(node *Head)
{
	if (Head != NULL)
		cout << "Head value is equal to: " << Head->val << endl;
	else
		cout << "Head is empty" << endl;
}

//*************************************************************************************************************************
