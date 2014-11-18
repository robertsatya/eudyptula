#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int init_module(void)
{
	pr_debug("Hello World!");
	return 0;
}

void cleanup_module(void)
{

}
