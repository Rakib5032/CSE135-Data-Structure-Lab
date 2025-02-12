// Implemented by Bangi coders (Rakib, Rachin, Tanvir)

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int itemCount = 0;
int elementPosition;
float totalPrice = 0;
struct list
{
    char name[100];
    float price;
    struct list *next;
} *Monitor, *MotherBoard, *Processor, *PowerSupply, *GraphicsCard, *Casing, *TotalItem, *position;

struct pcBuild
{
    char itemName[100];
    float price;
    struct pcBuild *next;
};

struct customerInfo
{
    char name[100];
} CustomerInfo;

void powerSupplyList()
{
    struct list *ps1, *ps2, *ps3, *ps4;
    ps1 = (struct list *)malloc(sizeof(struct list));
    ps2 = (struct list *)malloc(sizeof(struct list));
    ps3 = (struct list *)malloc(sizeof(struct list));
    ps4 = (struct list *)malloc(sizeof(struct list));

    strcpy(ps1->name, "[1]\tAntec HCG1000  Watt Power Supply\t-----\tPrice: 1800 tk");
    ps1->price = 1800.00;
    ps1->next = ps2;

    strcpy(ps2->name, "[2]\tCooler Master E400w Power Supply\t-----\tPrice: 3500  tk");
    ps2->price = 3500.00;
    ps2->next = ps3;

    strcpy(ps3->name, "[3]\tGam Kratos E600W RG Power Supply\t-----\tPrice: 4400  tk");
    ps3->price = 4400.00;
    ps3->next = ps4;

    strcpy(ps4->name, "[4]\tASUS ROG THOR 85P 80Power Supply\t-----\tPrice: 2400 tk");
    ps4->price = 2400.00;
    ps4->next = NULL;

    PowerSupply = ps1;
}

void processorList()
{
    struct list *p1, *p2, *p3, *p4;
    p1 = (struct list *)malloc(sizeof(struct list));
    p2 = (struct list *)malloc(sizeof(struct list));
    p3 = (struct list *)malloc(sizeof(struct list));
    p4 = (struct list *)malloc(sizeof(struct list));

    strcpy(p1->name, "[1]\tIntel 12th Gen Core i9 Processor\t-----\tPrice: 67000 tk");
    p1->price = 67000.00;
    p1->next = p2;

    strcpy(p2->name, "[2]\tIntel 10th Gen Core i3 Processor\t-----\tPrice: 11500 tk");
    p2->price = 11500.00;
    p2->next = p3;

    strcpy(p3->name, "[3]\tAMD Ryzen 3Processor with Radeon\t-----\tPrice: 16800 tk");
    p3->price = 16800.00;
    p3->next = p4;

    strcpy(p4->name, "[4]\tAMD Ryzen 3 Pro RX4100 Processor\t-----\tPrice: 10700 tk");
    p4->price = 10700.00;
    p4->next = NULL;

    Processor = p1;
}

void monitorList()
{
    struct list *m1, *m2, *m3, *m4;
    m1 = (struct list *)malloc(sizeof(struct list));
    m2 = (struct list *)malloc(sizeof(struct list));
    m3 = (struct list *)malloc(sizeof(struct list));
    m4 = (struct list *)malloc(sizeof(struct list));

    strcpy(m1->name, "[1]\tAcer EB192Q 18.5 Inch HD Monitor\t-----\t Price: 9000  tk");
    m1->price = 9000.00;
    m1->next = m2;

    strcpy(m2->name, "[2]\tHP V19125QR 18.5 Inch HD Monitor\t-----\t Price: 14000 tk");
    m2->price = 14000.00;
    m2->next = m3;

    strcpy(m3->name, "[3]\tDell E2016HVNV 19.5' LED Monitor\t-----\t Price: 12000 tk");
    m3->price = 12000.00;
    m3->next = m4;

    strcpy(m4->name, "[4]\tPHILIPS 241V8 24'IPS FHD Monitor\t-----\t Price: 19700 tk");
    m4->price = 19700.00;
    m4->next = NULL;

    Monitor = m1;
}

