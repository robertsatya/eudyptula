#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init init_mod(void)
{
	pr_debug("Hello World!");
	return 0;
}

static void __exit clean_mod(void)
{

}

module_init(init_mod);
module_exit(clean_mod);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harsha <robertsatya@gmail.com>");
MODULE_DESCRIPTION("Task 01, Eudyptula");
