# LRUCache
LRUCache implementaion

I have a doubly linked list called Queue which contains multiple nodes.
A hashmap, implelmeted as an array of pointers to the nodes is used.
The key in the hashmap will be the index of the array adn the value will be a ointer, pointing to the location of the node in the queue. 
Whenever a page_number is accessed, if its presetn in the hashmap, it will be retrieved and will be moved to the front of the queue.
When a particular mapping is not avialable, if there is space in the queue, it will get added to the front of the queue and there will be a mapping from the hashmap to this node.Else, the last node in the queue is removed and the new node is added to the beginning of the list.
