#include <bits/stdc++.h>
using namespace std;

int main()
{

    // PAIR

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // nesting of pair

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    // array of pair

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;

    // Vector

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v(5, 100); //{100,100,100,100,100}

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1); // A copy of the above but another container

    //{10,20,12,23,35}

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    vector<int>::iterator it = v.rend();

    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Deletion in a vector

    v.erase(v.begin() + 1);

    v.erase(v.begin() + 2, v.begin() + 4);

    // Insertion in a vector

    vector<int>(2, 100);            // 100 100
    v.insert(v.begin(), 300);       // 300 100 100
    v.insert(v.begin() + 1, 2, 10); // 300 10 10 100 100

    //{10,20}
    cout << v.size(); // 2

    v.pop_back(); //{10}

    // LIST

    // similar to vector but also contain front operations

    list<int> ls;

    ls.push_back(2);    //{2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}

    // DEQUE

    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(3);    //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}

    dq.pop_back();  //{4,3,1}
    dq.pop_front(); //{3,1}

    // STACK

    // lifo

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top();

    st.pop();

    cout << st.top();
    cout << st.size();
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);

    // QUEUE

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4); //{1,2,4}

    q.back() += 5; // {1,2,9}

    cout << q.back(); // 9

    cout << q.front(); // 1

    q.pop();

    // PRIORITY QUEUE

    // largest element stays at the top

    priority_queue<int> pq; // max heap

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); // 10
    pq.pop();
    cout << pq.top(); // 8

    // priority queue that stores minimum element at the top // min heap

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();

    // push and pop takes log(n)

    // SET

    // stores in sorted order and contains unique

    set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.emplace(4); // {1,2,3,4}

    auto it = st.find(3);

    auto it = st.find(6); // gives iterator to st.end()

    st.erase(4);

    auto it = find(3);
    st.erase(it);

    auto it1 = find(2);
    auto it2 = find(4);

    st.erase(it1, it2);

    // everything takes log complexity

    // MULTISET

    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);
    ms.insert(1); //{1,1,1,1}

    ms.erase(1); // erases all 1

    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest operations similar to set

    // UNORDERED SET
    // similar to set but stored in any order



// MAP

// map stores unique keys in sorted order

map<int,int> mpp;
mpp[1]=2;
mpp.emplace({3,1});
mpp.insert({2,4});

map<int, pair<int,int>> mpp;

map<pair<int,int>, int> mpp;
mpp[{2,3}]=10; // {{1,2},{3,1},{2,4},{{2,3},10}}

for(auto it: mpp){
    cout<< it.first << " "<<it.second<< endl;
}

cout<< mpp[1];
cout<< mpp[5]; // Null will be printed because not found

auto it = mpp.find(3);
cout<< *(it).second;

auto it = mpp.find(5); //-->mpp.end()

auto it = mpp.lower_bound(2);

auto it = mpp.upper_bound(3);

// erase , swap, size, empty are same as above

// multimap --> duplicate keys sorted order

// unorderedmap --> Unique keys with sorted order




// SORTING

sort(a,a+n);
sort(v.begin(), v.end());

sort(a+2,a+4);

sort(a, a+n, greater<int>); // for sorting in descending order

pair<int,int> a[]={{1,2},{2,1},{4,1}};

/*
sort it according to the second element 
if second element is same, then sort it according to the first element  but in descending order
*/

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

sort(a,a+n,comp);


 // To know number of set bits

    int n=7;
    int cnt=__builtin_popcount();

    long long num=1738721301938;
    int cnt=__builtin_popcountll();

    //to get all permutations and sorted order is neccessary
    string s="123";
    sort(s.begin(), s.end());

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    
    // To get maximum and minimum element

    int maxi= *max_element(a,a+n);
    int mini= *min_element(a,a+n);

    return 0;
}