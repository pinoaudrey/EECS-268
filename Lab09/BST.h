/** -----------------------------------------------------------------------------
*
* @file  BST.h
* @author Audrey Pino
* Assignment:   EECS-268 Lab 9
* @brief Header File for BST class.
* @date 11/29/21
*
---------------------------------------------------------------------------- **/
#ifndef BST_H
#define BST_H
#include "BNode.h"

template <typename ItemType, typename KeyType>
class BST
{
private:
   BNode<ItemType> *m_root;
   /**
       * @pre None
       * @post Adds the entry to the tree
       * @param Takes an entry and curNode in
       * @throw None
    **/
   void add(ItemType entry, BNode<ItemType> *curNode);
   /**
       * @pre None
       * @post None
       * @param Key to search and curNode
       * @return Returns the element that matches the key
       * @throw None
    **/
   ItemType search(KeyType key, BNode<ItemType> *curNode) const;
   /**
       * @pre None
       * @post Runs the visit function for each node in the tree
       * @param Visit callback function and curNode
       * @throw None
    **/
   void visitPreOrder(void visit(ItemType), BNode<ItemType> *curNode) const;
   /**
       * @pre None
       * @post Runs the visit function for each node in the tree
       * @param Visit callback function and curNode
       * @throw None
    **/
   void visitInOrder(void visit(ItemType), BNode<ItemType> *curNode) const;
   /**
       * @pre None
       * @post Runs the visit function for each node in the tree
       * @param Visit callback function and curNode
       * @throw None
    **/
   void visitPostOrder(void visit(ItemType), BNode<ItemType> *curNode) const;

public:
   /**
       * @pre None
       * @post Constructor
       * @param None
       * @throw None
    **/
   BST();
   /**
       * @pre None
       * @post Destructor
       * @param None
       * @throw None
    **/
   ~BST();
   /**
       * @pre None
       * @post Adds the entry to the tree
       * @param Entry of ItemType
       * @throw None
    **/
   void add(ItemType entry);
   /**
       * @pre None
       * @post Returns the element that matches the key
       * @param Key to search the tree for
       * @throw None
    **/
   ItemType search(KeyType key) const;
   /**
       * @pre None
       * @post Runs the visit function for each node in the tree
       * @param Visit callback function
       * @throw None
    **/
   void visitPreOrder(void visit(ItemType)) const;
   /**
       * @pre None
       * @post Runs the visit function for each node in the tree
       * @param Visit callback function
       * @throw None
    **/
   void visitInOrder(void visit(ItemType)) const;
   /**
       * @pre None
       * @post Runs the visit function for each node in the tree
       * @param Visit callback function
       * @throw None
    **/
   void visitPostOrder(void visit(ItemType)) const;
};
#include "BST.cpp"

#endif

