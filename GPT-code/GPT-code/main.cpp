#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_PRODUCTS 100
#define MAX_ORDERS 100

typedef struct {
    char username[50];
    char password[50];
    int userType; // 1 for seller, 2 for buyer, 3 for admin
} User;

typedef struct {
    char productName[50];
    double price;
    int sellerIndex;
    int isAvailable;
} Product;

typedef struct {
    int productIndex;
    int buyerIndex;
} Order;

User users[MAX_USERS];
int numUsers = 0;

Product products[MAX_PRODUCTS];
int numProducts = 0;

Order orders[MAX_ORDERS];
int numOrders = 0;

void registerUser() {
    if (numUsers == MAX_USERS) {
        printf("Maximum number of users reached.\n");
        return;
    }

    User newUser;
    printf("Enter username: ");
    scanf("%s", newUser.username);

    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].username, newUser.username) == 0) {
            printf("Username already exists. Please choose a different username.\n");
            return;
        }
    }

    printf("Enter password: ");
    scanf("%s", newUser.password);

    printf("Select user type (1 for seller, 2 for buyer, 3 for admin): ");
    scanf("%d", &newUser.userType);

    users[numUsers] = newUser;
    numUsers++;

    printf("User registered successfully.\n");
}

void loginUser() {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("User logged in successfully.\n");
            return;
        }
    }

    printf("Invalid username or password.\n");
}

void logoutUser() {
    printf("User logged out successfully.\n");
}

void addProduct() {
    if (numProducts == MAX_PRODUCTS) {
        printf("Maximum number of products reached.\n");
        return;
    }

    if (users[numUsers - 1].userType != 1) {
        printf("Only sellers can add products.\n");
        return;
    }

    Product newProduct;
    newProduct.sellerIndex = numUsers - 1;

    printf("Enter product name: ");
    scanf("%s", newProduct.productName);

    printf("Enter product price: ");
    scanf("%lf", &newProduct.price);

    newProduct.isAvailable = 1;

    products[numProducts] = newProduct;
    numProducts++;

    printf("Product added successfully.\n");
}

void removeProduct() {
    char productName[50];

    printf("Enter product name: ");
    scanf("%s", productName);

    for (int i = 0; i < numProducts; i++) {
        if (strcmp(products[i].productName, productName) == 0 && products[i].isAvailable == 1 &&
            products[i].sellerIndex == (numUsers - 1) && users[numUsers - 1].userType == 1) {
            products[i].isAvailable = 0;
            printf("Product removed successfully.\n");
            return;
        }
    }

    printf("Product not found or you don't have permission to remove the product.\n");
}

void modifyProduct() {
    char productName[50];

    printf("Enter product name: ");
    scanf("%s", productName);

    for (int i = 0; i < numProducts; i++) {
        if (strcmp(products[i].productName, productName) == 0 && products[i].isAvailable == 1 &&
            products[i].sellerIndex == (numUsers - 1) && users[numUsers - 1].userType == 1) {
            printf("Enter new product name: ");
            scanf("%s", products[i].productName);

            printf("Enter new product price: ");
            scanf("%lf", &products[i].price);

            printf("Product modified successfully.\n");
            return;
        }
    }

    printf("Product not found or you don't have permission to modify the product.\n");
}

void viewPublishedProducts() {
    if (users[numUsers - 1].userType != 1) {
        printf("Only sellers can view published products.\n");
        return;
    }

    printf("Published Products:\n");
    for (int i = 0; i < numProducts; i++) {
        if (products[i].sellerIndex == (numUsers - 1) && products[i].isAvailable == 1) {
            printf("Name: %s, Price: %.2lf\n", products[i].productName, products[i].price);
        }
    }
}

void searchProduct() {
    char productName[50];

    printf("Enter product name: ");
    scanf("%s", productName);

    printf("Search Results:\n");
    for (int i = 0; i < numProducts; i++) {
        if (strcmp(products[i].productName, productName) == 0 && products[i].isAvailable == 1) {
            printf("Name: %s, Price: %.2lf\n", products[i].productName, products[i].price);
        }
    }
}

void buyProduct() {
    char productName[50];

    printf("Enter product name: ");
    scanf("%s", productName);

    for (int i = 0; i < numProducts; i++) {
        if (strcmp(products[i].productName, productName) == 0 && products[i].isAvailable == 1) {
            Order newOrder;
            newOrder.productIndex = i;
            newOrder.buyerIndex = numUsers - 1;

            orders[numOrders] = newOrder;
            numOrders++;

            printf("Product purchased successfully.\n");
            return;
        }
    }

    printf("Product not found or not available.\n");
}

