/** -----------------------------------------------------------------------------
 *
 * @file  Node.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program is for Node based implementation of Stacks.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef NODE_H
#define NODE_H

class Node
{
    private:
    char m_entry;
    Node* m_next;
    
    public:
    /*
    * @pre
    * @param char entry - the data to be stored in the created node
    * @post gets entry to m_entry and sets m_next to null
    */
    Node(char entry);
   
    /*
    * @pre m_entry must have valid char stored
    * @post does not change m_entry
    * @return returns the value in m_entry
    */
    char getEntry() const;
   
    /*
    * @pre sets entry into m_entry
    * @post entry is the char to be added into m_entry
    */
    void setEntry(char entry);
    
    /*
    * @pre m_entry must have valid Node stored
    * @post does not change
    * @return returns the Node stored in m_next
    * @throw throws a runtime error if m_next is null
    */
    Node* getNext() const;
   
    /*
    * @param next is the Node to be placed into m_next
    * @post sets next as m_next
    */
    void setNext(Node* next);

};
#endif

