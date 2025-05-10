#include <iostream>
using namespace std;

struct node {
    node* links[26];
    bool flag = false;

    bool containsKey(char key) {
        return links[key - 'a'] != nullptr;
    }

    node* get(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

class Trie {
private:
    node* root;

public:
    Trie() {
        root = new node();
        for(int i=0;i<26;i++){
           root->links[i]= nullptr;
        }
    }

    // TC for inserting in the trie is O(length of the word)
    void insertKey(string word){
        node* temp = root;
        for (int i = 0; i < word.length(); i++) {
            if (!temp->containsKey(word[i])) {
                node* newNode = new node();
                temp->links[word[i]-'a']= newNode;
            }
            temp = temp->get(word[i]);
        }
        temp->setEnd();
    }

    bool search(string word) { // TC O(len)
        node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            if (!temp->containsKey(word[i])) {
                return false;
            }
            temp = temp->get(word[i]);
        }
        return temp->isEnd();
    }

    bool startswith(string word) { // TC O(len)
        node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            if (!temp->containsKey(word[i])) {
                return false;
            }
            temp = temp->get(word[i]);
        }
        return true;
    }
     ~Trie() {
        delete root;
    }
};

int main() {
    Trie obj1;
    obj1.insertKey("shubham");
    obj1.insertKey("arti");
    obj1.insertKey("jyoti");

    cout << "Does the trie contain the word 'shubham'? ";
    if (obj1.search("gopal")) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
