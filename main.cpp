#include <iostream>
#include <string>
#include "KindleUlimited.h"
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

int main ()
{
	string author;
	string bookName;
	KindleUnlimited myKindle;
	KindleUnlimited::showRecommended();
	cout << endl;
	cout << "Plase, book name: ";
	getline( cin, bookName);
	cout << "Plase, author name: ";
	getline( cin, author);
	cout << endl;
	myKindle.setBookName(bookName);
	cout << endl;
	myKindle.setAuthorName(author);
	myKindle.downloadBook();
	cout << endl;
	cout << myKindle << endl;
	cout << "Kindle number: " << KindleUnlimited::showKindleNumber << endl;
	cout << endl;
	cout << endl;
	return 0;

}