void motherBoardList()
{
    struct list *mb1, *mb2, *mb3, *mb4;
    mb1 = (struct list *)malloc(sizeof(struct list));
    mb2 = (struct list *)malloc(sizeof(struct list));
    mb3 = (struct list *)malloc(sizeof(struct list));
    mb4 = (struct list *)malloc(sizeof(struct list));

    strcpy(mb1->name, "[1]\tMSI A320M-A Pro AMD Motherboard\t\t-----\tPrice: 6200  tk");
    mb1->price = 6200.00;
    mb1->next = mb2;

    strcpy(mb2->name, "[2]\tGigabyte GA-H81M-S2 Motherboard\t\t-----\tPrice: 7900  tk");
    mb2->price = 7900.00;
    mb2->next = mb3;

    strcpy(mb3->name, "[3]\tGigabyte B6 12thGen Motherboard\t\t-----\tPrice: 20500 tk");
    mb3->price = 20500.00;
    mb3->next = mb4;

    strcpy(mb4->name, "[4]\tASUS ROG42 12th Gen Motherboard\t\t-----\tPrice: 29000 tk");
    mb4->price = 29000.00;
    mb4->next = NULL;

    MotherBoard = mb1;
}

void casingList()
{
    struct list *c1, *c2, *c3, *c4;
    c1 = (struct list *)malloc(sizeof(struct list));
    c2 = (struct list *)malloc(sizeof(struct list));
    c3 = (struct list *)malloc(sizeof(struct list));
    c4 = (struct list *)malloc(sizeof(struct list));

    strcpy(c1->name, "[1]\tMaxGreen A363BK ATSX 5S04 Casing\t-----\tPrice: 5400  tk");
    c1->price = 5400.00;
    c1->next = c2;

    strcpy(c2->name, "[2]\tMaxGreen G563BL Window AX Casing\t-----\tPrice: 4000  tk");
    c2->price = 4000.00;
    c2->next = c3;

    strcpy(c3->name, "[3]\tCorsair 60X RGB ATX Smart Casing\t-----\tPrice: 24500 tk");
    c3->price = 24500.00;
    c3->next = c4;

    strcpy(c4->name, "[4]\tAMD Ryzen 3 Pro 4350 Star Casing\t-----\tPrice: 34200 tk");
    c4->price = 34200.00;
    c4->next = NULL;

    Casing = c1;
}

void graphicsList()
{
    struct list *g1, *g2, *g3, *g4;
    g1 = (struct list *)malloc(sizeof(struct list));
    g2 = (struct list *)malloc(sizeof(struct list));
    g3 = (struct list *)malloc(sizeof(struct list));
    g4 = (struct list *)malloc(sizeof(struct list));

    strcpy(g1->name, "[1]\tGForce G730K  2GB Graphics Card\t\t-----\tPrice: 7050  tk");
    g1->price = 7050.00;
    g1->next = g2;

    strcpy(g2->name, "[2]\tGeForce 1050T 4GB Graphics Card\t\t-----\tPrice: 22500 tk");
    g2->price = 22500.00;
    g2->next = g3;

    strcpy(g3->name, "[3]\tPaGeForce RTX 8GB Graphics Card\t\t-----\tPrice: 41900 tk");
    g3->price = 41900.00;
    g3->next = g4;

    strcpy(g4->name, "[4]\tGigabyte RTX 12 GBGraphics Card\t\t-----\tPrice: 58000 tk");
    g4->price = 58000.00;
    g4->next = NULL;

    GraphicsCard = g1;
}

// Function to List out all the products
void productListing();

// Function to back main
void backMain()
{
    productListing();
}

