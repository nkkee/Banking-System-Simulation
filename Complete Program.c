#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdarg.h>

#define qname "Name of Customer: "
#define qbalance "Balance: "
#define qnumber "Phone Number: "
#define qemail "Email: "


struct customer_info
{
       char fname[15];
       char mname[30];
       char lname[20];
       double balance;
       int account_number;
       int phone_number;
       char email[30];
}; /* end structure customer_info */

/* This function creates default blank records for the bank records */
void blank_record(){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               int i; 
   FILE *rec; /* customer_info.dat file pointer */
   
   /* create customer_info with default information */
   struct customer_info customer_blank={"", "", "", 0.0, 0, 0, ""};

   /* fopen opens the file; exits if file cannot be opened */
   if((rec=fopen("customer_info.dat", "wb"))==NULL) 
   {
      printf("File could not be opened.\n");
   }
   else 
   { 
      /* output 1000 blank records to file */
      for(i= 1; i <= 1000; i++) 
      {
         fwrite(&customer_blank, 1, sizeof(struct customer_info), rec);
      }
      fclose(rec);
   }
} /* end function File_Blank_Default */

/* This function prompts the user to select one of the program's options */
int prompt()
{ 
   int i, menuChoice;
   char *prompt[5];
   
   /* preset for choosing options */
   for(i = 0; i < 6; i++)
   {
            prompt[0]=("1 - Store a formatted text file of accounts called \"accounts.txt\" for printing");
            prompt[1]=("2 - Create an account");
            prompt[2]=("3 - Update an account");
            prompt[3]=("4 - Delete an account");
            prompt[4]=("5 - View account information");
            prompt[5]=("6 - End Program");
   }
   
   printf("******************************Bank Records Program******************************\n\n");
   Sleep(500);
   printf("Please select one of the following choices:\n\n\n"); 
   Sleep(500);
   
   /* options displayed for user */
   for(i = 0; i < 6; i++)
   {
            printf(prompt[i]);
            printf("\n\n");
            Sleep(500);
   }
   /* receive choice from user */ 
   scanf("%d", &menuChoice);   
   /* return option choice chosen by user for main function execution */
   return menuChoice;
} /* end function Prompt */

/* Function to create the readable text file */
void txtfile(FILE *read_rec)
{ 
   FILE *write_rec; /* accounts.txt file pointer */
   
   /* create customer_info with default information */
   struct customer_info customer={"", "", "", 0.0, 0, 0, ""};

   /* fopen opens the file; exits if file cannot be opened */
   if (( write_rec = fopen("accounts.txt", "w")) == NULL) 
   {
      printf("File could not be opened.\n");
   } 
   else 
   { 
      rewind(read_rec); /* sets pointer to beginning of file */
      fprintf(write_rec, "%-10s%-20s%-20s%-20s%-20s%-30s%10s\n", 
         "Account #", "Last Name", "First Name", "Middle Name", 
         "Phone Number", "Email Address", "Balance");

      /* copy all records from random-access file into text file */
      while (!feof(read_rec)) 
      { 
         fread(&customer, 1, sizeof(struct customer_info), read_rec);

         /* write single record to text file */
         if (customer.account_number != 0) 
         {
            fprintf(write_rec, "%-10d%-20s%-20s%-20s%-20d%-30s%10.2f\n",
               customer.account_number, customer.lname,
               customer.fname, customer.mname, customer.phone_number,
               customer.email, customer.balance);
         } 
      } 
      fclose(write_rec); /* closes the file */
   } 
} /* end function txtfile */

