#ifndef TREE_HPP
#define TREE_HPP

#include "treenode.hpp"

template<class T>
class Tree
{
  private:
    TreeNode<T>* root;
    void _add(TreeNode<T>*, T);
    void _preorderPrint(TreeNode<T>*) const;
    void _postorderPrint(TreeNode<T>*) const;
    void _inorderPrint(TreeNode<T>*) const;
    T _find_max(TreeNode<T>*) const;
    T _find_min(TreeNode<T>*) const;
    int _size(TreeNode<T>*) const;
    int _depth(TreeNode<T>*) const;
    bool _contains(TreeNode<T>*, T) const;
    TreeNode<T>* find_index(TreeNode<T>*, const int) const;
  public:
    Tree(T);
    ~Tree();
    void remove(TreeNode<T>*);
    void add(T _val)
    {
      _add(root, _val);
    }

    T find_max() const
    {
      return _find_max(root);
    }
    T find_min() const
    {
      return _find_min(root);
    }

    int size() const
    {
      return _size(root);
    }

    int depth() const
    {
      return _depth(root);
    }

    bool contains(T _item)
    {
      return _contains(root, _item);
    }

    void preorderPrint() const
    {
      _preorderPrint(root);
    }
    void postorderPrint() const
    {
      _postorderPrint(root);
    }
    void inorderPrint() const
    {
      _inorderPrint(root);
    }
    
    T operator[](int in);
};

template<class T>
Tree<T>::Tree(T _val) : root(new TreeNode<T>(nullptr, nullptr, _val)) {}

template<class T>
Tree<T>::~Tree()
{
  remove(root);
}

template<class T>
T Tree<T>::operator[](int in)
{
  TreeNode<T>* indent = find_index(root, in);
  return indent->getData();
}

template<class T>
void Tree<T>::_add(TreeNode<T>* rt, T _val)
{
  if ( _val > rt->getData() )
  {
    if ( rt->getRight() )
    {
      _add(rt->getRight(), _val);
    }
    else
    {
      rt->setRight(new TreeNode<T>(nullptr, nullptr, _val));
    }
  }
  else
  {
    if ( rt->getLeft() )
    {
      _add(rt->getLeft(), _val);
    }
    else
    {
      rt->setLeft(new TreeNode<T>(nullptr, nullptr, _val));
    }
  }
}

template<class T>
void Tree<T>::remove(TreeNode<T>* rt)
{
  if ( rt )
  {
    remove(rt->getLeft());
    remove(rt->getRight());

    delete rt;
  }
}

template<class T>
T Tree<T>::_find_max(TreeNode<T>* rt) const
{
  while ( rt->getRight() )
  {
    rt = rt->getRight();
  }
  return rt->getData();
}

template<class T>
T Tree<T>::_find_min(TreeNode<T>* rt) const
{
  while ( rt->getLeft() )
  {
    rt = rt->getLeft();
  }
  return rt->getData();
}

template<class T>
int Tree<T>::_size(TreeNode<T>* rt) const
{
  if ( !rt ) return 0;
  return 1 + _size( rt->getLeft() ) + _size( rt->getRight() );
}

template<class T>
int Tree<T>::_depth(TreeNode<T>* rt) const
{
  int depthLeft, depthRight, depthval;
  if ( !rt )
  {
    depthval = -1;
  }
  else
  {
    depthLeft = _depth( rt->getLeft() );
    depthRight = _depth( rt->getRight() );
    depthval = 1 + ( depthLeft > depthRight ? depthLeft : depthRight );
  }
  return depthval;
}

template<class T>
TreeNode<T>* Tree<T>::find_index(TreeNode<T>* rt, const int in) const
{
  if ( !rt || in == rt->getIndex() )
  {
    return rt;
  }
  if ( in > rt->getIndex() )
  {
    return find_index(rt->getRight(), in);
  }
  else
  {
    return find_index(rt->getLeft(), in);
  }
}

template<class T>
bool Tree<T>::_contains(TreeNode<T>* rt, T item) const
{
  if ( !rt )
    return false;

  if ( rt->getData() == item )
  {
    return true;
  }
  else if ( rt->getData() > item )
    return _contains( rt->getLeft(), item );
  else
    return _contains( rt->getRight(), item );
}

template<class T>
void Tree<T>::_preorderPrint(TreeNode<T>* rt) const
{
  if ( rt )
  {
    std::cout << rt->getData() << std::endl;
    _preorderPrint(rt->getLeft());
    _preorderPrint(rt->getRight());
  }
}

template<class T>
void Tree<T>::_postorderPrint(TreeNode<T>* rt) const
{
  if ( rt )
  {
    _postorderPrint(rt->getLeft());
    _postorderPrint(rt->getRight());
    std::cout << rt->getData() << std::endl;
  }
}

template<class T>
void Tree<T>::_inorderPrint(TreeNode<T>* rt) const
{
  if ( rt )
  {
    _inorderPrint(rt->getLeft());
    std::cout << rt->getData() << " : " << rt->getIndex() << std::endl;
    _inorderPrint(rt->getRight());
  }
}

#endif