void printInfo()
{
    printf("\n\t\t\t===================== ** Bangi PC Building Solution ** =====================");
    printf("\n\t\t\t===================== ** User Name : %s\n\n", CustomerInfo.name);
}

void totalPriceCount()
{
    totalPrice = 0;
    struct list *temp;
    temp = TotalItem;
    while (temp != NULL)
    {
        totalPrice += temp->price;
        temp = temp->next;
    }
}

// Function to display the list item
void displayItem(struct list *p)
{
    list *temp;
    temp = p;
    printf("\n");
    while (temp != NULL)
    {
        printf("%s \n", temp->name);
        temp = temp->next;
    }
    printf("\n_____________________________________\n\n");
}

// Function to display the cart item
void displayTotalItem()
{
    system("cls");
    printInfo();
    totalPriceCount();
    printf("\nSelect Case 8\n\n");
    if (itemCount >= 1)
    {
        printf("It's Your Build: \n");
        int i = 1;
        struct list *temp = TotalItem;
        while (temp != NULL)
        {
            printf("%d  %s\n", i++, temp->name);
            temp = temp->next;
        }
        printf("\n  =============================================================================================== ");
        printf("\n\tTotal Product: %d", itemCount);
        printf("\t\t\t\t\t\t  Total Price: %.2f", totalPrice);
    }
    else
    {
        printf("\n No Product Selected Yet to View your Build. Please Select Product\n");
        productListing();
    }
}

void addItem(struct list *nodeItem)
{
    if (itemCount == 1)
    {
        TotalItem = (struct list *)malloc(sizeof(list));
        strcpy(TotalItem->name, nodeItem->name);
        TotalItem->price = nodeItem->price;
        TotalItem->next = NULL;
        position = TotalItem;
        processorList();
    }
    else
    {
        struct list *temp;
        temp = (struct list *)malloc(sizeof(list));
        strcpy(temp->name, nodeItem->name);
        temp->price = nodeItem->price;
        temp->next = NULL;
        position->next = temp;
        position = temp;
    }
    printf("\n Successfully Added! %s\n", nodeItem->name);
}

void searchItem(int itemNum, struct list *itemNode)
{
    list *temp;
    temp = itemNode;

    while (--itemNum)
        temp = temp->next;
    addItem(temp);
}

// Function to choose monitor
void chooseMonitor()
{
    system("cls");
    printInfo();

choiceMonitor:
    printf("\n--> Choose a Monitor From Here: [1/2/3/4] or 10 to back main\n");
    displayItem(Monitor);
    int itemNum;
    scanf("%d", &itemNum);
    if (itemNum == 10)
        productListing();

    if (itemNum >= 1 && itemNum <= 4)
    {
        itemCount++;
        searchItem(itemNum, Monitor);
        productListing();
    }
    else
    {
        printf("\n\t You Press Wrong Key. ");
        printf("\n\t Try Again\n\n");
        goto choiceMonitor;
    }
}

// Function to choose Mother Board
void chooseMotherBoard()
{
    system("cls");
    printInfo();

chooseMotherBoard:
    printf("\n Choose a Mother Board From Here: [1/2/3/4] or 10 to back main\n");
    displayItem(MotherBoard);
    int itemNum;
    if (itemNum == 10)
        productListing();
    scanf("%d", &itemNum);
    if (itemNum >= 1 && itemNum <= 4)
    {
        itemCount++;
        searchItem(itemNum, MotherBoard);
        productListing();
    }
    else
    {
        printf("\n\t You Press Wrong Key. ");
        printf("\n\t Try Again\n\n");
        goto chooseMotherBoard;
    }
}