/* Function to create a new record for a customer */
void new_r(FILE *edit_rec)
{
   int acc_num; /* account number */
   
   /* create customer_info with default information */
   struct customer_info customer={"", "", "", 0.0, 0, 0, ""};

   /* obtain number of account to create */
   printf("Enter new account number (1-1000): ");
   scanf("%d", &acc_num);

   /* move file pointer to correct record in file */
   fseek(edit_rec, (acc_num - 1) * sizeof(struct customer_info), SEEK_SET);

   /* read record from file */
   fread(&customer, 1, sizeof(struct customer_info), edit_rec);

   /* display error if account already exists */
   if (customer.account_number != 0) 
   {
      system("color 7C");  
      printf("Error: Account #%d already contains information.\a\a\n", customer.account_number);
      Sleep(3000);
      system("color 70");
   }
   else 
   { 
      /* create record */
      /* user enters name, balance, phone number and email */
      printf("        [Format: <First> <Middle> <Last>]\n");
      printf(qname);
      scanf("%s %s %s", customer.fname, customer.mname, customer.lname);
      printf(qbalance);
      scanf("%lf", &customer.balance);
      printf(qnumber);
      scanf("%d", &customer.phone_number);
      printf(qemail);
      scanf("%s", customer.email);
      
      /* sets structure instant to account number inputted */
      customer.account_number = acc_num;
      
      /* move file pointer to correct record in file */
      fseek(edit_rec, (customer.account_number - 1) * sizeof(struct customer_info), SEEK_SET);

      /* insert record in file */
      fwrite(&customer, 1, sizeof(struct customer_info), edit_rec);
   } 
} /* end function new */

/* Fucntion to update the current records available in the system */
void update(FILE *edit_rec)
{ 
   int i, acc_num, phone, choice;
   double transaction; 
   char email[30];
   char *credentials[2];

   /* create customer_info with default information */
   struct customer_info customer={"", "", "", 0.0, 0, 0, ""};
   
   for(i = 0; i < 3; i++)
   {
            credentials[0]=("1 - Phone Number");
            credentials[1]=("2 - Email");
            credentials[2]=("3 - Account Balance");
   }

   /* obtain number of account to update */
   printf("Enter account to update (1-1000): ");
   scanf("%d", &acc_num);

   /* move file pointer to correct record in file */
   fseek(edit_rec, (acc_num - 1) * sizeof(struct customer_info), SEEK_SET);

   /* read record from file */
   fread(&customer, 1, sizeof(struct customer_info), edit_rec);

   /* display error if account does not exist */
   if (customer.account_number == 0) 
   {
      system("color 7C");
      printf("\a\aError: Account #%d has no information.\a\a\n", acc_num);
      Sleep(3000);
      system("color 70");
   } 
   else 
   { 
     /* update record */
      printf("%-10s%-20s%-20s%-20s%-20s%-30s%10s\n", 
         "Account #", "Last Name", "First Name", "Middle Name", 
         "Phone Number", "Email Address", "Balance");
         
      printf("%-10d%-20s%-20s%-20s%-20d%-30s%10.2f\n",
               customer.account_number, customer.lname,
               customer.fname, customer.mname, customer.phone_number,
               customer.email, customer.balance);

      printf("\n\nChoose from one of the current credentials to update: \n\n");
      for(i = 0; i < 3; i++)
      {
               printf(credentials[i]);
               printf("\n");
      }
      scanf("%d", &choice);
      switch(choice)
      {
      /* update phone number */
      case 1: printf("Enter new phone number: ");
              scanf("%d", &phone);
              customer.phone_number=phone;
              break;
              
      /* update email address */
      case 2: printf("Enter new email address: ");
              scanf("%s", email);
              strcpy(customer.email, email);
              break;
                                         
      /* update record balance */        
      case 3: printf("Enter charge (+) or payment (-): ");
              scanf("%lf", &transaction);
              customer.balance+=transaction; 
              break;
      /* display message if user does not select valid choice */
      default: system("color 7C"); /* changes colour code to indicate error */
               printf("\t\t\t\a\aError: Choice not valid\a\a\n");
               Sleep(3000);
               system("cls");
               system("color 70");
               break;
      }
      printf("%-10d%-20s%-20s%-20s%-20d%-30s%10.2f\n",
               customer.account_number, customer.lname,
               customer.fname, customer.mname, customer.phone_number,
               customer.email, customer.balance);
      
      /* move file pointer to correct record in file */
      fseek(edit_rec, (acc_num - 1) * sizeof(struct customer_info), SEEK_SET);

      /* write updated record over old record in file */
      fwrite(&customer, sizeof(struct customer_info), 1, edit_rec);
   } 
} /* end function update */

