### ✅ Code Breakdown:

```cpp
#include<iostream>
using namespace std;
```

* `#include<iostream>`: Includes the Input/Output stream library to use `cin` and `cout`.
* `using namespace std;`: So we don’t need to write `std::cout` or `std::string` everywhere.

---

### ✅ Class Definition

```cpp
class Cons {
```

* Declares a class named `Cons`, which will represent a subject with a name and score.

---

### ✅ Public Members

```cpp
public:
    string subject;
    int* score;
```

* `string subject;`: Holds the name of the subject (like "Maths", "Science").
* `int* score;`: A pointer to an integer, dynamically allocated using `new`. Used instead of a normal `int` to demonstrate dynamic memory management.

---

### ✅ Default Constructor

```cpp
Cons() {
    subject = "Not Specified";
    score = new int(0);
    cout << "Default Constructor Called\n";
}
```

* This constructor runs **when no arguments are provided** during object creation.
* Sets `subject` to `"Not Specified"`.
* Allocates memory for `score` and initializes it to 0 using `new int(0)`.
* Prints a message when called.

---

### ✅ Parameterized Constructor

```cpp
Cons(string subs, int sc) {
    subject = subs;
    score = new int(sc);
    cout << "Parameterized Constructor Called\n";
}
```

* Called when you create an object with arguments.
* Takes two inputs:

  * `subs`: the subject name.
  * `sc`: the score.
* Dynamically allocates memory for `score` and assigns the value `sc`.
* Prints confirmation when executed.

---

### ✅ Copy Constructor (Deep Copy)

```cpp
Cons(Cons& misc) {
    subject = misc.subject;
    score = new int(*misc.score);
    cout << "Copy Constructor Called\n";
}
```

* Used when an object is **copied** from another (e.g., `Cons subject2 = subject1;`).
* Performs a **deep copy**:

  * Copies `subject` as usual.
  * Creates a **new memory** location for `score` and copies the **value** from `misc.score`.
  * Prevents both objects from sharing the same memory address for `score`.
* This avoids issues when one object changes its `score` or is destroyed.

---

### ✅ Destructor

```cpp
~Cons() {
    delete score;
    cout << "Destructor Called for " << subject << "\n";
}
```

* Automatically called when the object goes out of scope.
* Releases memory allocated with `new`.
* Prevents memory leaks.
* Prints which object is being destroyed (based on its `subject`).

---

### ✅ Member Function

```cpp
void displayMarksheet() {
    cout << subject << " : " << *score << endl;
}
```

* Prints the subject and score.
* `*score`: dereferences the pointer to get the integer value stored.

---

### ✅ Main Function

```cpp
int main() {
```

Starts the program.

---

### ✅ Object Creation (Parameterized Constructor)

```cpp
Cons subject1("Science", 40);
```

* Creates `subject1` using the parameterized constructor.
* `subject1.subject = "Science"`
* `*subject1.score = 40`

Output:

```
Parameterized Constructor Called
```

---

### ✅ Object Copying (Copy Constructor)

```cpp
Cons subject2 = subject1;
```

* Calls the **copy constructor**.
* Makes a new object `subject2` with the **same values** as `subject1`.
* **Deep copy** ensures `subject2.score` points to **a different memory location**.

Output:

```
Copy Constructor Called
```

---

### ✅ Display Marks

```cpp
subject1.displayMarksheet();
subject2.displayMarksheet();
```

* Prints:

  ```
  Science : 40
  Science : 40
  ```

---

### ✅ Modify subject1

```cpp
subject1.subject = "Maths";
*subject1.score = 45;
```

* Changes `subject1.subject` to `"Maths"`
* Changes `subject1.score` value to 45
* Since it’s a **deep copy**, this does **not affect `subject2`**.

---

### ✅ Display Again

```cpp
subject1.displayMarksheet();
subject2.displayMarksheet();
```

* Prints:

  ```
  Maths : 45
  Science : 40
  ```

* Confirms that the copy was **deep**, not shallow.

---

### ✅ Program Ends → Destructors Called

At the end of `main()`, both objects go out of scope.

```cpp
~Cons()
```

* Destructors are called automatically.
* Memory is released.
* You’ll see:

  ```
  Destructor Called for Maths
  Destructor Called for Science
  ```

Order may vary depending on compiler, but usually objects are destroyed in **reverse order** of creation.

---

### 🔁 Summary of Flow:

| Step | Action                               | Constructor Called      |
| ---- | ------------------------------------ | ----------------------- |
| 1    | `subject1("Science", 40)`            | Parameterized           |
| 2    | `subject2 = subject1`                | Copy Constructor (deep) |
| 3    | Modify `subject1`                    | Manual field change     |
| 4    | Print marks                          | Custom method           |
| 5    | Exit `main()` → destroy both objects | Destructor (×2)         |

---

### ✅ Final Output:

```
Parameterized Constructor Called
Copy Constructor Called
Science : 40
Science : 40
Maths : 45
Science : 40
Destructor Called for Maths
Destructor Called for Science
```


