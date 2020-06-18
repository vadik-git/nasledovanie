#include<iostream>
//#include"Matrix.h"
//#include"SList.h"
//#include"doublelist.h"
//#include"Ship.h"
//#include"CruiseShip.h"
//#include"BinTree.h"
#include"Person.h"
#include"SportMan.h"
#include<ctime>
#include"PriorityQueue.h"
using namespace std;
int main() {

	





	Person person("vadim", 20);
	person.print();
	SportMan sportman("vadim", 20, "box");
	sportman.achivement.push_back("chempion country ");
	sportman.achivement.push_back("chempion world");
	sportman.print();
	SportMan sp("valeryii", 18, "tennis");
	sp.achivement.push_back("olimpic champion");
	sp.achivement.push_back("winner cup island");
	sp.print();
	
	



	/*Ship ship("vict", 2007);
	ship.print();
	CruiseShip ship1("baba", 2008, 3000);
	ship1.print();*/


















  



	/*srand(time(NULL));
	BinTree<int>tree;
	for (size_t i = 0; i < 10; i++)
	{
		int number = rand() % 60;
		cout << "add node" << number << endl;
		tree.AddNode(number);

	}
	
	tree.print();

	cout << "min >> " << tree.min() << endl;;
	cout << "max >> " << tree.max() << endl;;

	
	cout << "------" << endl;
	cout << "findd" << tree.find(0) << endl;;
    tree.clear();*/













	
	/*Matrix<double>M(5,5);
	M += 10;
	//cout << M << endl;
	//cin >> M;
	//M.print();
	M(0, 0) = 100;
	M(1, 1) = 200;
	cout << M << endl;
	Matrix<double>c = M + 2;
	c.print();
	Matrix<double>d = M + 4;
	d.print();
	bool result = M == c;
	cout << "result" << result << endl;
	 
	 Matrix<double>A;
   	 A = M + c;
	 A.print();*/
   
	
	//M.sumMatrix();
	//M.maxElementMatrix();

	/*Matrix<int>M1(4, 4);
	
	M1.print();
	M1.sumMatrix();
	M1.maxElementMatrix();*/

cout << "________" << endl;
























 /*DList<int>list;
 list.addHead(5);
 list.addHead(4);
 list.addHead(6);
 list.addTail(7);
 list.print();
 list.printR();

 list.delTail();
 list.print();
 list.printR();
 list.insertBefore(5, -5);
 list.insertBefore(4, -4);

 list.print();
 list.printR();
 list.clear();
 list.print();
 list.printR();*/
 
 /*for(auto it=list.begin();it!=list.end();it++)
 {
	 cout << *it << "\t";
 }*/

	/*SList<int> list;
	
	list.addHead(11);
	//list.addTail(19);
	list.print();
	list.delHead();
	list.print();
	list.addTail(300);
	list.print();



	list.addHead(6);
	list.addTail(200);
	list.print();

	list.addHead(3);
	list.print();
	list.delTail();
	list.print();
	cout << "clear" << endl;
	list.clear();
	cout << "list" << endl;
	list.print();

	list.addHead(10);
	list.print();
	list.addTail(11);
	list.print();


	cout << endl;
	cout << "coopyyyy" << endl;
	SList<int> list1(list);
	list1.print();
	list1.insert(99,0);
	list1.print();*/

	system("pause");
	return 0;
}                      










