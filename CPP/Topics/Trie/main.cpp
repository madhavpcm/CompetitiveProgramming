#include<string>
#include<iostream>
/*
https://www.geeksforgeeks.org/trie-insert-and-search/
https://www.hackerearth.com/practice/data-structures/advanced-data-structures/trie-keyword-tree/practice-problems/
https://codingcompetitions.withgoogle.com/codejam/round/0000000000051635/0000000000104e05
*/

const int ALPHABETS_SIZE = 26;
struct TrieNode{
    TrieNode* children[ALPHABETS_SIZE];//26 lower case
    bool isEndOfWord;
};

TrieNode* getNode(){
    TrieNode* p= new TrieNode;
    p->isEndOfWord=false;
    for(int i=0 ; i< ALPHABETS_SIZE; i++){
        p->children[i]=nullptr;
    }
    return p;
}
void insert(TrieNode *root, std::string key){
    TrieNode *pcrawl = root;
    for(int i =0 ; i< key.size(); i++){
        int index = key[i]-'a';
        if(pcrawl->children[index]==nullptr){
            pcrawl->children[index]=getNode();
        }
        pcrawl=pcrawl->children[index];
    }
    pcrawl->isEndOfWord=true;
}
bool search(TrieNode *root, std::string key){
    TrieNode*pcrawl =root;
    for(int i =0; i< key.size(); i++){
        if(pcrawl->children[key[i]-'a']== nullptr){
            return false;
        }

        pcrawl=pcrawl->children[key[i]-'a'];
    }
    return (pcrawl!= nullptr && pcrawl->isEndOfWord);
}
void display(TrieNode *root,std::string str){
    if(root->isEndOfWord){
        std::cout<<str<<std::endl;
    }
    for(int i=0; i< ALPHABETS_SIZE; i++){
        if(root->children[i] != nullptr){
            std::string newstr=str;
            newstr+= (i+'a');
            display(root->children[i],newstr);
        }
    }
}