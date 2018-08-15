#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x38ed31a2, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc089584c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb21324fa, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x11e7612c, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4ea9fc8a, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9a396de7, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xf0c2e58d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x8a4c8f2b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6c540c96, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa17cc94, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa562e95b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf332a6f5, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf91fff33, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc81d66f1, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7664db86, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x24bad8aa, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xfa2428ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd99fafa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x226c32c1, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "533BB7E5866E52F63B9ACCB");
