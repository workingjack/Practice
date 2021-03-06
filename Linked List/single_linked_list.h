#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#define SENTINEL_VAL 0xAAAAAAAA 
#define DEBUG        1

enum RET_VALUE
{	
	SUCCESS,
	KEY_NOT_FOUND,
	EMPTY_LIST,
	CANNOT_ALLOCATE

};

template <typename T>
struct Node
{
	T key;
	Node<T>* next;
};

// This class uses a sentinel node

template <class T>
class SingleLinkedList
{
	public:

		SingleLinkedList();

		~SingleLinkedList();

		SingleLinkedList(SingleLinkedList const & other);

		SingleLinkedList<T> & operator=(const SingleLinkedList<T> & rhs);

		RET_VALUE insert(T key); 
		
		RET_VALUE remove(T key);
		
		RET_VALUE reverse();

		int getSize();

		void sort();

		void print();

	
	private:
		void copy(SingleLinkedList<T> const & other);

		void clear();

		Node<T>* mergeSort(Node<T>* start, int length);

		Node<T>* split(Node<T>* start, int splitIndex);

		Node<T>* merge(Node<T>* left, Node<T>* right, int left_length, int right_length);


		Node<T>* head;
		Node<T>* tail;
		
		int size;
};

#endif 