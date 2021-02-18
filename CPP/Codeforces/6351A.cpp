#include<iostream>
#include<vector>

struct node{
    int id;
    std::vector<node *> sub;
};
node* makenode(int key){
    node * temp= new node;
    temp->id=key;
    return temp;
}
int main(){
    int n,k;
    int temp=n;
    int i1,i2;
    std::cin>>n>>k;
    std::vector<int> used(n);
    node *root= makenode(1);
    while(temp--){
        std::cin>>i1>>i2;
        
        if (i1==1){
            node *temp=makenode(i2);
            root->sub.push_back(temp);
        }
        else{
            node *temp=makenode(i2);
            node *I=search(i1);
            I->sub.push_back(temp);
        }
    }
    for (auto it=tree.begin();i!=tree.end();i++){
        if (it->sub.size()==0)
    }
}