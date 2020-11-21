#include<iostream>
#include<queue>
#include<vector>
using namespace std; 
priority_queue<int, vector<int>, greater<int> > a; 
int main() 
{ 	
    int n, x,k; 	
    cin >> n; 	
    for (int i = 0; i < n; i++) 
    { 		
        cin >> x; 		
        if (x == 1) { 			
            cin >> k; 			
            a.push(k); 		
        } 		
        else if (x == 2) 
        {
            if (a.empty() == true) 
            { 				
                a.size(); 			
            } 			
            else { 				
                a.pop(); 			
            } 		
        } 		
        else if (x == 3) 
        { 			
            if (a.empty() != true) 
            { 				
                cout << a.top() << "\n"; 			
            } 			
            else { 				
                cout << "no" << "\n"; 			
            } 		
        } 		//cout << " " << i << "\n"; 	
    } 
}