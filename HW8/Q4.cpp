#include <iostream>
#include <fstream>
#include <map>
#include <string>

// Include any additional libraries you'd like up here...
// Remember your must use map as your primary data structure!

using namespace std;

// Define any helper functions you like up here...

int main(int argc, char *argv[])
{
	// Q5a
	// Declare your map here!
	map<const int, string> library;

	// Q5b

	int ISBN;
	string title;
	string ISBN_string;

	while (ISBN != -1)
	{
		cout << "Type in the details for a book and hit enter to add to the catalog." << endl;
		cout << "Alternatively, type \"-1\" and hit enter to exit this program." << endl;

		cout << "Insert the book's ISBN: " << endl;
		getline(cin,ISBN_string);
		ISBN = stoi(ISBN_string);

		if (ISBN == -1)
		{
			break;
		}
		if (library.find(ISBN) == library.end())
		{
			cout << "Insert the book's title: " << endl;
			getline(cin, title);
			library.insert(pair<int, string>{ISBN, title});
		}
		else
		{
			cout << "A book with that ISBN is already in the library!" << endl;
		}
	}
	// Q5c
	// Do your file handling here!

	ofstream library_list("library_list.txt");

	for(map<int, string>::iterator i = library.begin(); i != library.end(); ++i)
	{
			library_list << i -> second << endl;
			
	}

	return 0;
}
