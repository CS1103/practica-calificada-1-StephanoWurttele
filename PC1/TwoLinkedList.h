//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H
#include <string>
#include <iostream>
#include <fstream>

namespace UTEC{
    struct Node{
        int value;
        Node* next;
        Node(int _value);
    };

    class TwoLinkedList {
        Node* head1;
        Node* head2;
        Node* head3;
        Node* tail1;
        Node* tail2;
        Node* tail;
    public:
        TwoLinkedList();
        ~TwoLinkedList();
        void push_back_1(int value);
        void push_back_2(int value);
        std::string merge(int merged);
        bool is_merged();
        std::string getlist(int lista);
        void search(int buscado);
        void save(std::string archivo);
    };
}


#endif //PC1_TWOLINKEDLIST_H
