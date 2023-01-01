# Roadmap for learn **C++**

### List of points

## Part 1

- [x] Hello
- [x] Install all required dependencies
- [x] Find IDE (VSCode, neovim, Clion, Visual Studio)
- [x] Start Programming
- [x] Algorithms(part 1)

## Part 2

- [ ] Learning C++ bases
- [ ] Console application (RPG game, game, cli, chatbot)

## Part 3

- [ ] Learning OOP (classes, objects, etc)
- [ ] Learning C++ OOP

## Part 4

- [ ] (Optional) Learn Qt (graphical interfaces and applications ]with c++)
- [ ] Find current road(GameDev, Iron of PC)
- [ ] (Optional) Learn Math base

# Part 1 "Hello c++"

## Hello

> Hello new user!!!. This is my roadmap for learn and practice c++/c bases and learn new language

---

## Install all required dependencies

> Now we are go to install dependencies for comfortable programming with c++/c language. We got to install gcc/g++, cmake this can be completed with scoop package manager on windows.

```sh
scoop install gcc g++ cmake
```

> When installation is completed we can got to next point.

---

### Find and install IDE for coding

> I prepare to use three IDE and code editors for beautifully coding in c/c++. First is **Visual Studio Code** it is fast and have more plugins code editor. You can install more themes and addons to create you coding process better then you have. Second of my editors is **NeoVim** this is fast terminal code editor and neovim have more addons look like vscode. Third of my editors is **JetBrains Clion** this is IDE and her get very big RAM and CPU process.
> I prepare to use VSCode and NeoVim

---

## Start Programming

> Now we can to start programming in c++.
> Let's got to write simple "Hello World" program in c++
> I create a **1.cpp** files and let'go write a code.

```cpp
#include <iostream>

using namespace std;

int main() {

	cout << "Hello World"<< endl;

	return 0;
}
```

> This is simple "Hello World" app in c++
> Let's slice it and get comments to line of codes
> | c++ word|value|
> |---|---|
> | #include <>| import any to file|
> | iostream | standard lib in c++|
> |using namespace std; | exclude std:: in commands c++|
> |; | very important symbol in c++|
> |int main(){} | start point in c++ program|
> |cout << "Hello World" << endl;| output "Hello World" to console |
> |cout | Output"|
> |endl | close std operations|

> If you want to see what are you coding you can type in terminal

````sh
g++ 1.cpp -o 1```
````

> This command compile you **1.cpp** file to 1.exe and you can run it type

```sh
./1
```

> And you can see

```
Hello World
```

> This is first simple project for start programming in c++

---

## Algorithms (part 1)

> I think algorithms is most important part of programming language after syntax and function of this, because if you known algorithms you can passed all test and complete any difficult project. I go to learn algorithms later when you known c/c++ basics. If you want to learn algorithms now you can search any books and learn it now. I prepare to learn algorithms in book "Informatics" born in 1990's and based on **basic** programming language

---

> This is simple "hello" in c++ programming language. I prepare to spend only two or three hours to learn it in day. Let's got to start learn c++ basics.

# Part 2 "Learn c++ basics"

> Let's find the course and go to learn c++

### Part 2.1 "Output"

1. #### I create a **output.cpp** file and start write some code

- Simple output

```cpp
#include <stdio.h>
#include <iostream>

using namespace std;
int COutput()
{
	// for  this we are use stdio.h. This lib can be used in c or c++
	printf("Hello");
	return 0;
}

int CppOutput() {
	// for this we are use iostream lib. This lib use only c++, and to type less we are use using namespace std;
	cout << "Hello" << endl;
	return 0;
}


int main () {
	COutput();
	CppOutput();
	return 0;
}
```

- New Line Output

```cpp
int NewLineOutput() {
 	printf("Hello World \n New Line"); // c new line char is \n
  	cout << "Hello World \n New Line"<< endl; // c++ new line char also \n
  	cout << "Hello World"<< endl
  			<< "New Line" << endl; // and we can output from new line look like this
  	return 0;
  }
```

- Calc
  > Let's wite simple calculator app
  > Create **calc.cpp** and write

```cpp
#include <iostream>

using namespace std;
int main ()
{
	double x,y; // define two var with the same type

	cout << "Enter two numbers divided space" << endl;

	cin >> x>>y; // get and assign user input to vars

	double sum = x+y; // create sum
	double difference = x-y; // create difference
	double product = x*y; //create product
	double quotient = x/y; // create quotient


	cout << sum << endl
		<< difference << endl
		<< product << endl
		<< quotient << endl; // display all vars

	return 0;
}
```

- Math
  > Also you can use math operation in c++

```cpp
#include <iostream>
#include <cmath> // lib for use math

using namespace std;

int main () {

	double x,y = 10;

	sqrt(x); // sqrt from number
	pow(x,y); // x^y

 return 0;
}
```

> Let's create a simple table with basics of c/c++ languages also i will put to it more information
> |Indexer|Module|Value(What this doing)|
> |---|---|---|
> |cin| C++ only "iostream"|Get user Input|
> |cout| C++ only "iostream"| Output any data|
> |endl| C++ only "iostream"| End of any func in c++ (cin >> any >> **endl;**)|
> |cerr| C++ only "iostream" | Put error to **console**|
> |scnaf| C - stdio.h | Get User Input|
> |printf| C- stdio.h | Output any data|
> |string| C++ - 'string'| Type of data (string name = "";)|
> | vector | C++ - 'vector' | Create dynamic array|
> |sqrt| C++ -"cmath" <br> C - 'math' | sqrt|
> |pow| C++ -"cmath" <br> C - 'math'| x^y|

> Types of variable in c++
> |type|value
> |---|---|
> |int|integer (3,5,6,,101010)|
> |float, double| floating pointer number (3.14, 2.3)|
> |char | symbol ('s', +, -, \*)|
> |bool| boolean (true, false)|
> |long long| long integer (10000000000000000000**ll**)|
> |string| string ("Hello")|

```cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
	int a = 110;
	float pi = 3.14;
	double e = 1.68;
	char c = 'c';
	bool isLearn = true;
	long long kulon = 600000000000000ll;
	string name = "Vlad";
	char intChar = (int)c; // format type of var
	cout << a << endl
		<< pi << endl
		<< e << endl
		<< c << endl
		<< isLearn << endl
		<< kulon << endl
		<< name  << endl;
	return 0;
}
```

> Formatting type of variable
> This look like as

```cpp

	int a= 10;

	cout << (double)a << endl;

```
