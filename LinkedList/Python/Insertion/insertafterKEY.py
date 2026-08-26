class node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def insertEND(self,data):
        newnode=node(data)
        ptr=self.head
        if ptr == None:
            self.head=newnode
        else:
            while(ptr.next != None):
                ptr=ptr.next
            ptr.next=newnode

    def display(self):
        ptr=self.head
        while ptr is not None:
            print(ptr.data, end=" -> ")
            ptr=ptr.next
        print("NULL")

    def insertafterkey(self, data, key):
        newnode = node(data)
        ptr = self.head
        # Case 1: Head is NULL
        if ptr == None:
            self.head = newnode
        else:
            prev = None
            # Search for key
            while ptr != None and ptr.data != key:
                prev = ptr
                ptr = ptr.next
            if ptr != None:
                newnode.next = ptr.next
                ptr.next=newnode
            # Case 4: Key not found
            else:
                print("Key not found.")
        

head=LinkedList()
head.insertEND(1);
head.insertEND(2);
head.insertEND(3);
head.insertEND(4);
head.insertEND(5);
head.display()
data,key=map(int,input("Enter the data to be inserted and the key[element] : ").split())
head.insertafterkey(data,key)
head.display()
