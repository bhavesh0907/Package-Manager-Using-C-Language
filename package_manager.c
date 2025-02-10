#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#define MAX_PACKAGES 100
struct Package {
char name[50];
bool installed; // Change 'int' to 'bool' for clarity.
};
struct PackageManager {
struct Package packages[MAX_PACKAGES]; int numPackages;
};
// Initialize the package manager
void initializePackageManager(struct PackageManager *pm) { pm->numPackages = 0;
}
// Install a package
void installPackage(struct PackageManager *pm, const char *name) 
{ 
if (pm->numPackages >= MAX_PACKAGES) {
printf("Package manager is full. Cannot install more packages.\n");
return; 
}
for (int i = 0; i < pm->numPackages; i++) {
if (strcmp(pm->packages[i].name, name) == 0) {
printf("%s is already installed.\n", name);
return; 
}
}
strcpy(pm->packages[pm->numPackages].name, name); 
pm->packages[pm->numPackages].installed = true; 
pm->numPackages++;
printf("%s has been installed.\n", name);
}
// Remove a package
void removePackage(struct PackageManager *pm, const char *name) { for (int i = 0; i < pm->numPackages; i++) {
if (strcmp(pm->packages[i].name, name) == 0) { pm->packages[i].installed = false;
printf("%s has been removed.\n", name); return;
} 
}
printf("%s is not installed.\n", name); }
// List installed packages
void listPackages(struct PackageManager *pm) 
{ 
printf("Installed packages:\n");
for (int i = 0; i < pm->numPackages; i++) {
if (pm->packages[i].installed) { printf("%s\n", pm->packages[i].name);
} 
}
}
int main() {
struct PackageManager pm; initializePackageManager(&pm);
while (1) {
printf("\nOptions:\n");
printf("1. Install Package\n"); printf("2. Remove Package\n"); printf("3. List Installed Packages\n"); printf("4. Exit\n");
int choice;
char packageName[50];
if (scanf("%d", &choice) != 1) {
printf("Invalid input. Please try again.\n");
while (fgetc(stdin) != '\n'); // Clear the input buffer. continue;
}
while (fgetc(stdin) != '\n'); // Clear the input buffer.
switch (choice) 
{ 
case 1:
printf("Enter the package name: ");
fgets(packageName, sizeof(packageName), stdin);
packageName[strcspn(packageName, "\n")] = '\0'; // Remove the newline character.
installPackage(&pm, packageName);
break; 
case 2:
printf("Enter the package name: ");
fgets(packageName, sizeof(packageName), stdin);
packageName[strcspn(packageName, "\n")] = '\0'; // Remove the newline character.
removePackage(&pm, packageName);
break; 
case 3:
listPackages(&pm);
break; 
case 4:
return 0; 
default:
printf("Invalid choice. Please try again.\n"); 
}
} 
} 