// Function to choose Casing
void chooseCasing()
{
    system("cls");
    printInfo();

chooseCasing:
    printf("\n Choose a Casing From Here: [1/2/3/4] or 10 to back main\n");
    displayItem(Casing);
    int itemNum;
    scanf("%d", &itemNum);
    if (itemNum == 10)
        productListing();
    if (itemNum >= 1 && itemNum <= 4)
    {
        itemCount++;
        searchItem(itemNum, Casing);
        productListing();
    }
    else
    {
        printf("\n\t You Press Wrong Key. ");
        printf("\n\t Try Again\n\n");
        goto chooseCasing;
    }
}

// Function to choose Power Supply
void choosePowerSupply()
{
    system("cls");
    printInfo();

choosePowerSupply:
    printf("\n Choose a Power Supply From Here: [1/2/3/4] or 10 to back main\n");
    displayItem(PowerSupply);
    int itemNum;
    scanf("%d", &itemNum);
    if (itemNum == 10)
        productListing();
    if (itemNum >= 1 && itemNum <= 4)
    {
        itemCount++;
        searchItem(itemNum, PowerSupply);
        productListing();
    }
    else
    {
        printf("\n\t You Press Wrong Key. ");
        printf("\n\t Try Again\n\n");
        goto choosePowerSupply;
    }
}

// Function to add Graphics Card
void chooseGraphicsCard()
{
    system("cls");
    printInfo();

chooseGraphicsCard:
    printf("\n Choose a Graphics Card From Here: [1/2/3/4] or 10 to back main\n");
    displayItem(GraphicsCard);
    int itemNum;
    scanf("%d", &itemNum);
    if (itemNum == 10)
        productListing();
    if (itemNum >= 1 && itemNum <= 4)
    {
        itemCount++;
        searchItem(itemNum, GraphicsCard);
        productListing();
    }
    else
    {
        printf("\n\t You Press Wrong Key. ");
        printf("\n\t Try Again\n\n");
        goto chooseGraphicsCard;
    }
}

// Function to Choose processor
void chooseProcessor()
{
    system("cls");
    printInfo();

chooseProcessor:
    printf("\n Choose a Processor From Here: [1/2/3/4] or 10 to back main\n");
    displayItem(Processor);
    int itemNum;
    scanf("%d", &itemNum);
    if (itemNum == 10)
        productListing();
    if (itemNum >= 1 && itemNum <= 4)
    {
        itemCount++;
        searchItem(itemNum, Processor);
        productListing();
    }
    else
    {
        printf("\n\t You Press Wrong Key. ");
        printf("\n\t Try Again\n\n");
        goto chooseProcessor;
    }
}


void saveAsFile() {
    FILE *fptr;
    char customerName[100];

    // Copy name safely and remove newline
    strncpy(customerName, CustomerInfo.name, sizeof(customerName) - 1);
    customerName[strcspn(customerName, "\n")] = 0;  // Remove newline if exists

    // Append ".txt" extension
    strcat(customerName, ".txt");

    // Open file in write mode
    fptr = fopen(customerName, "w");
    if (fptr == NULL) {
        printf("Error: Could not create file '%s'\n", customerName);
        perror("fopen");  // Print system error
        return;
    }

    fprintf(fptr, "\n\t\t\t===================== ** // Bangi PC Building Solution ** =====================");
    fprintf(fptr, "\n\n\t\t\t\t\t\t Customer Name: %s\n\n", CustomerInfo.name);

    // Write product list
    struct list *temp = TotalItem;
    while (temp != NULL) {
        fprintf(fptr, "\n%s", temp->name);
        temp = temp->next;
    }

    totalPriceCount();
    fprintf(fptr, "\n-----------------------------------------------------------------------");
    fprintf(fptr, "\nNumber of total items: %d", itemCount);
    fprintf(fptr, "\nTotal price: %.2f\n", totalPrice);

    // Close file
    fclose(fptr);
    printf("\nSuccessfully saved the product list in '%s'\n", customerName);
    productListing();
}


