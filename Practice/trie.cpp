#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *links[26];
    bool wordEnd = false;

    bool containsKey(char ch){
        return links[ch - 'a'] != nullptr;
    }
    node* get(char ch) {
        return links[ch - 'a'];
    }
    void setEnd() {
        wordEnd = true;
    }
    bool isEnd() {
        return wordEnd;
    }
};

class Trie
{
private:
    node *hea;

public:
    Trie()
    {
        hea = new node();
        for (int i = 0; i < 26; i++)
        {
            hea->links[i] = nullptr;
        }
    }
    
    void insertKey(string word){
        node* temp = hea;
        for (int i = 0; i < word.length(); i++) {
            if (!temp->containsKey(word[i])) {
                node* newNode = new node();
                temp->links[word[i]-'a']= newNode;
            }
            temp = temp->get(word[i]);
        }
        temp->setEnd();
    }

    bool search(string word) {
        node* temp = hea;
        for (int i = 0; i < word.length(); i++) {
            if (!temp->containsKey(word[i])) {
                return false;
            }
            temp = temp->get(word[i]);
        }
        return temp->isEnd();
    }

    ~Trie() {
        delete hea;
    }
};

int main(){
    Trie obj;
    obj.insertKey("shubham");
    cout << obj.search("shubham") << endl; 
    return 0;
}
