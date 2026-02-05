#include <iostream>
#include <string>
using namespace std;

class Contact
{
  public:
	string Number;
	string firstName;
	string lastName;
	string nickName;
	string secret;

	void Print()
	{
		cout << Number << "\t"
			<< firstName << "\t"
			<< lastName << "\t"
			<< nickName << "\t"
			<< secret << endl;
	}
	void set(string num, string fName, string lName, string nName, string secr)
	{
		Number = num;
		firstName = fName;
		lastName = lName;
		nickName = nName;
		secret = secr;
	}
};
class PhoneBook
{

};

int main()
{
	Contact firstContact;
	firstContact.set("123456", "John", "Smith", "Johny", "no secrets at all");
	firstContact.Print();
	return 0;
}
