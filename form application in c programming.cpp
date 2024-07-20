#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100], address[200], phone[15], aadhar[20], pincode[10], state[50], country[50];
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Address: ");
    fgets(address, sizeof(address), stdin);
    printf("Enter Phone Number: ");
    fgets(phone, sizeof(phone), stdin);
    printf("Enter Aadhaar Number: ");
    fgets(aadhar, sizeof(aadhar), stdin);
    printf("Enter Pincode: ");
    fgets(pincode, sizeof(pincode), stdin);
    printf("Enter State: ");
    fgets(state, sizeof(state), stdin);
    printf("Enter Country: ");
    fgets(country, sizeof(country), stdin);

    FILE *file = fopen("userdata.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Name: %s", name);
    fprintf(file, "Address: %s", address);
    fprintf(file, "Phone Number: %s", phone);
    fprintf(file, "Aadhaar Number: %s", aadhar);
    fprintf(file, "Pincode: %s", pincode);
    fprintf(file, "State: %s", state);
    fprintf(file, "Country: %s", country);

    fclose(file);

    printf("User data has been written to userdata.txt\n");

    return 0;
}
