//
// Created by ruben on 4/12/19.
//

#include "TwoLinkedList.h"

UTEC::Node::Node(int _value):value(_value),next(nullptr){};

UTEC::TwoLinkedList::TwoLinkedList():head1(nullptr),head2(nullptr),head3(nullptr),tail1(nullptr),tail2(nullptr),tail(nullptr){};
UTEC::TwoLinkedList::~TwoLinkedList(){
    //Node* temp=head1;
    //delete head1;
    //temp=temp->next;
};
void UTEC::TwoLinkedList::push_back_1(int value){
    Node* temp=new Node(value);
    if (head1==nullptr){
        head1=temp;
        tail1=temp;
    }
    else{
        if (tail1->next!=nullptr){
        tail->next=temp;
        tail=temp;
    }
        else{
            tail1->next=temp;
            tail1=temp;
        }
    }
};
void UTEC::TwoLinkedList::push_back_2(int value){
    Node* temp=new Node(value);
    if (head2==nullptr){
        head2=temp;
        tail2=temp;
    }
    else{
        if (tail2->next!=nullptr){
        tail->next=temp;
        tail=temp;
    }
        else{
            tail2->next=temp;
            tail2=temp;
        }
    }
};

std::string UTEC::TwoLinkedList::merge(int x){
    if (is_merged()){
        return "Operación duplicada";
    }
    else{
        head3=new Node(x);
        tail=head3;
        tail1->next=head3;
        tail2->next=head3;
        return "Operación Exitosa";
    }
};
bool UTEC::TwoLinkedList::is_merged(){
    bool a;
    if (tail1==nullptr||tail2==nullptr){
        return false;
    }
    else if (tail1->next!=nullptr){
            a=true;
        }
        else{
            a=false;
    }
    return (a);

    //return(tail1->next!=nullptr);
};
std::string UTEC::TwoLinkedList::getlist(int lista){
    std::string strng="";
    if (lista==1){
        Node* temp=head1;
        while (temp!=nullptr){
        std::string x = std::to_string(temp->value);
        strng=strng + x +" ";
        temp=temp->next;
        }
    }
    else{ 
        if (lista==2){
            Node* temp=head2;
            while (temp!=nullptr){
            std::string x = std::to_string(temp->value);
            strng=strng + x +" ";
            temp=temp->next;
            }
        }
        else{
            if (lista==0){
                if(is_merged()){
                    Node* temp=head3;
                    while (temp!=nullptr){
                        std::string x = std::to_string(temp->value);
                        strng=strng + x +" ";
                        temp=temp->next;
                    }
                }
                else{
                    strng="";
                }
            }
        }
    return strng;
    }
};
void UTEC::TwoLinkedList::search(int buscado){
    Node* temp=head1;
    while(temp!=nullptr){
        if(temp->value==buscado){
            std::cout<<&temp;
            break;
        }
        temp=temp->next;
    }
    temp=head2;
    while(temp!=nullptr||temp!=head3){
        if (temp->value==buscado){
            std::cout<<&temp;
            break;
        }
    }
    std::cout<<"No se encuentra el valor en la lista";
};
void UTEC::TwoLinkedList::save(std::string archivo){
    Node* temp=head1;
    std::ofstream out(archivo);
    while(temp!=nullptr){
        out<<temp->value;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=nullptr ||temp!=head3){
        out<<temp->value;
    };
}
