/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Implementation file for templated Queue class. Defines member methods.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
template<typename T>
Queue<T>::Queue()
{
    m_front = nullptr;
    m_back = nullptr;
}

template<typename T>
void Queue<T>::enqueue(T entry)
{
    if (!isEmpty())
    {
        Node<T>* tempPtr = nullptr;
        tempPtr = new Node<T>(entry);
        m_back->setNext(tempPtr);
        m_back = tempPtr;
    }
    else
    {
        m_front = new Node<T>(entry);
        m_back = m_front;
    }
}

template<typename T>

void Queue<T>::dequeue() {
    if (m_front == m_back){
        Node<T>* tempPtr = nullptr;
        tempPtr = m_front->getNext();
        delete m_front;
        m_front = tempPtr;
        m_back = tempPtr;
    }
    else if (!isEmpty()){
        Node<T>* tempPtr = nullptr;
        tempPtr = m_front->getNext();
        delete m_front;
        m_front = tempPtr;
    }
    else{
        throw(std::runtime_error("Queue is empty\n"));
    }
}

template<typename T>

T Queue<T>::peekFront() const {
    if (!isEmpty()){
        return m_front->getEntry();
    }
    else{
        throw(std::runtime_error("Queue is empty or there is no value at front node\n"));
    }
}

template <typename T>

bool Queue<T>::isEmpty() const {
    if (m_front == nullptr && m_back == nullptr){
        return true;
    }
    else if (m_front != nullptr || m_back != nullptr){
        return false;
    }
    else {
        throw (std::runtime_error("An error occurred.\n"));
    }
}

template <typename T>
Queue<T>::~Queue<T>() {
    while (!isEmpty()){
        dequeue();
    }
}

