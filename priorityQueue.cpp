#include <bits/stdc++.h>
using namespace std;

/*max heap for priority queue*/
void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << g.top() <<' ';
        g.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> pqueue;
    pqueue.push(10);
    pqueue.push(20);
    pqueue.push(30);
    pqueue.push(5);
    pqueue.push(1);
 
    showpq(pqueue);

    cout << "gquiz.size() : " << pqueue.size()<<endl;
    cout << "gquiz.top() : " << pqueue.top()<<endl;
    pqueue.pop();
    showpq(pqueue);
    return 0;
}

/*we can multiply the values with -1 and use max heap to get the effect of min heap.*/
