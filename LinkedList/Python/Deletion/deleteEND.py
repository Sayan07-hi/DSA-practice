class node:
    def __init__(self, data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    #Insert at end of the linked list.

    def insertend(self, data):
            newnode=node(data)
            ptr=self.head
            if ptr is None:
                self.head=newnode
            else:
                while ptr.next is not None:
                    ptr=ptr.next
                ptr.next=newnode
    
    #Display the linked list.
    def display(self):
        ptr=self.head
        while ptr is not None:
            print(ptr.data, end=" -> ")
            ptr=ptr.next
        print("NULL")

    #Delete at end of the linked list.
    def deleteend(self):
        if self.head is None:
            print("The list is empty.")
        elif self.head.next is None:
            self.head = None
        else:
            ptr = self.head
            while ptr.next.next is not None:
                ptr = ptr.next
            ptr.next = None
    
head=LinkedList()
head.insertend(1)
head.insertend(2)
head.insertend(3)
head.insertend(4)
head.insertend(5)
head.display()
n=int(input("Enter how many nodes to delete: "))
for i in range(n):
    head.deleteend()
    i+=1
head.display()

    
