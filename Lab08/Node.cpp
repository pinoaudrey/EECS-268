/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Implementation file for templated Node class. Defines member methods.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
template <typename T>
Node<T>::Node(T entry)
{
    m_entry = entry;
    m_next = nullptr;
}

template <typename T>
T Node<T>::getEntry() const
{
    return(m_entry);
}

template <typename T>
void Node<T>::setEntry(T entry)
{
    m_entry = entry;
}
template <typename T>
Node<T>* Node<T>::getNext() const
{
    return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
    m_next = next;
}

