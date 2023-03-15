#include <iostream>
#include <algorithm>
using namespace std;
//Create a hash table
const int hash_table_size = 10;
int hash_table[hash_table_size] = { [0 ... 9] = -1};

int hashf(int key){
    return key % hash_table_size;
};

void add(int key, int value){
    int index = hashf(key);
    hash_table[index] = value;
};

bool exists(int key){
    if(hash_table[hashf(key)] != -1) return true;
    else return false;
};

int get(int key){
    if(exists(key)) return -1;
    return hash_table[hashf(key)];
};

int remove(int key){
    int oldvalue = hash_table[hashf(key)];
    hash_table[hashf(key)] = -1;
    return oldvalue;
}

void display(){
    for(int i = 0; i < hash_table_size; i++){
        cout<<hash_table[i]<<' ';
    }
    cout<<endl;
}



int main(void){
    add(45, 1);
    add(34, 8);
    add(91, 4);
    add(4, 3);
    add(6, 6);
    add(52, 2);
    display();
};