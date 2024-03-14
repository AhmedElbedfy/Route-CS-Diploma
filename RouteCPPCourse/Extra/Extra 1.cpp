#include <iostream>
#include <string>

using namespace std;

// Author Class
class Author {
	string name;
	string email;
public:
	Author(string name, string email) : name(name), email(email) {}
	string getAuthoName() {
		return name;
	}
	string getAuthoEmail() {
		return email;
	}
	void setAuthorEmail(string email) {
		this->email = email;
	}
};

// Book Class
class Book {
	int id;
	static int idHelper;
	string title;
	Author writer;
	string status;
public:
	Book(string title, Author writer, string status) : title(title), writer(writer), status(status) {
		id = ++idHelper;
	}
	int getBookId() {
		return id;
	}
	string getBookTitle() {
		return title;
	}
	string getBookWriterName() {
		return writer.getAuthoName();
	}
	string getBookStatus() {
		return status;
	}
	void setBookStatus(string status) {
		this->status = status;
	}
	void printBookData() {
		cout << "Book " << id << ": " << title << " by " << this->getBookWriterName() << " (ID: " << id << ")" << endl;
		cout << "Status: " << status << endl;
	}
};

int Book::idHelper = 0; // Assign initial value


// Library Class
class Library {
	string name;
	Book* books;
	static int bookCount;
public:
	Library(string name) : name(name) {
		books = new Book[];
	}
	~Library() {
		// Deallocate memory when the object is destroyed
		delete[] books;
	}
	void addBook(Book b) {
		if (bookCount == 0) {
			books = new
		}
		books[bookCount] = b;
		bookCount++;
	}
	/*
	void removeBook(int id) {
		for (int i = 0; i < bookCount; i++) {
			if (id == books[i].getBookId) {
				books[i]
			}
		}
	}
	*/
	void borrowBook(int id) {

	}
	void returnBook(int id) {

	}
	void displayBooks() {

	}
	Book searchBook(int id) {

	}
};

int Library::bookCount = 0; // Assign initial value



int main()
{

	// Create an author
	Author author1("John Doe", "johndoe@example.com");

	// Create two books
	Book book1("The Great Adventure", author1, "Available");
	Book book2("The Mystery of the Hidden Island", author1, "On Loan");

	// Print some information about the books
	book1.printBookData();
	book2.printBookData();

	Library lib("Ahmed");

	lib.addBook(book1);

	return 0;
}