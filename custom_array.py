class DynamicArray:
    def __init__(self):
        self.capacity = 2
        self.size = 0 
        self.arr = [0]
        self.prefix =[]
        
    def resize(self): #double de capacity 
        new_capacity = self.capacity * 2
        new_arr = [0] * new_capacity 
        for i in range(self.size):
            new_arr[i] = self.arr[i]
        self.arr = new_arr
        self.capacity = new_capacity 
        
    def append(self,value):
        if self.size == self.capacity:
            self._resize()
        self.arr[self.size] = value 
        self.size += 1
        
    def get(self,index):
        if 0<=index<self.size:
            return self.arr[index]
        else:
            raise IndexError("index out of bounds")
    
    def set(self,index,value):
        if 0<=index<self.size:
            self.arr[index]=value
        else: raise IndexError("index out of bounds")
    
    def current_size(self):
        return self.size
     
da = DynamicArray()       
da.append(3)
da.append(5)
da.append(2)
da.append(7)
da.append(4)

print("Current size:", da.current_size())
print("Element at index 2:", da.get(2))
da.set(2, 10)
print("Element at index 2 after set:", da.get(2))

            