Brief descriptions of each Program :- 

• E-Commerce Product Catalog :-

This C++ program implements an **E-Commerce Product Catalog** to store and manage product information such as product ID, name, price, and stock quantity.

* **`Product` class** represents an individual product.
* Private data members demonstrate **encapsulation** by restricting direct access to product details.
* A **parameterized constructor** initializes each product and increases the static product count.
* The **static data member `totalProducts`** keeps track of the number of active product objects.
* **Inline accessor functions** (`getId()`, `getName()`, and `getPrice()`) provide quick access to product information.
* The `updateStock()` function allows the stock quantity to be changed.
* The **static member function `getTotalProducts()`** returns the current number of product objects.
* The **destructor** decreases `totalProducts` when a product object is destroyed.
* The `display()` function shows the details of each product.

**In short:** The program demonstrates how OOP concepts such as **static members, constructors, destructors, encapsulation, and inline functions** can be used to manage products in an e-commerce system.
