/******************************************************************************

Set Operations

This program establishes a data type called Set and performs set operations

Two sets, x and y, are initialized, and then union, intersection, 
cardinal value, and complement operations are performed.

Mitch Priestley
12/23/2023

 âˆª  set union 
 âˆ©  set intersection
 || cardinal value
 ~  set complement

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

const int U = 10;              // U defines the Universal set 0 to U - 1


// A struct call Set is established as an array of Boolean values that are set to true for every member and
// false for every non-member element of the a given set.
struct Set {
    bool member[U] {};   // (elements can be natural numbers 0 to U - 1)
    
    Set() {};
    Set(std::initializer_list<int> values) {for (int value : values) insert(value);}  
    void insert(int n) { 0 <= n && n < U ? (member[n] = true) : 0; }
};


ostream& operator<<(ostream&, Set);             // Enable sets to be displayed with cout
Set setop(Set s1, string op, Set s2);           // Perform binary set ops: union, int
int setop(string op1, Set s, string op2);       // Peform cardinal value op: |A|
Set setop(string op, Set s);                    // Perform complement op: ~A


int main()
{

    cout<<"Welcome to Set Operations v1.0 "  << endl;; 
    
    cout.imbue(locale(""));      // Enable correct output of unicode characters
    
    cout << endl << "Examples of set operations are âˆª, âˆ©, cardinal value, and complement..." << endl << endl;
    
    // Initialize Set X
    Set x;
    x.insert(1);
    x.insert(3);
    x.insert(5);
    
    cout << "Set X = " << x << endl;
    
    // Initialize Set y
    Set y({2, 4, 5});
    cout << "Set Y = " << y << endl;

    
    // Perform set operations using X and Y
    cout << endl;
    setop(x, "âˆª", y);
    setop(x, "âˆ©", y);
    setop("|", x, "|");
    setop("~", y);
    


    return 0;
}




ostream& operator<<(ostream& os, Set s) 
{ 
    bool first {true};

    os << "{";
    
    for (int m = 0; m < U; ++m) {
        if (s.member[m]) {
            if (!first) {
                cout << ", ";
            }
            else
                first = false;

            os << m;
        }
    }
    
    os << "}";
    
    return os;

}



Set setop(Set s1, string op, Set s2) {
    
    Set result;
    
    cout << s1 << ' ' << op << ' ' << s2 << " = ";
    
    if (op == "U") {
            for (int m = 0; m < U; ++m) {
                if (s1.member[m] || s2.member[m])
                    result.member[m] = true;
            }
            
    }
    else if (op == "I") {                   // Leave for homework



           
        
    }
    
    cout << result << endl << endl;
    return result;
} 

int setop(string op1, Set s, string op2){ // Leave for homework
    
    int result {};
    
    if (op1 == "|" && op2 == "|") {
        cout << "|" << s << "|" << " = ";
        int counter = 0;
//        for (int m = 0; m < U; ++m)
//            counter += s.member[m];
        result = counter;
    }
    
    cout << result << endl << endl;
    
    return result;
}



Set setop(string op, Set s) {       // Leave for homework
    
    Set result;
    
    cout << op << s << " = ";
    
    if (op == "~") {
//        for ()
//            if ()
//                result.insert(m);
    }
    
    cout << result << endl;
    
    return result;
}

