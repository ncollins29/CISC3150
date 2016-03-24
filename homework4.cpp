Question 1:

Consider the following inheritance hierarchy:
class BaseCL {
  public BaseCL(){};
  public void demoFunc(){};

  private int m;

  protected int n;
}

class DerivedCL extends BaseCL {
  public DerivedCL(){};
  public void demoFunc(){};
  private int r;
}

(a) Which of the data members m, n, and r can be accessed by a member function in the
derived class?
    Data members n and r can be accessed by a member function in the derived class. 
    
(b) Which of the data members m, n, and r can be accessed by a member function in the base
class? 
    Data members m and n can be accessed by a member function in the base class.
    
(c) Consider the test program:
class TestIn {
    public static void main(String[] args){
        BaseCL bObj = new BaseCL();
        BaseCL dObj = new DerivedCL();
        
        bObj.demoFunc();
        dObj.demoFunc();
    }
}

Which method does the method call bObj.demoFunc() invoke, and which method does
the method call dObj.demoFunc() invoke?

    bobj.demoFunc() invokes the base class method and dobj.demoFunc() invokes the derived class method.
