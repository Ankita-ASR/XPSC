#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
 deque<string> chat;  
 unordered_set<string> s; 

    for (int i = 0; i < n; ++i) {
      string Name;
      cin >> Name; 
  if (s.find(Name) != s.end()) {
  auto it = find(chat.begin(), chat.end(), Name);
   if (it != chat.end()) {
    chat.erase(it);  
   }
    chat.push_front(Name); 
     } 
     else {
     chat.push_front(Name);
    s.insert(Name); 
        }
    }
 for (auto Name : chat) {
   cout <<Name<< endl;  
    }
}

int main() {
    int n;
    cin >> n;  
    solve(n); 
}
