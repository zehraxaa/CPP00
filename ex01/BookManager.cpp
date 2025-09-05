#include <iostream>
#include <ostream>

class BookManager
{
	private:
	std::string title;
	std::string author;
	int year;

	public:
	BookManager(std::string t, std::string a, int y)
	{
		title = t;
		author = a;
		year = y;
	}
	std::string getTitle()
	{
		return (title);
	}
	std::string getAuthor()
	{
		return (author);
	}
	void setTitle(std::string t)
	{
		title = t;
	}
};

int main()
{
	BookManager book = BookManager("Hayatın Neşesi", "A. Zehra", 2024);
	std::cout<<book.getTitle()<<std::endl;
	std::cout<<book.getAuthor()<<std::endl;
	book.setTitle("Vazgeçmedim");
	std::cout<<book.getTitle()<<std::endl;
}