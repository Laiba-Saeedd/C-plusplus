#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 100;

// Structure to represent an item in the inventory
struct InventoryItem {
    string name;
    int quantity;
};

// Function 
void addItem(InventoryItem inventory[], int& itemCount);
void removeItem(InventoryItem inventory[], int& itemCount);
void updateItem(InventoryItem inventory[], int itemCount);
void generateReport(const InventoryItem inventory[], int itemCount);

int main() {
    InventoryItem inventory[MAX_ITEMS];
    int itemCount = 0;
    int choice;

    do {
        cout << "\nInventory Management System Menu:" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Remove Item" << endl;
        cout << "3. Update Item Quantity" << endl;
        cout << "4. Generate Inventory Report" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addItem(inventory, itemCount);
                break;
            case 2:
                removeItem(inventory, itemCount);
                break;
            case 3:
                updateItem(inventory, itemCount);
                break;
            case 4:
                generateReport(inventory, itemCount);
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

// Function to add an item to the inventory
void addItem(InventoryItem inventory[], int& itemCount) {
    if (itemCount < MAX_ITEMS) {
        cout << "Enter item name: ";
        cin >> inventory[itemCount].name;

        cout << "Enter quantity: ";
        cin >> inventory[itemCount].quantity;

        itemCount++;
        cout << "Item added to inventory." << endl;
    } else {
        cout << "Inventory is full. Cannot add more items." << endl;
    }
}

// Function to remove an item from the inventory
void removeItem(InventoryItem inventory[], int& itemCount) {
    string itemName;
    bool found = false;

    cout << "Enter item name to remove: ";
    cin >> itemName;

    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].name == itemName) {
            for (int j = i; j < itemCount - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            found = true;
            itemCount--;
            cout << "Item removed from inventory." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Item not found in inventory." << endl;
    }
}

// Function to update the quantity of an item in the inventory
void updateItem(InventoryItem inventory[], int itemCount) {
    string itemName;
    int newQuantity;
    bool found = false;

    cout << "Enter item name to update: ";
    cin >> itemName;

    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].name == itemName) {
            cout << "Enter new quantity: ";
            cin >> newQuantity;
            inventory[i].quantity = newQuantity;
            found = true;
            cout << "Item quantity updated." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Item not found in inventory." << endl;
    }
}

// Function to generate and display inventory report
void generateReport(const InventoryItem inventory[], int itemCount) {
    cout << "Inventory Report:" << endl;
    for (int i = 0; i < itemCount; i++) {
        cout << inventory[i].name << ": " << inventory[i].quantity << endl;
    }
}