void deleteSelectedItem()
{
    system("cls");
    printInfo();
    displayTotalItem();
    if (itemCount >= 1)
    {
        printf("\n\nEnter the element position to delete : or -1 to back main\n");
        scanf("%d", &elementPosition);

        /* Invalid delete position */
        if (elementPosition <= 0 || elementPosition > itemCount)
        {
            printf("Invalid position! Please enter position between 1 to %d", itemCount);
            deleteSelectedItem();
        }
        else if (elementPosition <= itemCount)
        {
            if (elementPosition == 1 && itemCount == 1)
            {
                free(TotalItem);
            }
            else if (elementPosition == 1)
            {
                struct list *temp;
                temp = TotalItem;
                TotalItem = TotalItem->next;
                free(temp);
            }

            else if (elementPosition == itemCount)
            {
                printf("YEs\n");
                struct list *temp, *previous;
                temp = TotalItem;
                while (--elementPosition)
                {
                    previous = temp;
                    temp = temp->next;
                }
                previous->next = NULL;
                position = previous;
                free(temp);
            }
            else
            {
                struct list *temp, *previous;
                temp = TotalItem;
                while (--elementPosition)
                {
                    previous = temp;
                    temp = temp->next;
                }
                previous->next = temp->next;
                free(temp);
            }
            itemCount--;

            /* Decrement array size by 1 */
            printf("Deleted Successfully!\t Product Serial No ----\t>%d", elementPosition);
        }
        else
        {
            printf("Invalid Option. Choose the right option\n");
            deleteSelectedItem();
        }

    }
    else
    {
        printf("You Have Nothing to Delete. Select Your Product");
        productListing();
    }
}

void productListing()
{
    int chooseProduct;
    printf("\n\n Choose Your Option From Here: [1/2/3/4/5/6/7/8/9/0]");
    printf("\n  [1]  -- Monitor");
    printf("\n  [2]  -- Mother Board");
    printf("\n  [3]  -- Casing");
    printf("\n  [4]  -- Graphics Card");
    printf("\n  [5]  -- Processor");
    printf("\n  [6]  -- Power Supply");
    printf("\n  [7]  -- Delete selected item");
    printf("\n  [8]  -- View Your Build With Price");
    printf("\n  [9]  -- Save As file");
    printf("\n  [0]  -- Exit the Program");
    printf("\n Your Choose is: ");

    scanf("%d", &chooseProduct);
    switch (chooseProduct)
    {
    case 1:
    {
        printf("\n Select Case 1");
        chooseMonitor();
        break;
    }
    case 2:
    {
        printf("\n Select Case 2");
        chooseMotherBoard();
        break;
    }
    case 3:
    {
        printf("\n Select Case 3");
        chooseCasing();
        break;
    }
    case 4:
    {
        printf("\nSelect Case 4");
        chooseGraphicsCard();
        break;
    }
    case 5:
    {
        printf("\nSelect Case 5");
        chooseProcessor();
        break;
    }
    case 6:
    {
        printf("Select Case 6");
        choosePowerSupply();
        break;
    }
    case 7:
    {
        deleteSelectedItem();
        productListing();
        break;
    }
    case 8:
    {
        displayTotalItem();
        productListing();
        break;
    }

    case 9:
    {
        saveAsFile();
        printf("Working\n");
        break;
    }

    case 0:
    {
        printf("\nEnding the Program. Thanks for choosing Bangi PC Building Solution.See You Later.  \n\n");
        exit(0);
    }
    default:
    {
        printf("\nInvalid Choice. Select From the option\n");
        productListing();
    }
    }
}

int main()
{
    printf("\n\t\t\t===================== ** // Bangi PC Building Solution ** =====================");
    printf("\n\n Enter Your Name: ");
    // fgets(CustomerInfo.name, sizeof(CustomerInfo.name), stdin);
    gets(CustomerInfo.name);
    printf("\n\n");
    monitorList();
    motherBoardList();
    graphicsList();
    casingList();
    powerSupplyList();
    processorList();
    productListing();

    return 0;
}
