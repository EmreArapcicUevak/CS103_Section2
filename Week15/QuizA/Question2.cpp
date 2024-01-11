/*
 *
    Create an application for shop inventory, where each item should be
    characterized by its barcode, name, price and number of items in the stock. The application
    program should allow setting and viewing of the item’s data and changing of the individual item
    characteristics. Also create a test code for the application.
 *
 */


#include "iostream"
#include "string"
#include "cassert"
using namespace std;

class Product {
private:
    string barcode, name;
    double price;
    int stock;

public:
    // Constructor
    Item(string barcode, string name, double price, int stock) {
        this->barcode = barcode;
        this->name = name;
        this->price = price;
        this->stock = stock;
    }

    Item(const Product& objectToCopy){
        this->barcode = objectToCopy.barcode;
        this->name = objectToCopy.name;
        this->price = objectToCopy.price;
        this->stock = objectToCopy.stock;
    }


    // Setters
    void setBarcode(const string &barcode) { this->barcode = barcode; }
    void setName(const string &name) { this->name = name; }
    void setPrice(double price) { this->price = price; }
    void setStock(int stock) { this->stock = stock; }

    // Getters
    string getBarcode() const { return barcode; }
    string getName() const { return name; }
    double getPrice() const { return price; }
    int getStock() const { return stock; }

    // Function to display item details
    void display() const {
        cout << "Barcode: " << barcode << "\n"
        << "Name: " << name << "\n"
        << "Price: " << price << "\n"
        << "Stock: " << stock << "\n\n";
    }

    // Utility functions
    void Sell(){
        assert(this->stock > 0);
        this->stock--;
    }
};

Product& BuildProduct(){
    string barcode;
    string name;
    double price;
    int stock;

    cout << "Enter barcode: ";
    cin >> barcode;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter stock: ";
    cin >> stock;

    return Product(barcode, name, price, stock);
}

class ShopManager {
private:
    Product* setOfItems;
    unsigned int maxSize, currentSize;
public:
    ShopManager(maxSize = 10){
        assert(maxSize != 0);
        this->maxSize = maxSize;
        this->currentSize = 0;
        this->setOfItems = new Product[maxSize];
    }

    ~ShopManager(){
        delete[] this->setOfItems;
    }

    void AddItem(){
        assert(this->currentSize < this->maxSize);
        this->setOfItems[this->currentSize++] = BuildProduct();
    }

    void AddItem(const Product& productToAdd){
        assert(this->currentSize < this->maxSize);
        this->setOfItems[this->currentSize++] = productToAdd;
    }

    void DisplayAllProducts(){
        for (const Product* itterator = this->setOfItems; itterator < this->setOfItems + this->currentSize; itterator++)
            cout << itterator->display();
    }

    Product& GetProduct(unsigned int index){
        assert(index < this->currentSize);
        return this->setOfItems[index];
    }
};

int main(){
    ShopManager Merkator(3);
    unsigned int Money;

    for (unsigned int i = 0; i < 3; i++)
        Merkator.AddItem();

    // Here add a menu using a switch case statement asking the user to change how much money they have, to change item details, to buy items, to restock if needed, etc...
    return 0;
}