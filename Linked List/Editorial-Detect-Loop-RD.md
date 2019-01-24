## Editorial for Finding if there is a loop in linked list

**Algorithm and Implementation**

Here we'll maintain two pointers, slow and fast. Slow moves one step forward (by slow=slow->next) while fast moves two step forward (fast=fast->next->next). So if there exists a loop, they will surely meet at some point (I'll update in some days about why this is the fastest algorithm) . To see if they point to same node, just do if(slow==fast) as they refer to a particular memory address.



__*Difficutly*__: 2/5.