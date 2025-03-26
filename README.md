# 📌 Push Swap

![Push Swap](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6a/Sorting_quicksort_anim.gif/500px-Sorting_quicksort_anim.gif)

## 📖 About the Project
The **Push Swap** project is a challenge from **42 School**, where you must implement an **efficient sorting algorithm** using a limited set of operations on two stacks. The goal is to sort a list of numbers with as few moves as possible.

## 🚀 Features
✅ Implementation of the **Radix Sort algorithm** for efficient sorting.<br>
✅ Use of **two stacks** for number manipulation.<br>
✅ Optimized to minimize the number of operations.<br>
✅ Handles **large inputs efficiently**.<br>

## 🛠️ How It Works
The program sorts numbers using a restricted set of stack operations:
- **sa** (swap a): Swaps the first two elements of stack A.
- **sb** (swap b): Swaps the first two elements of stack B.
- **ss**: Executes `sa` and `sb` simultaneously.
- **pa** (push a): Moves the top element from stack B to stack A.
- **pb** (push b): Moves the top element from stack A to stack B.
- **ra** (rotate a): Rotates all elements of stack A upwards.
- **rb** (rotate b): Rotates all elements of stack B upwards.
- **rr**: Executes `ra` and `rb` simultaneously.
- **rra** (reverse rotate a): Rotates all elements of stack A downwards.
- **rrb** (reverse rotate b): Rotates all elements of stack B downwards.
- **rrr**: Executes `rra` and `rrb` simultaneously.

## 📦 Installation and Usage
### 🔹 Compile the project
```sh
make
```

### 🔹 Run the program
```sh
./push_swap <numbers>
```
Example:
```sh
./push_swap 4 67 3 87 23
```

To verify the solution, use the **checker**:
```sh
./push_swap 4 67 3 87 23 | ./checker 4 67 3 87 23
```

## 📊 Algorithm Used
This project utilizes the **Radix Sort** algorithm, which efficiently handles large inputs. Although it requires additional operations compared to other sorting methods, it ensures scalability and maintains optimal performance across different input sizes.

## 🎯 Performance
My implementation achieved the following results:
- **100 numbers**: Less than **1100 operations**.
- **500 numbers**: Less than **7000 operations**.

## ✨ Future Improvements
- Further optimize the **Radix Sort** implementation.
- Reduce the number of operations for **large datasets**.
- Develop a **graphical visualization** for better debugging.

## 👤 Author
Developed by **Yasmin Maia** 💻🚀

Connect with me:
- 🔗 [LinkedIn](https://www.linkedin.com/in/yasmin-maia/)
- 🐙 [GitHub](https://github.com/Yasmin-Maia)

---

Made with ❤️ for 42 School. Happy sorting! 🚀

