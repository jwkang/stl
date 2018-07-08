#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

struct Sum
{
    Sum(): sum{0} { }
    void operator()(int n) { sum += n; }
    int sum;
};

int main()
{
	pair<int, string> pt;
	pt = make_pair(3, "hello world");
;
	cout << pt.first << endl;
	cout << pt.second << endl;

	// size, 초기값
	vector<string> v(10, "");
	v.push_back("안녕하세요");
	v.push_back("고니치와");
	v.push_back("니하오");
	v.push_back("Hello");
	v.pop_back();

	vector<string>::iterator iter;

	int count = 0;
	for (iter = v.begin(); iter != v.end(); ++iter){
        cout << count << " : " << *iter << endl;
		count++;
    }

	//==================== map ========================
	// c++에서 map은 tree 형태로 들어 있어, 값을 넣을 때 뺄때 O(logN)

	map<string, int> ages;
	ages["jung"] = 33;
	ages["kang"] = 34;
	ages["kim"] = 45;

	cout << "jung is " << ages["jung"] << " age old" << endl;

	// map find method
	cout << "Let's go using map container" << endl; 
	//it = ages.find("kang");
	// 만약 찾는 원소가 없다면 m.end()를 반환한다. 

#if 0
	map<string, int>::iterator it;
	it = ages.find("jong");

	if (it != ages.end()) {
		cout << it->first << endl;
		cout << it->second << endl;
	}
#endif
	auto it = ages.find("jong");

	if (it != ages.end()) {
		cout << it->first << endl;
		cout << it->second << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	// map은 count를 통해서 원소가 있는지 없는지도 판단할 수 있다.
	cout << "Let's go using count method" << endl; 
	count =	ages.count("jung");
	cout << count << endl;
	count =	ages.count("jong");
	cout << count << endl;

	//  default max head;
	priority_queue<int> q;
	q.push(1);
	q.push(3);
	q.push(7);
	q.push(9);
	q.push(5);

	cout << " Let's go using queue" << endl;
	q.pop();
	cout << q.top() << endl;
	q.pop();
	cout << q.top() << endl;
	q.pop();
	cout << q.top() << endl;

	// cf) min heap
	priority_queue<int, vector<int>, greater<int>> pq;

	pq.push(1);
	pq.push(3);
	pq.push(7);
	pq.push(9);
	pq.push(5);

	cout << " Let's go using priority_queue" << endl;
	pq.pop();
	cout << pq.top() << endl;
	pq.pop();
	cout << pq.top() << endl;
	pq.pop();
	cout << pq.top() << endl;

	// find method in STL
	cout << " Let's go using find function " << endl;

	vector<int> values;
	values.push_back(1);
	values.push_back(4);
	values.push_back(2);
	values.push_back(8);
	values.push_back(3);
	values.push_back(5);
	values.push_back(7);
	values.push_back(6);

	auto it2= find(values.begin(), values.end(), 3);
	if (it2 == values.end())
	{
		cout << "Not found " << endl;
	}
	else
	{
		cout << *it2 << endl;
	}

	// sort in STL : 오름 차순
	cout << " Let's go using sort function " << endl;

	cout << "오름 차순 정렬 " << endl;
	sort(values.begin(), values.end());
	//sort(values.begin(), values.end(), less<int>());
	for (auto it = values.begin(); it < values.end(); it++) {
		cout << *it << endl;
	}

	// sort int STL : 내림 차순
	cout << "내림 차순 정렬 " << endl;

	sort(values.begin(), values.end(), greater<int>());
	for (auto it = values.begin(); it < values.end(); it++) {
		cout << *it << endl;
	}

	return 0; 

	stringstream ss;
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);

	std::for_each(a.begin(), a.end(), Sum());

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	

	cout << "hello world" << endl;
	return 0;
}