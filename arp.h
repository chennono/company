/* /adj_table/arp.h */
#ifndef _ARP_H_
#define _ARP_H_

#include "list.h"
#include <stdio.h>

struct arp_table {
    char str_vrf[32 + 1];
    char str_ip[16 + 1];
    char str_mac[16 + 1];
    char str_vid[4 + 1];
	struct list_head list;
};

int add_arp_table(FILE *infp,struct arp_table *parp,struct list_head *sarp_head);







/* body of arp.h */
#endif /* _ARP_H_ */
