#ifndef TREENODE_HPP
#define TREENODE_HPP

template<class T>
class TreeNode
{
  private:
    TreeNode* left;
    TreeNode* right;
    T data;
    static int count;
    int index;
  public:
    TreeNode(TreeNode*, TreeNode*, T);
    TreeNode* getLeft() const;
    TreeNode* getRight() const;
    T getData() const;
    void setLeft(TreeNode* node);
    void setRight(TreeNode* node);
    int getIndex() const;
};

template<class T>
int TreeNode<T>::count{};

template<class T>
TreeNode<T>::TreeNode(TreeNode* left_node,
                      TreeNode* right_node,
                      T _val) :
  left(left_node), right(right_node), data(_val), index(count++) {}

template<class T>
int TreeNode<T>::getIndex() const
{
  return index;
}

template<class T>
TreeNode<T>* TreeNode<T>::getLeft() const
{
  return left;
}

template<class T>
TreeNode<T>* TreeNode<T>::getRight() const
{
  return right;
}

template<class T>
T TreeNode<T>::getData() const
{
  return data;
}

template<class T>
void TreeNode<T>::setLeft(TreeNode* node)
{
  left = node;
}

template<class T>
void TreeNode<T>::setRight(TreeNode* node)
{
  right = node;
}

#endif
