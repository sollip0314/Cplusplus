#include <iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAddr(const Point& p1, const Point& p2)
{
	Point* pptr = new Point;
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr;
}

int main()
{
	Point* pptr1 = new Point;
	pptr1->xpos = 10;
	pptr1->ypos = 20;

	Point* pptr2 = new Point;
	pptr2->xpos = 30;
	pptr2->ypos = 40;

	Point& pref = PntAddr(*pptr1, *pptr2);
	cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;

	delete pptr1;
	delete pptr2;
	delete& pref;

	return 0;


}