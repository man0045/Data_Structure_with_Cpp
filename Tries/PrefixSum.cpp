#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
 char data;
 bool terminal;
 unordered_map<char, Node *> children;
 int countWordsEndingHere;
 int countWordsStarting;
 Node(char data)
 {
  this->data = data;
  this->terminal = false;
  this->countWordsEndingHere = this->countWordsStarting = 0;
 }
};

class Trie
{
public:
 Node *root;
 Trie()
 {
  root = new Node('\0');
 }
 void insert(string word)
 {
  Node *curr = root;
  for (int i = 0; i < word.size(); i++)
  {
   char ch = word[i];
   if (curr->children.count(ch))
   {
    curr = curr->children[ch];
    curr->countWordsStarting++;
   }
   else
   {
    Node *child = new Node(ch);
    curr->children[ch] = child;
    curr = curr->children[ch];
    curr->countWordsStarting++;
   }
  }
  curr->terminal = true;
  curr->countWordsEndingHere++;
 }
 int countWordsEqualTo(string word)
 {
  Node *curr = root;
  for (int i = 0; i < word.size(); i++)
  {
   char ch = word[i];
   if (curr->children.count(ch))
   {
    curr = curr->children[ch];
   }
   else
   {
    return 0;
   }
  }
  return curr->countWordsEndingHere;
 }
 int countWordsStartingWith(string word)
 {
  Node *curr = root;
  for (int i = 0; i < word.size(); i++)
  {
   char ch = word[i];
   if (curr->children.count(ch))
   {
    curr = curr->children[ch];
   }
   else
   {
    return 0;
   }
  }
  return curr->countWordsStarting;
 }
 void erase(string word)
 {
  Node *curr = root;
  for (int i = 0; i < word.size(); i++)
  {
   char ch = word[i];
   curr->countWordsStarting--;
   curr = curr->children[ch];
  }
  curr->countWordsStarting--;
 }
};

int main()
{
 Trie trie;
 int n;
 cout << "Enter the number of words: ";
 cin >> n;
 cout << "Enter " << n << " words:\n";
 for (int i = 0; i < n; i++)
 {
  string word;
  cin >> word;
  trie.insert(word);
 }

 string query;
 cout << "Enter word to count occurrences: ";
 cin >> query;
 cout << "Occurrences of \"" << query << "\": " << trie.countWordsEqualTo(query) << endl;

 cout << "Enter prefix to count words starting with: ";
 cin >> query;
 cout << "Words starting with \"" << query << "\": " << trie.countWordsStartingWith(query) << endl;

 cout << "Enter word to erase: ";
 cin >> query;
 trie.erase(query);
 cout << "\"" << query << "\" erased.\n";

 return 0;
}
