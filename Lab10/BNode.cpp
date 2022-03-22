/** -----------------------------------------------------------------------------
*
* @file  BNode.cpp
* @author Audrey Pino
* Assignment:   EECS-268 Lab 10
* @brief Implementation File for BNode class.
* @date 12/07/21
*
---------------------------------------------------------------------------- **/
template <typename T>
BNode<T>::BNode(T entry)
{
    m_entry = entry;
    m_left = nullptr;
    m_right = nullptr;
}

template <typename T>
T BNode<T>::getEntry() const
{
    return (m_entry);
}

template <typename T>
void BNode<T>::setEntry(T entry)
{
    m_entry = entry;
}

template <typename T>
BNode<T> *BNode<T>::getLeft() const
{
    return (m_left);
}

template <typename T>
BNode<T> *BNode<T>::getRight() const
{
    return (m_right);
}

template <typename T>
void BNode<T>::setLeft(BNode<T> *next)
{
    m_left = next;
}

template <typename T>
void BNode<T>::setRight(BNode<T> *next)
{
    m_right = next;
}

