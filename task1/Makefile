obj-m += hello.o

KERNEL_SOURCE := /lib/modules/$(shell uname -r)/build

all:
	make -C $(KERNEL_SOURCE) M=$(PWD) modules

clean:
	make -C $(KERNEL_SOOURCE) M=$(PWD) clean
