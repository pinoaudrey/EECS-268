/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Implementation file for templated Stack class. Defines member methods.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#include <stdexcept>

template <typename T>
Stack<T>::~Stack() {
    while(!isEmpty()){
        pop();
    }
}

template <typename T>
Stack<T>::Stack()
{
    m_top = nullptr;
}

template <typename T>
void Stack<T>::push(T entry)
{
    Node<T>* newTop = new Node<T>(entry);
    newTop->setNext(m_top);
    m_top = newTop;

}

template <typename T>
void Stack<T>::pop()
{
        if (m_top != nullptr) {
            Node<T> *temp = nullptr;
            temp = m_top->getNext();
            delete m_top;
            m_top = temp;
        } else {
            throw (std::runtime_error("Cannot Pop Empty Stack\n"));
        }
}

template <typename T>
bool Stack<T>::isEmpty() {
    if (m_top == nullptr){
        return true;
    }
    else {
        return false;
    }
}

template <typename T>
T Stack<T>::peek() {
    if (!isEmpty()){
        return (m_top->getEntry());
    }
    else{
        throw(std::runtime_error("Stack is empty\n"));
    }
}