void viewOrderHistory() {
    if (users[numUsers - 1].userType != 2) {
        printf("Only buyers can view order history.\n");
        return;
    }

    printf("Order History:\n");
    for (int i = 0; i < numOrders; i++) {
        if (orders[i].buyerIndex == (numUsers - 1)) {
            printf("Product Name: %s, Price: %.2lf\n", products[orders[i].productIndex].productName,
                   products[orders[i].productIndex].price);
        }
    }
}

void modifyUserInfo() {
    if (users[numUsers - 1].userType == 3) {
        printf("Admins cannot modify user information.\n");
        return;
    }

    printf("Enter new username: ");
    scanf("%s", users[numUsers - 1].username);

    printf("Enter new password: ");
    scanf("%s", users[numUsers - 1].password);

    printf("User information modified successfully.\n");
}

void removeUser() {
    if (users[numUsers - 1].userType != 3) {
        printf("Only admins can remove users.\n");
        return;
    }

    char username[50];

    printf("Enter username: ");
    scanf("%s", username);

    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].username, username) == 0) {
            for (int j = 0; j < numProducts; j++) {
                if (products[j].sellerIndex == i) {
                    products[j].isAvailable = 0;
                }
            }

            for (int j = 0; j < numOrders; j++) {
                if (orders[j].buyerIndex == i) {
                    orders[j].buyerIndex = -1;
                }
            }

            for (int j = i; j < numUsers - 1; j++) {
                users[j] = users[j + 1];
            }

            numUsers--;

            printf("User removed successfully.\n");
            return;
        }
    }

    printf("User not found or you don't have permission to remove the user.\n");
}

void saveDataToFile() {
    FILE* file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Save users
    fprintf(file, "%d\n", numUsers);
    for (int i = 0; i < numUsers; i++) {
        fprintf(file, "%s %s %d\n", users[i].username, users[i].password, users[i].userType);
    }

    // Save products
    fprintf(file, "%d\n", numProducts);
    for (int i = 0; i < numProducts; i++) {
        fprintf(file, "%s %lf %d %d\n", products[i].productName, products[i].price, products[i].sellerIndex,
                products[i].isAvailable);
    }

    // Save orders
    fprintf(file, "%d\n", numOrders);
    for (int i = 0; i < numOrders; i++) {
        fprintf(file, "%d %d\n", orders[i].productIndex, orders[i].buyerIndex);
    }

    fclose(file);

    printf("Data saved to file.\n");
}

void loadDataFromFile() {
    FILE* file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Load users
    fscanf(file, "%d", &numUsers);
    for (int i = 0; i < numUsers; i++) {
        fscanf(file, "%s %s %d", users[i].username, users[i].password, &users[i].userType);
    }

    // Load products
    fscanf(file, "%d", &numProducts);
    for (int i = 0; i < numProducts; i++) {
        fscanf(file, "%s %lf %d %d", products[i].productName, &products[i].price, &products[i].sellerIndex,
               &products[i].isAvailable);
    }

    // Load orders
    fscanf(file, "%d", &numOrders);
    for (int i = 0; i < numOrders; i++) {
        fscanf(file, "%d %d", &orders[i].productIndex, &orders[i].buyerIndex);
    }

    fclose(file);

    printf("Data loaded from file.\n");
}

int main() {
    int choice;
    int loggedIn = 0;

    loadDataFromFile();

    while (1) {
        printf("\n1. Register\n");
        printf("2. Login\n");
        printf("3. Logout\n");
        printf("4. Add Product\n");
        printf("5. Remove Product\n");
        printf("6. Modify Product\n");
        printf("7. View Published Products\n");
        printf("8. Search Product\n");
        printf("9. Buy Product\n");
        printf("10. View Order History\n");
        printf("11. Modify User Info\n");
        printf("12. Remove User\n");
        printf("13. Save Data to File\n");
        printf("14. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (loggedIn) {
                    printf("Already logged in.\n");
                } else {
                    loginUser();
                    loggedIn = 1;
                }
                break;
            case 3:
                if (!loggedIn) {
                    printf("Not logged in.\n");
                } else {
                    logoutUser();
                    loggedIn = 0;
                }
                break;
            case 4:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    addProduct();
                }
                break;
            case 5:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    removeProduct();
                }
                break;
            case 6:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    modifyProduct();
                }
                break;
            case 7:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    viewPublishedProducts();
                }
                break;
            case 8:
                searchProduct();
                break;
            case 9:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    buyProduct();
                }
                break;
            case 10:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    viewOrderHistory();
                }
                break;
            case 11:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    modifyUserInfo();
                }
                break;
            case 12:
                if (!loggedIn) {
                    printf("Please login first.\n");
                } else {
                    removeUser();
                }
                break;
            case 13:
                saveDataToFile();
                break;
            case 14:
                saveDataToFile();
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
