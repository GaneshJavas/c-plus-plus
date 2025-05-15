# Different Types of Loops in C++

In C++, loops are used to execute a block of code repeatedly as long as a specified condition is met. The main types of loops in C++ are:

## 1. **For Loop**
The `for` loop is used when the number of iterations is known beforehand.

```cpp
for (int i = 0; i < 10; i++) {
    std::cout << i << std::endl;
}
```

## 2. **While Loop**
The `while` loop is used when the number of iterations is not known and depends on a condition.

```cpp
int i = 0;
while (i < 10) {
    std::cout << i << std::endl;
    i++;
}
```

## 3. **Do-While Loop**
The `do-while` loop is similar to the `while` loop, but it guarantees at least one execution of the loop body.

```cpp
int i = 0;
do {
    std::cout << i << std::endl;
    i++;
} while (i < 10);
```

## 4. **Range-Based For Loop**
Introduced in C++11, the range-based `for` loop is used to iterate over elements in a container.

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (int num : numbers) {
    std::cout << num << std::endl;
}
```

## Summary
| Loop Type          | Use Case                              |
|--------------------|---------------------------------------|
| `for`             | Known number of iterations           |
| `while`           | Unknown iterations, condition-based  |
| `do-while`        | At least one execution guaranteed    |
| Range-based `for` | Iterating over containers            |
