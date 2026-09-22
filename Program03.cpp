#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    double price;
    int stockQuantity;
    static int totalProducts;

public:
    Product(int id, string name, double p, int stock)
        : productId(id), productName(name), price(p), stockQuantity(stock) {
        totalProducts++;
    }

    inline int getId() const {
        return productId;
    }

    inline string getName() const {
        return productName;
    }

    inline double getPrice() const {
        return price;
    }

    void updateStock(int quantity) {
        stockQuantity = quantity;
    }

    static int getTotalProducts() {
        return totalProducts;
    }

    void display() const {
        cout << "ID: " << productId
             << " | Product: " << productName
             << " | Price: Rs. " << price
             << " | Stock: " << stockQuantity << endl;
    }

    ~Product() {
        totalProducts--;
    }
};

int Product::totalProducts = 0;

int main() {

    Product p1(3010, "Tablet", 18500, 12);
    Product p2(3011, "Smartwatch", 3500, 28);
    Product p3(3012, "Bluetooth Speaker", 2200, 18);

    cout << "=== Product Catalog ===" << endl;

    p1.display();
    p2.display();
    p3.display();

    cout << "\nTotal Products in Catalog: "
         << Product::getTotalProducts() << endl;

    return 0;
}