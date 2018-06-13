#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <linux/module.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/delay.h>

struct bd_info{
    unsigned long long avg_read_latency;
    unsigned long long avg_write_latency;
    unsigned read_num;
    unsigned write_num;
    unsigned request_num;
    unsigned remote_request_num;
};

void add_request(void);

void add_remote_request(void);

void add_latency(unsigned long long latency, int write);

void clear_info(void);

int write_to_file(void); 

void write_info(void);

#endif