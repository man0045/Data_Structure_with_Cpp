
#include<bits/stdc++.h>
using namespace std;
struct TrieNode{
 TrieNode* childNode[26];
 int wordCount;
 TrieNode(){
  wordCount=0;
  for(int i = 0; i<26; i++){
   childNode[i]=NULL;
  }
 }
};
TrieNode* insert(TrieNode* root, string& key){
 TrieNode* currentNode = root;
 for(int i=0; i<key.size(); i++){
  if(currentNode->childNode[key[i]-'a'] == NULL){
   TrieNode* newNode = new TrieNode();
   // keep the reference for the newly created nodes
   currentNode->childNode[key[i]-'a'] = newNode;
  }
  currentNode = currentNode->childNode[key[i]-'a'];
 }
 currentNode->wordCount++;
 return root;
}
int main(){
 TrieNode* root = new TrieNode();
 vector<string> inputStrings = {"tea", "ten", "eat", "ear", "bat", "ball"};

	//number of insert operations in the Trie
	int n = inputStrings.size();

	for (int i = 0; i < n; i++)
	{
		root = insert(root, inputStrings[i]);
  cout<<root<<endl;
	}
}