#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include"hzz_list.h"

void list_save_to_file(listptr l,const char *filename)
{
    FILE *fp;
    fp=fopen(filename,"wt");
    if (fp==NULL)
    {
        printf("cannot find %s",filename);
        exit(1);
    }
    nodeptr p= l->head;
    while (p!=NULL)
    {
        fprintf(fp,"%d\n",p->data);
        p=p->next;
    }
    fclose(fp);

}

void list_sort(listptr l, compare comp_f)
{
    int i, j;
    nodeptr p, q;

    for (i = 0; i < l->size - 1; ++i)
    {
        p = l->head;
        q = p->next;
        for (j = 0; j < l->size - i - 1; ++j)
        {

            if (comp_f(&p->data, &q->data) >= 0)
            { // block
                value_type t = p->data;
                p->data = q->data;
                q->data = t;
            }
            p = p->next;
            q = q->next;
        }
    }
}
