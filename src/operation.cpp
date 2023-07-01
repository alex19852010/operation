#include <iostream>
#include "operations.h"

using namespace std;

void scalpel(point* point)
{
  cout << "enter cootdinates x: ";
  cin >> point-> x;
  cout << "enter cootdinates y: ";
  cin >> point-> y;
  cout << "cut between coordinates " << point-> x << " and " << point->y << endl;

}

void hemostat(point* point)
{
  cout << "enter point:";
  cin >> point-> x;
  cout << "hemostat in point " << point-> x  << endl;
}

void tweezers(point* point)
{
  cout << "enter point:";
  cin >> point-> x;
  cout << "twezers in point " << point-> x  << endl;
}

void suture(point* point)
{
  cout << "enter cootdinates x: ";
  cin >> point-> x;
  cout << "enter cootdinates y: ";
  cin >> point-> y;
  cout << "suture between coordinates " << point-> x << " and " << point->y << endl;

}