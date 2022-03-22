/** -----------------------------------------------------------------------------
*
* @file  BST.cpp
* @author Audrey Pino
* Assignment:   EECS-268 Lab 10
* @brief Implementation File for BST class.
* @date 12/07/21
*
---------------------------------------------------------------------------- **/
#include <iostream>

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::BST()
{
    m_root = nullptr;
}

template <typename ItemType, typename KeyType>
BST<ItemType, KeyType>::BST(const BST<ItemType, KeyType> *pokedex)
{
    m_root = nullptr;
    copy(pokedex->getRoot());
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

template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::remove(KeyType key)
{
    if (m_root == nullptr)
    {
        std::runtime_error("Empty tree.\n");
    }
    else
    {
        remove(key, m_root);
    }
}


template <typename ItemType, typename KeyType>
void BST<ItemType, KeyType>::remove(KeyType key, BNode<ItemType> *curNode)
{
    if (curNode == nullptr)
    {
        throw(std::runtime_error("No Value!\n"));
    }
    else if (curNode->getEntry() == key)
    {
        if (curNode->getLeft() != nullptr && curNode->getRight() != nullptr)
        {
            BNode<ItemType> *temp = curNode->getLeft()->getRight();
            curNode->getLeft()->getRight()->setEntry(curNode->getLeft()->getRight()->getRight()->getEntry());
            curNode = temp;
        }
        else if (curNode->getLeft() != nullptr)
        {
            curNode->setEntry(curNode->getLeft()->getEntry());
            curNode->setLeft(nullptr);
        }
        else if (curNode->getRight() != nullptr)
        {
            curNode->setEntry(curNode->getRight()->getEntry());
            curNode->setRight(nullptr);
        }
        else
        {
            curNode = nullptr;
        }
    }
    else if (curNode->getEntry() < key)
    {
        std::cout << "Removed Pokemon.\n";
        remove(key, curNode->getRight());
    }
    else
    {
        std::cout << "Removed Pokemon.\n";
        remove(key, curNode->getLeft());
    }
}

template <typename ItemType, typename KeyType>
void BST<ItemType,KeyType>::copy(BNode<ItemType>* curNode)
{
    if (curNode == nullptr)
    {
        return;
    }
    try
    {
        ItemType temp = curNode->getEntry();
        add(temp);
    }
    catch(const std::runtime_error& rte)
    {
        rte.what();
    }
    copy(curNode->getLeft());
    copy(curNode->getRight());
}

