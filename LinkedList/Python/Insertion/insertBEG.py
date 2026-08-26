class node:
    def __init__(self,data):
        self.data=data
        self.next=None
class LinkedList:
    def __init__(self):
        self.head=None

    #insert at beggining of a Linked List.
    def insertbeg(self, data):
        newnode=node(data)
        ptr=self.head

        if ptr is None:
            self.head=newnode
        else:
            newnode.next=self.head
            self.head=newnode

    def display(self):
        ptr=self.head
        while(ptr != None):
            print(ptr.data,end=" -> ")
            ptr=ptr.next
        print ("NULL. \n")

head=LinkedList()
head.insertbeg(1)
head.insertbeg(2)
head.insertbeg(3)
head.insertbeg(4)
head.insertbeg(5)
head.display()