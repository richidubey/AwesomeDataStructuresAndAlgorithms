
# Stacks and Queues Editorial-PD


In this section, we introduce two closely-related data types for manipulating arbitrarily large collections of objects: the stack and the queue. Stacks and queues are special cases of the idea of a collection. 

Each is characterized by four operations: create the collection, insert an item, remove an item, and test whether the collection is empty.

**Stacks** A stack is a collection that is based on the last-in-first-out (LIFO) policy. By tradition, we name the stack insert method `push()` and the stack remove operation `pop()`. We also include a method to test whether the stack is empty.

Array implementations of stacks. Representing stacks with arrays is a natural idea. 

In particular, we maintain an instance variable n that stores the number of items in the stack and an array `items[]` that stores the n items, with the most recently inserted item in `items[n-1]` and the least recently inserted item in `items[0]`. This policy allows us to add and remove items at the end without moving any of the other items in the stack.
Fixed-length array implementation of a stack of strings. 

The doubling-and-halving strategy guarantees that that the stack never overflows and never becomes less than one-quarter full.
Resizing array implementation of a generic stack. 

For technical reasons, a cast is needed when allocating the array of generics.
Linked lists. A singly linked list comprises a sequence of nodes, with each node containing a reference (or link) to its successor. By convention, the link in the last node is null, to indicate that it terminates the list. With object-oriented programming, implementing linked lists is not difficult. We define a class for the node abstraction that is recursive in nature:
```
class Node { 
   String item; 
   Node next; 
} 
```


>Anatomy of a singly linked list

A Node object has two instance variables: a String and a Node. The String is a placeholder in this example for any data that we might want to structure with a linked list (we can use any set of instance variables); the instance variable of type Node characterizes the linked nature of the data structure.
Linking together a linked list. For example, to build a linked list that contains the items "to", "be", and "or", we create a Node for each item:
linking together a linked list.

**Insert** Suppose that you want to insert a new node into a linked list. The easiest place to do so is at the beginning of the list. For example, to insert the string not at the beginning of a given linked list whose first node is first, we save first in a temporary variable oldFirst, assign to first a new Node, and assign its item field to not and its next field to oldFirst.
inserting an item into a linked list

**Remove** Suppose that you want to remove the first node from a list. This operation is even easier: simply assign to first the value first.next.
removing an item from a linked list

**Traversal** To examine every item in a linked list, we initialize a loop index variable x that references the the first Node of the linked list. Then, we find the value of the item associated with x by accessing x.item, and then update x to refer to the next Node in the linked list, assigning to it the value of x.next and repeating this process until x is null (which indicates that we have reached the end of the linked list). This process is known as traversing the list, and is succinctly expressed in this code fragment:
```
for (Node x = first; x != null; x = x.next) 
    StdOut.println(x.item);
```    
    
>Traversing a singly linked list

Implementing stacks with linked lists. Representing stacks with linked lists is a natural idea. In particular, we maintain an instance variable first that stores a reference to the most recently inserted item. This policy allows us to add and remove items at the beginning of the linked list without accessing the links of any other items in the linked list.
Linked-list implementation of a stack of strings. 

**Queue** A queue supports the insert and remove operations using a first-in first-out (FIFO) discipline. By convention, we name the queue insert operation enqueue and the remove operation dequeue.

Linked-list implementation of a queue. Like Stack, we maintain a reference first to the least-recently added Node on the queue. For efficiency, we also maintain a reference last to the most-recently added Node on the queue.
inserting into a queue

Resizing array implementation of a queue. It is a bit trickier since we need to add and remove items from opposite ends of the array.
trace of a queue implementation using an array

**Generics** To use a generic collection, the client must specify the type argument when the stack is created:
```
Stack<Integer> stack = new Stack<Integer>();
```

**Autoboxing** We have designed our stacks to be generic, so that they objects of any type. The Java language features known as autoboxing and unboxing enable us to reuse generic code with primitive types as well. Java supplies built-in object types known as wrapper types, one for each of the primitive types: Boolean, Integer, Double, Character, and so forth. Java automatically converts between these reference types and the corresponding primitive types so that we can write code like the following:
```
Stack<Integer> stack = new Stack<Integer>();
stack.push(17);            // autoboxing  (int -> Integer)
int a = stack.pop();       // unboxing    (Integer -> int)
Iteration. Sometimes the client needs to access all of the items of a collection, one at a time, without deleting them. To maintain encapsulation, we do not want to reveal the internal representation of the queue (array or linked list) to the client. To accommodate this design pattern, Java provides the foreach statement. You should interpret the following for statement in the following code fragment as for each string s in the collection, print s.
Stack collection = new Stack();
```

```
...
for (String s : stack)
    StdOut.println(s);
    
```

Implementing a collection that supports iteration in this way requires implementing Java's java.util.Iterator and java.util.Iterable interfaces. See the textbook for details.
Stack and queue applications. Stacks and queues have numerous useful applications.

Arithmetic expression evaluation. An important application of stacks is in parsing. For example, a compiler must parse arithmetic expressions written using infix notation. For example the following infix expression evaluates to 212.
( 2 + ( ( 3 + 4 ) * ( 5 * 6 ) ) )