/* Function for deleting a record from the system */
void delete_r(FILE *edit_rec)
{ 
   int acc_num;
   
   /* stores record read from file */
   struct customer_info customer; 
   /* create customer_info with default information */
   struct customer_info customer_blank={"", "", "", 0.0, 0, 0, ""}; 

   /* obtain number of account to delete */
   printf("Enter account number to delete ( 1 - 1000 ): ");
   scanf("%d", &acc_num);

   /* move file pointer to correct record in file */
   fseek(edit_rec, (acc_num - 1) * sizeof(struct customer_info), SEEK_SET);

   /* read record from file */
   fread(&customer, 1, sizeof(struct customer_info), edit_rec);

   /* display error if record does not exist */
   if (customer.account_number == 0) 
   {
      system("color 7C");
      printf("\a\aError: Account #%d has no information.\a\a\n", acc_num);
      Sleep(3000);
      system("color 70");
   }
   else 
   { 
     /* delete record */
      /* move file pointer to correct record in file */
      fseek(edit_rec, (acc_num - 1) * sizeof(struct customer_info), SEEK_SET);

      /* replace existing record with blank record */
      fwrite( &customer_blank, 1, sizeof(struct customer_info), edit_rec );
   }
} /* end function delete_r */

/* Function to view the current records available on the system */
void view_r(FILE *edit_rec)
{
     int acc_num;
     
     /* create customer_info with default information */
     struct customer_info customer={"", "", "", 0.0, 0, 0, ""};
     
     /* obtain number of account to view */
     printf("Enter account to view (1-1000): ");
     scanf("%d", &acc_num);

     /* move file pointer to correct record in file */
     fseek(edit_rec, (acc_num - 1) * sizeof(struct customer_info), SEEK_SET);

     /* read record from file */
     fread(&customer, 1, sizeof(struct customer_info), edit_rec);

     /* display error if account does not exist */
     if (customer.account_number == 0) 
     {
        system("color 7C");
        printf("\a\aError: Account #%d has no information.\a\a\n", acc_num);
        Sleep(3000);
        system("color 70");
     } 
     else 
     { /* view record */
        printf("%-10s%-20s%-20s%-20s%-20s%-30s%10s\n", 
         "Account #", "Last Name", "First Name", "Middle Name", 
         "Phone Number", "Email Address", "Balance");
     
       printf("%-10d%-20s%-20s%-20s%-20d%-30s%10.2f\n",
               customer.account_number, customer.lname,
               customer.fname, customer.mname, customer.phone_number,
               customer.email, customer.balance);
     }
}


int main()
{
    int choice; 
    FILE *rec; /* customer_info.dat file pointer */
    system("color 70");
    
    /* checks to see if the binary file already exists */
    if ((rec)==NULL)
    {
                    blank_record();
    }
   /* fopen opens the file; exits if file cannot be opened */
   if ((rec=fopen("customer_info.dat", "rb+"))==NULL) 
   {
      printf("\a\aError: File incapable of being opened.\a\a\n");
   } 
   else 
   {
      /* enable user to specify action */
      while ((choice=prompt())!= 6) 
      { 
         system("cls");
         switch(choice) 
         { 
            /* create text file from record file */
            case 1: txtfile(rec);
                    break;
               /* create record */
            case 2: new_r(rec);
                    break;
            /* update record */
            case 3: update(rec);
                    Sleep(20000);
                    break;
            /* delete existing record */
            case 4: delete_r(rec);
                    break;
            /* view existing record */
            case 5: view_r(rec);
                    Sleep(10000);
                    break;
            /* display message if user does not select valid choice */
            default: system("color 7C"); /* changes colour code to indicate error */
                     printf("\t\t\t\t\a\aError: Choice not valid\a\a\n");
                     Sleep(3000);
                     system("cls");
                     system("color 70");
                     break;
         }
      }
      fclose(rec); /* fclose closes the file */
   }
   return 0;
   getch();
   
} /* end main */
