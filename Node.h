#ifndef _NODE_H_
#define _NODE_H_

class Node {
public:
  Node *next;
  int value;
  
  Node(Node *n, int v);
  void deleteAll();
  bool contains(int v);
  int size();
  /* Node *cloneAll(); */
  bool equalAll(Node *n);
};


#endif /* _NODE_H_ */

