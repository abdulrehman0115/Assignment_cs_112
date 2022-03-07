#include<iostream>
using namespace std;
struct book {
	int ID;
	string bookname;
	string author;
	int pages;
	int ISBN;
	int price;
	void display() {
		cout << "The ID of Book is : " << ID<< endl;
		cout << "The Name of Book is : " << bookname << endl;
		cout << "The Author of Book is : " << author << endl;
		cout << "The Pages of Book is : " << pages << endl;
		cout << "The ISBN of Book is : " << ISBN << endl;
		cout << "The Price of Book is : " << price << endl;

	}
}; struct booklist {
	book b[5] = { 0 };
	void function() {
		for (int n = 0; n < 5; n++) {
			cout << "_________________Enter the new book__________________" << endl;
			cout << "Enter ID of Book is : ";
			cin >> b[n].ID;
			cout << "Enter Name of Book is : ";
			cin >> b[n].bookname;
			cout << "Enter the Author of Book is : ";
			cin >> b[n].author;
			cout << "Enter the Pages of Book is : ";
			cin >> b[n].pages;
			cout << "Enter the ISBN of Book is : ";
			cin >> b[n].ISBN;
			cout << "Enter the Price of Book is : ";
			cin >> b[n].price;
			cout << "__________________Suceessfully Add a book___________________" << endl;
			cout << "IF you want to add another book please enter 1 else 0." << endl;

			int i;
			cin >> i;
			if (i == 0) {
				break;
			}
			if (i == 1) {
				continue;
			}
			else cout << "Invalid input." << endl;
			
		}
	}
	void print(){
		cout << "              Which Book did you want to Search?              "  << endl;
		cout << "Enter its ID Number : ";
		int k;
		cin >> k;
		for(int n=0;n<5;n++){
			if (k == b[n].ID) {
				cout << "ID\t" << "Book name\t" << "Author name\t" << "Pages\t" << "ISBN\t" << "Price\t" << endl;
				cout << b[n].ID << "\t" << b[n].bookname << "\t\t" << b[n].author << "\t\t" << b[n].pages << "\t" << b[n].ISBN << "\t" << b[n].price << "\t" << endl;
			}
			else
				cout << "This book is not exist." << endl;
				break;
		}
	}
	void printall() {
		cout << "ID\t" << "Book name\t" << "Author name\t" << "Pages\t" << "ISBN\t" << "Price\t" << endl;
		for (int i = 0; i < 5; i++) {
			if (b[i].ID == 0)
				continue;
			else
			cout << b[i].ID << "\t" << b[i].bookname << "\t\t" << b[i].author << "\t\t" << b[i].pages << "\t" << b[i].ISBN << "\t" << b[i].price << "\t" << endl;
		}
	}
	void sorta() {
		for (int i = 5; i < 0; i--) {
			for (int j = 0; j < i - 1; j++) {
				if (b[j].ID < b[j + 1].ID) {
					int temp = b[j].ID;
					b[j].ID = b[j + 1].ID;
					b[j + 1].ID = temp;
				}
			}
		}
	}
	void sortd(){
	for (int i = 5; i < 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			if (b[j].ID > b[j + 1].ID) {
				int temp = b[j].ID;
				b[j].ID = b[j + 1].ID;
				b[j + 1].ID = temp;
			}
		}
	}
}
	void deleted() {
		cout << "Enter the Book ID which you want to Deleted " << endl;
		int k;
		cin >> k;
		for (int i = 0; i < 5; i++) {
			if (k == b[i].ID)
				b[i].ID = { 0 };
		}
		cout << "____________________________Successesfully deleted all existing Books_________________________" << endl;
	}

};

struct student {
	int id;
	string stdname;
	int rollno;
	void print() {
		cout << "The ID of student is : " << id << endl;
		cout << "The Name of Student is : " << stdname << endl;
		cout << "The Roll no of student is : " << rollno << endl;
	}

};
struct add {
	student s[5] = { 0 };
	void adds() {
		for (int i = 0; i < 5; i++) {
			cout << "Enter the Student Details" << endl;
			cout << "Enter the student ID : ";
			cin >> s[i].id;
			cout << "Enter the Student Name : ";
			cin >> s[i].stdname;
			cout << "Enter the Student Roll Number : ";
			cin >> s[i].rollno;
			cout << "IF you want to Add another Student them press 1 else 0." << endl;
			int k;
			cin >> k;
			if (k == 0) {
				break;
			}
			if (k == 1) {
				continue;
			}
			else cout << "Invaild input.";
		}
		
	}
	void del() {
		int j;
		cout << "Enter the Student ID which you want to deleted : ";
		cin >> j;
		for (int i = 0; i < 5; i++) {
			if (j == s[i].id) {
				s[i].id = { 0 };
				cout << "____________Suceessfully Deleted___________" << endl;

			}
		}
	}
	void dis() {
		cout << "ID\t" << "Name\t" << "Roll no\t" << endl;
		for (int i = 0; i < 5; i++) {


			if (s[i].id == 0)
				continue;
			else
				cout << s[i].id<<"\t" << s[i].stdname <<"\t" << s[i].rollno<<"\t" << endl;
		}
	}

};

int main() {
	booklist l;
	add a;
	cout << "***************** MAIN MENU *****************" << endl;
	cout << "1. Add New Student " << endl;
	cout << "2. Deleted Existing Student " << endl;
	cout << "3. Show All Student " << endl;
	cout << "4. Add New Book " << endl;
	cout << "5. Deleted Existing Book " << endl;
	cout << "6. Show Particular Book " << endl;
	cout << "7. Show All Books " << endl;
	cout << "8. Sort books in Ascending Order " << endl;
	cout << "9. Sort Books in Decending Order " << endl;
	cout << "10. Exit " << endl;
	int n;
	do {
		cout << "Press any one of them : ";
		
		cin >> n;
		switch (n) {

		case 1: {
			a.adds();
			break;
		}
		case 2: {
			a.del();
			break;
		}
		case 3: {
			a.dis();
			break;
		}
		case 4: {
			l.function();
			break;
		}
		case 5: {
			l.deleted();
			break;
		}
		case 6: {
			l.print();
			break;
		}
		case 7: {
			l.printall();
			break;
		}
		case 8: {
			l.sorta();
		}
		case 9: {
			l.sortd();
		}
		case 10:
		{ cout << "Thank you!" << endl;
		break;
		}
		default:
			cout << "Invalid input." << endl;
			continue;

		} 
	} while (n != 10);
}