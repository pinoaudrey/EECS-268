/** -----------------------------------------------------------------------------
*
* @file  BST.cpp
* @author Audrey Pino
* Assignment:   EECS-268 Lab 9
* @brief Implementation File for BST class.
* @date 11/29/21
*
---------------------------------------------------------------------------- **/
#include <iostream>

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::BST()
{
    m_root = nullptr;
}

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::~BST()
{
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::add(ItemType entry)
{
    if (m_root == nullptr)
    {
        m_root = new BNode<ItemType>(entry);
    }
    else
    {
        add(entry, m_root);
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::add(ItemType entry, BNode<ItemType> *curNode)
{
    if (entry == curNode->getEntry())
    {
        throw(std::runtime_error("Duplicate Value!\n"));
    }
    else if (entry < curNode->getEntry() && curNode->getLeft() == nullptr)
    {
        curNode->setLeft(new BNode<ItemType>(entry));
    }
    else if (entry > curNode->getEntry() && curNode->getRight() == nullptr)
    {
        curNode->setRight(new BNode<ItemType>(entry));
    }
    else if (entry < curNode->getEntry())
    {
        add(entry, curNode->getLeft());
    }
    else
    {
        add(entry, curNode->getRight());
    }
}

template <typename ItemType, typename KeyType>
ItemType BST<ItemType, KeyType>::search(KeyType key) const
{
    return search(key, m_root);
}

template <typename ItemType, typename KeyType>
ItemType BST<ItemType, KeyType>::search(KeyType entry, BNode<ItemType> *curNode) const
{
    if (curNode == nullptr)
    {
        throw(std::runtime_error("No Value!\n"));
    }
    else if (curNode->getEntry() == entry)
    {
        return curNode->getEntry();
    }
    else if (curNode->getEntry() < entry)
    {
        return search(entry, curNode->getRight());
    }
    else
    {
        return search(entry, curNode->getLeft());
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPreOrder(void visit(ItemType)) const
{
    if (m_root == nullptr)
    {
        std::cout << "Empty Tree.\n";
    }
    else
    {
        visitPreOrder(visit, m_root);
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPreOrder(void visit(ItemType), BNode<ItemType> *curNode) const
{
    if (curNode != nullptr)
    {
        visit(curNode->getEntry());
        visitPreOrder(visit, curNode->getLeft());
        visitPreOrder(visit, curNode->getRight());
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitInOrder(void visit(ItemType)) const
{
    if (m_root == nullptr)
    {
        std::cout << "Empty Tree.\n";
    }
    else
    {
        visitInOrder(visit, m_root);
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitInOrder(void visit(ItemType), BNode<ItemType> *curNode) const
{
    if (curNode != nullptr)
    {
        visitInOrder(visit, curNode->getLeft());
        visit(curNode->getEntry());
        visitInOrder(visit, curNode->getRight());
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPostOrder(void visit(ItemType)) const
{
    if (m_root == nullptr)
    {
        std::cout << "Empty Tree.\n";
    }
    else
    {
        visitPostOrder(visit, m_root);
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::visitPostOrder(void visit(ItemType), BNode<ItemType> *curNode) const
{
    if (curNode != nullptr)
    {
        visitPostOrder(visit, curNode->getLeft());
        visitPostOrder(visit, curNode->getRight());
        visit(curNode->getEntry());
    }
}

