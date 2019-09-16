
// ## hyphop ## //

#include <media/rc-map.h>
#include <linux/module.h>

static struct rc_map_table krescue[] = {

	{ 0x14, KEY_POWER },

	{ 0x03, KEY_UP },
	{ 0x02, KEY_DOWN },
	{ 0x0e, KEY_LEFT },
	{ 0x1a, KEY_RIGHT },
	{ 0x07, KEY_ENTER },

	{ 0x01, KEY_ESC },
	{ 0x5b, KEY_MUTE }, // mouse
	{ 0x13, KEY_TAB },

	{ 0x0b, KEY_PAGEDOWN },
	{ 0x58, KEY_PAGEUP },

	{ 0x48, KEY_HOME },

//

	{ 0xb2dc, KEY_POWER },

	{ 0xb2ca, KEY_UP },
	{ 0xb2d2, KEY_DOWN },
	{ 0xb299, KEY_LEFT },
	{ 0xb2c1, KEY_RIGHT },
	{ 0xb2ce, KEY_ENTER },

	{ 0xb29a, KEY_ESC },
	{ 0xb288, KEY_MUTE },
	{ 0xb2c5, KEY_TAB },

	{ 0xb280, KEY_PAGEDOWN },
	{ 0xb281, KEY_PAGEUP },

	{ 0xb282, KEY_HOME },

//

	{ 0x0101, KEY_POWER },

	{ 0x0117, KEY_UP },
	{ 0x011a, KEY_DOWN },
	{ 0x0142, KEY_LEFT },
	{ 0x0141, KEY_RIGHT },
	{ 0x0115, KEY_ENTER },

	{ 0x0109, KEY_ESC },
	{ 0x0112, KEY_MUTE },
	{ 0x0143, KEY_TAB },

	{ 0x010d, KEY_PAGEDOWN },
	{ 0x0114, KEY_PAGEUP },

	{ 0x015a, KEY_HOME },

	{ 0x0100, KEY_1 },
	{ 0x0107, KEY_2 },
	{ 0x0106, KEY_3 },
	{ 0x0104, KEY_4 },
	{ 0x010b, KEY_5 },
	{ 0x010a, KEY_6 },
	{ 0x0108, KEY_7 },
	{ 0x010f, KEY_8 },
	{ 0x010e, KEY_9 },
	{ 0x0113, KEY_0 },
	{ 0x0151, KEY_BACKSPACE }




};

static struct rc_map_list krescue_map = {
	.map = {
		.scan     = krescue,
		.size     = ARRAY_SIZE(krescue),
		.rc_proto = RC_PROTO_NEC,
		.name     = RC_MAP_KHADAS,
	}
};

static int __init init_rc_map_krescue(void)
{
	return rc_map_register(&krescue_map);
}

static void __exit exit_rc_map_krescue(void)
{
	rc_map_unregister(&krescue_map);
}

module_init(init_rc_map_krescue)
module_exit(exit_rc_map_krescue)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("hyphop");
