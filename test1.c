/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// base file

// Iterative C program to reverse a linked list 
#include <stdio.h> 
#include <stdlib.h> 
 
 // -----------------------------   link list code
/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
/* Function to reverse the linked list */
static void reverse(struct Node** head_ref) 
{ 
    struct Node* prev = NULL; 
    struct Node* current = *head_ref; 
    struct Node* next = NULL; 
    while (current != NULL) { 
        // Store next 
        next = current->next; 
  
        // Reverse current node's pointer 
        current->next = prev; 
  
        // Move pointers one position ahead. 
        prev = current; 
        current = next; 
    } 
    *head_ref = prev; 
} 
  
/* Function to push a node */
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
/* Function to print linked list */
void printList(struct Node* head) 
{ 
   // struct Node* temp = head; 
    while (head != NULL) { 
        printf("%d  ", head->data); 
        head = head->next; 
    } 
} 
  
/* Driver program to test above function*/
int ll_main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
  
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 85); 
  
    printf("Given linked list\n"); 
    printList(head); 
    reverse(&head); 
    printf("\nReversed Linked list \n"); 
    printList(head); 
    getchar(); 
} 
// ----------------------------------------

void reverse_string( char * pS)
{
    int i,j,cnt=0;
     char nv[1000];
     char * np = pS;
    
    if ( pS == NULL) return;
    
    while ( *np++ !='\0')
        cnt++;
    
    printf("cnt=%d\n", cnt);
    
    for (i=0,j=cnt-1; i< cnt; i++,j--)
    nv[j]=pS[i];
    
    nv[cnt]='\0';
    
    printf ("org=%s, new=%s\n", pS, nv);
    
}

unsigned char swap_nibble(unsigned char val)
{
   unsigned char tmp;
    
   tmp=0;
   
   tmp = ((val & 0x0f) <<4) | ((val>>4) & 0xf);
   
   printf ("org=%02x, new=%02x\n", val, tmp);
   
   
}

int transpose()
{
   int rows, col, c, d, matrix[10][10], transpose[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &rows, &col);
   
   printf("Enter elements of the matrix\n");
 
   for (c = 0; c < rows; c++)
      for(d = 0; d < col; d++)
         scanf("%d", &matrix[c][d]);
 
   for (c = 0; c < rows; c++)
      for( d = 0 ; d < col ; d++ )
         transpose[d][c] = matrix[c][d];
 
   printf("Transpose of the matrix:\n");
 
   for (c = 0; c < col; c++) {
      for (d = 0; d < rows; d++)
         printf("%d\t", transpose[c][d]);
      printf("\n");
   }
 
   return 0;
}

void modula_operation()
{
    for (int i=0; i<20; i++)
    {
        
        if (!(i % 3) && !(i%5))printf("FizzBuzz\n");
        else if (!(i % 3))printf("Fizz\n");
        else if (!(i % 5))printf("Buzz\n");
        else
            printf("%d\n", i);
    }
}

void find_prime_numbers()
{
   int i,j, p;
   
    for(j=0; j < 25; j++)
    {
       p=0;
       for(i=2; i<=j; i++)
       {
          if(j%i==0)
          {
             p++;
          }
       }
       if(p==1)
       {
          printf("PRIME= %d\n",j);
       }
       else
       {
          printf("Not PRIME %d\n",j);
       }
    }
}

int main()
{

#if 0
    //printf("Hello World");
    swap_nibble(0x23);
    swap_nibble(0x2);
    swap_nibble(0x39);
    
    //reverse reverse_string
    reverse_string("123456789");
    reverse_string("KamalUddinNehal");
#endif

  //  transpose();
  //modula_operation();
  //find_prime_numbers();
  ll_main();
    return 0;
}

