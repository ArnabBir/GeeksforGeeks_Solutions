#include <bits/stdc++.h>
#define DERIVED_NODE '#'
using namespace std;

struct Node {
      
    char data;
    int freq;
    Node * left, * right;
    
    Node(char data, int freq) {
        this->data = data;
        this->freq = freq;
        left = right = NULL;
    }
};
    
struct compare {
    bool operator() (Node * n1, Node * n2) {
        return (n1->freq > n2->freq);
    }
};

void printCodes(Node * node, string code) {
    if(node == NULL)    return;
    if(node->data != DERIVED_NODE) {
        cout<<code<<" ";
    }
    printCodes(node->left, code + "0");
    printCodes(node->right, code + "1");
}

int main() {
	
	int T;
	cin>>T;
	while(T--) {
	    priority_queue<Node*, vector< Node* >, compare > pq;
	    string s;
	    cin>>s;
	    int n = s.size();
	    int temp;
	    for(int i = 0; i < n; ++i) {
	        cin>>temp;
	        pq.push(new Node(s[i], temp));
	    }
	    while(pq.size() > 1) {
	        Node * a = pq.top();
	        pq.pop();
	        Node * b = pq.top();
	        pq.pop();
	        Node * c = new Node(DERIVED_NODE, a->freq + b->freq);
	        c->left = a;
	        c->right = b;
	        pq.push(c);
	    }
	    printCodes(pq.top(),"");
	    cout<<endl;
	}
	return 0;
}
