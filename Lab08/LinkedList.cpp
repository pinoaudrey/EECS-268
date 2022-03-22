/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Implementation file for templated LinkedList class. Defines member methods.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>

template<typename T>
LinkedList<T>::LinkedList() {
    m_front = nullptr;
    m_length = 0;
}

template <typename T>
T LinkedList<T>::getEntry(int index){
    Node<T> *jumper = m_front;
    if (m_length > 0) {
        if (index > 0) {
            for (int i = 0; i < index; i++) {
                jumper = jumper->getNext();
            }
        }
    }
    else {
        throw (std::runtime_error("List is empty"));
    }
    return jumper->getEntry();
}

template<typename T>
void LinkedList<T>::insert(int index, T entry) {
    Node<T>* insertedNode = new Node<T>(entry);
    Node<T>* before = m_front;

    if (index > 0 && m_length > 0) {
        for (int i = 0; i < index - 1; i++) {
            before = before->getNext();
        }
        insertedNode->setNext(before->getNext());
        before->setNext(insertedNode);
    }
    else if (index == 0 && m_length >= 0){
        insertedNode->setNext(m_front);
        m_front = insertedNode;
    }
    else{
        throw (std::runtime_error("Invalid Index"));
    }
    m_length++;
}

template<typename T>
void LinkedList<T>::remove(int index) {

    if (index > 0 && m_length > 0) {
        Node<T>* before = m_front;
        Node<T>* target;
        Node<T>* after;
        for (int i = 0; i < index - 1; i++) {
            before = before->getNext();
        }
        target = before->getNext();
        after = target->getNext();
        before->setNext(after);
        delete target;
        m_length--;
    }
    else if (index == 0 && m_length > 0){
        Node<T>* temp;
        temp = m_front->getNext();
        delete m_front;
        m_front = temp;
        m_length--;
    }
}

template<typename T>
int LinkedList<T>::getLength(){
    return m_length;
}

template<typename T>
LinkedList<T>::~LinkedList() {
    for (int i = 0; i < m_length; i++){
        remove(i);
    }
}

