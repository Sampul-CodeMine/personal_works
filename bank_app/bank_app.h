#ifndef BANK_APP_H
#define BANK_APP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Constant Lengths */
#define LEN 32

/* helper functions */
char *get_data(char *);
char *get_data_dyn(char *prompt);
int get_int_input(char *);
char get_char(char *);
int checkpassword(char *, char *);
void destory_mem(char **, char **, char **);

/* Bank App Functions */
void welcome_menu(void);
char transaction_menu(void);
void perform_transaction(char);

#endif /* BANK_APP_H */
