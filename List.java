public class List
{
    private Item list;

    public List()
    {
        list = null;
    }

   // method #1: new constructor creates a new single linked list from an array of integers
   // constructor accepts an array as a parameter
   public List(int[] a)
   {
       list = null; // list is intially set to null
       Item currList = list; // current list is assigned the list value
      
       // for loop will create iterations while conditions of length is true
       for(int i=0; i < a.length; i++)
       {
           if(currList == null) // if statement will test value and if it is empty, it will make the array the first element
           {
               list = new Item(a[i]);
               currList = list;
           }
       else // if not true then it will insert array after the current list
           {
               currList.next = new Item(a[i]);
               currList = currList.next;
           }
       }
   }

    public void insertFirst(int i)
    {
        Item r = new Item(i);
        r.next = list;
        list = r;
    }

    public int removeFirst()
    {
        if (isEmpty()) {
            System.out.println("Error in removeFirst(): list is empty");
            System.err.println("Error in removeFirst(): list is empty");
            System.exit(1);
        }
        Item r = list;
        int x = r.info;
        list = r.next;
        return x;
    }

    public Boolean isEmpty()
    {
        return list == null;
    }

    public int count()
    {
        int count = 0;
        Item r = list;
        while (r != null) 
        {
            ++count;
            r = r.next;
        }
        return count;
    }

    public void insertAfter(Item p, int i)
    {
        if (isEmpty() || p == null) 
        {
            System.out.println("Error in insertAfter(): list is empty or p not set");
            System.err.println("Error in insertAfter(): list is empty or p not set");
            System.exit(2);
        }
        Item r = new Item(i);
        r.next = p.next;
        p.next = r;
    }

    public int deleteAfter(Item p)
    {
        if (p.next == null || p == null) 
        {
            System.out.println("Error in deleteAfter(): p not set or is last item");
            System.err.println("Error in deleteAfter(): p not set or is last item");
            System.exit(3);
        }
        Item r = p.next;
        int x = r.info;
        p.next = r.next;
        return x;
    }

    // method will return a reference to the first occurrence of i 
    public Item find(int i)
    {
        if (isEmpty())// if statement will test for empty value
        {
            System.out.println("Error in find(): list is empty");
            System.err.println("Error in find(): list is empty");
            System.exit(4);
            return null; // if empty list is not found then it returns null
        }

        Item r = list;
        while (r != null && r.info != i)
            r = r.next;
        return r;
    }
    
   // method # 2: method returns a string representing a list, nicely formatted
   public String toString()
   {
       // a new StringBuilder object is created
       StringBuilder sb = new StringBuilder();
       Item currList = list; // current list is assigned the value of list
      
       // loop over list appending curr's info to sb
       while(currList != null)
       {
           sb.append(currList.info);
           if(currList.next != null) // if statement will test current list to see if it is not the last node and if so it will append a comma and a space to sb
               sb.append(", ");
          
           currList = currList.next;
       }
      
       return sb.toString();
   }
  
   // method # 3:  method returns a reference to the last item in a list, or null if the list is empty
   public Item findLast()
   {
       if(isEmpty()) // if statement will test for an empty list, and return null
           return null;
       Item currList = list;

       // while loop will create iteration in order to get the last element 
       while(currList.next != null)
           currList = currList.next;
       return currList; 
   }
  
   // method # 4: method creates a new item and inserts it at the end of a list
   public void insertLast(int val)
   {
       if(isEmpty()) // if statement will test for empty list making the variable 'val' the first value
           insertFirst(val);
       else
       {
           Item last = findLast(); // last node is assigned to the last variable
           last.next = new Item(val); // a new node is created in order to store the variable 'val'
       }
   }
  
   // method # 5: removes the last item from a list and returns its info
   public int removeLast()
   {
       if (isEmpty()) // if statement will test for empty list
       {
           System.out.println("Error in removeLast(): list is empty");
           System.err.println("Error in removeLast(): list is empty");
           System.exit(1);// reports an error and exit if the list is empty
       }
      
       Item currList = list; // current list is assigned the value of list
       Item prev = null; // pre is node previous to curr
      
       // while loop will create iterations in order to get the last node 
       while(currList.next != null)
       {
           prev = currList;
           currList = currList.next;
       }
      
       int x = currList.info; // method call in order to get the last node's data
       if(prev != null) // if statement will test the list for more than one element
    {
           prev.next = null;
        }
    else
    { 
           list = null;
        }
    return x;
   }
  
   // method # 6: makes a copy of a list and returns a reference to the new list
   public List copy()
   {
       List result = new List(); // a new empty List is created
       Item currList = list;
      
       // while loop will create iterations in order to insert the current list data at the end of result
       while(currList != null)
       {
           result.insertLast(currList.info);
           currList = currList.next;
       }
      
       return result;
   }
  
   // method # 7: creates a new list that is the result of joining one list to the end of another
   public List join(List other)
   {
       List result = new List(); // a new empty List is created

       Item currList = list;
      
       // while loop will create iterations in order to insert the current list data at the end of result
       while(currList != null)
       {
           result.insertLast(currList.info);
           currList = currList.next;
       }
      
       currList = other.list; // current list is set to the first node of the other list
      
        // while loop will create iterations in order to insert the current list data at the end of result
       while(currList != null)
       {
           result.insertLast(currList.info);
           currList = currList.next;
       }
      
       return result;
   }
  
   // method #8: creates a new list that is the intersection of one list with another
   public List intersect(List other)
   {
       List result = new List(); // a new empty List is created
       Item currList = list; 
      
       // while loop will create iterations over the list
       while(currList != null)
       {
       // if statement will test if current data is present in the other list, then it will insert current data at the end of the result

           if(other.find(currList.info) != null) 
               result.insertLast(currList.info);
          
           currList = currList.next;
       }
      
       return result;
   }
  
  
}//end of class
