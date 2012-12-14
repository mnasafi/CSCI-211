


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


bool Tree::insert(int value, Node *&cur_root)
{
  if (cur_root == NULL)
  {
    cur_root = new Node(value);
    return true;
  }
  else if (cur_root->m_value == value)
    return false; //already in tree
  else if (cur_root->m_value > value)
    return insert(value, cur_root->m_left);
  else
    return insert(value, cur_root->m_right);
}


void Tree::depth(Node *root)
{
  if (root)
  {
    depth(root->m_left);
    cout<<root->m_value<<endl;
    depth(root->m_right);
  }
}


//program efficiency
////rule 1
//    get it clear and correct before you worry about efficiency
////rule 2
//    you are prob wrong


//order of magnitude
//  

//Final notes

////any tree question, prob recursive
////leaf is a node with no children
int Tree::count_leaves() //public
{
 //base case, no children 
  return count_leaves(m_root);
}

int Tree::count_leaves(Node *cur_root)//private
{
  if(!cur_root)
    return 0;
  if(!cur_root->m_left && !cur_root->m_right)
    return 1;
  return count_leaves(cur_root->m_left) + count_leaves(cur_root->m_right);
  
}
