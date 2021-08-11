#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("Dual BSD/GPL");

static int param = 1;
module_param(param, int, 0);

static int enterAtiv7(void) {
    printk(KERN_ALERT "Saudações de ihs !\n");
    return 0;
}

static void exitAtiv7(void) {
    printk(KERN_ALERT "Fatality %dx\n", param);
}

module_init(enterAtiv7);
module_exit(exitAtiv7);
