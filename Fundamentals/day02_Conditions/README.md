## 📘 Overview
---

This section introduces **conditional statements** and **control flow mechanisms** in the C programming language.

Conditional statements allow a program to **make decisions** and execute **different blocks of code** based on specific conditions.

Mastering these concepts is essential for writing **logical**, **flexible**, and **real-world C programs**.

---

## 📌 Topics Covered
---

- Relational operators  
- Logical operators  
- `if` statement  
- `if–else` statement  
- `else if` ladder  
- Nested `if` statements  
- Multiple conditions  
- `switch–case` statement  
- Ternary operator (short-hand `if–else`)

---

## 🔹 Relational Operators
---

Relational operators are used to compare **two operands**.

They return:
- `1` → true  
- `0` → false  

| Operator | Meaning |
|--------|--------|
| `==` | Equal to |
| `!=` | Not equal to |
| `>`  | Greater than |
| `<`  | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

Relational operators are commonly used inside conditional expressions in `if`, `else if`, and loop statements.

---

## 🔹 Logical Operators
---

Logical operators are used to **combine multiple conditions** or **reverse a condition**.

| Operator | Meaning | Description |
|--------|--------|------------|
| `&&` | AND | True if all conditions are true |
| `||` | OR | True if at least one condition is true |
| `!`  | NOT | Reverses the condition |

Logical operators are essential when handling **complex decision-making logic**.

---

## 🔹 if Statement
---

The `if` statement allows a program to execute a block of code **only when a condition is true**.

- The condition is a logical expression  
- If the condition evaluates to `true (1)`, the code block executes  
- If the condition is `false (0)`, the code block is skipped  

This is the most basic form of decision-making in C.

---

## 🔹 if–else Statement
---

The `if–else` statement provides **two execution paths**:

- One when the condition is true  
- One when the condition is false  

It ensures that **exactly one block of code** is executed based on the result of the condition.

---

## 🔹 else if Ladder
---

The `else if` ladder is used when there are **multiple conditions** to check.

- Conditions are evaluated **from top to bottom**  
- The **first true condition** is executed  
- Remaining conditions are ignored  
- An optional `else` handles cases where no condition is true  

This structure improves readability and avoids deeply nested `if` statements.

---

## 🔹 Nested if Statements
---

A nested `if` statement is an `if` or `if–else` placed inside another `if` or `else` block.

- Used when a condition should be checked **only if another condition is already true**  
- Useful for dependent or hierarchical conditions  
- Overusing nested `if` statements can make code harder to read  

---

## 🔹 Multiple Conditions
---

Multiple conditions can be combined using logical operators:

- `&&` → all conditions must be true  
- `||` → at least one condition must be true  
- `!` → negates a condition  

This technique allows handling **complex decision logic** in a clear and structured way.

---

## 🔹 switch–case Statement
---

The `switch–case` statement is a control structure used to select **one of many execution paths** based on the value of an expression.

### Key characteristics:
- The expression is evaluated **once**
- Each `case` represents a possible value
- `break` stops execution of the current case
- `default` runs if no case matches

### Advantages:
- Cleaner and more readable than long `if–else` chains
- Often provides better performance
- Ideal when comparing a single variable against constant values

---

## 🔹 Ternary Operator (Short-Hand if–else)
---

The ternary operator is a **compact form of `if–else`**.

- Evaluates a condition
- Returns one value if true
- Returns another value if false

Best used for **simple, short conditions**.  
Using it for complex logic can reduce readability.

---

## ✅ Key Notes
---

- In C, `true` is represented by `1`, and `false` by `0`
- Conditions rely heavily on relational and logical operators
- Choosing the right control structure improves readability and maintainability
- Keep conditions simple and avoid unnecessary nesting
