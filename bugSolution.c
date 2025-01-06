int main() {    int *ptr = (int *)malloc(sizeof(int)); // Dynamically allocate memory
    if (ptr == NULL) { //Always check for memory allocation errors
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    *ptr = 20;
    printf("%d\n", *ptr); // Output: 20
    free(ptr); // Correctly deallocates dynamically allocated memory
    ptr = NULL; // Good practice to set pointer to NULL after freeing
    return 0; 
} 