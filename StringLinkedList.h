#include <string>
#include "StringNode.h"

using namespace std;

class StringLinkedList {
public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const string& front() const;
	const string& getE(int index) const;
	void addFront(const string& e);
	void removeFront();
	void print();
private:
	StringNode* head;
};
