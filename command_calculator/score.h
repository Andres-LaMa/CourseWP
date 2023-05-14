#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "library/llist_char/llist_char.h"
#include "library/llist_num/llist_num.h"
#include "library/ssll_char/ssll_char.h"
#include "library/ssll_num/ssll_num.h"

double score(char* s);

int add_stack_sums(char* s, n_stack* num, c_stack* ops);

void score_stack(n_stack* num, c_stack* ops);

void priority(n_stack* num, c_stack* ops);

int add_ops_stack(char s, c_stack* ops, int signal);