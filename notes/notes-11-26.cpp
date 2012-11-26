


/****************
find
*****************/

//funct call, can be recursive
//only returns first root that matches target left side first
stree::Node *stree::find_node(string target, Node *cur_root)
{
  if(!cur_root) //base case end of tree
    return NULL;
  
  if(cur_root->m_str==target) //base case found target
    return cur_root;
    
  Node *left = find_node(target, cur_root->m_left)
  if(left!=NULL)
    return left;
  return find_node(target, cur_root->m_right);
}

/****************
delete tree branch
*****************/

//funct destructor
stree::Node::~Node() //recursive destructor, kills subnodes and current node
{
  delete m_left;
  delete m_right;
}
//use
delete target_node; //kills sub and target


/****************
delete single node
*****************/

//what to know
  //am i(cur) my parent's child
  if(target_node->m_parent->m_left == cur)
  else
    assert(target_node->m_parent->m_right == target_node)


/****************
delete node
*****************/



