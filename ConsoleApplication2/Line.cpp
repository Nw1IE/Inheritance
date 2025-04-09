#include <string>
#include <iostream>

class Line
{
public:
	~Line() {}
	Line(std::string line, std::string Words);

	Line(const Line& p);

	Line(int c); // вроде что то не то

	Line();

	Line(std::string p_line);
	
	Line(std::string  Words);
	

	
	//int main()
	//{
	//	{
	//		Person tom{ "Tom" };
	//		Person bob{ "Bob" };
	//	}   // объекты Tom и Bob уничтожаются

	//	Person sam{ "Sam" };
	//}   // объект Sam уничтожается
	 // 8
	// 9
private:
	std::string line;
	std::string Words; // взял его
};

Line::Line(std::string line, std::string Words)
{
	{
		this->line = line;
		this->Words = Words;
	}
}

Line::Line(const Line& p)
{
	{
		line = p.line;
		Words = p.Words;
	}
}

Line::Line(int c)
{
	{
		int c{ 5 };
		c + 10;
		c += 10;
		c == 10;
		/*a !- 10;*/
		std::cout << "a = " << c << std::endl;
	}
}

Line::Line()
{
	{
		std::string a("Hello, ");
		std::string b("world!");
		std::string c = a + b;
		a.append(b);
		a += b;
		system("cls");
	}
}

Line::Line(std::string p_line)
{
	{
		line = p_line;
		std::cout << "Line" << line << "Line" << std::endl;
	}
}

Line::Line(const Line& p)
{
	{
		Words = p.Words;
		std::cout << "Line" << line << "Line" << std::endl;
	}
}
