#ifndef KROLL_NATIVES_H
#define KROLL_NATIVES_H

#include <stdint.h>

namespace titanium {

	const char ${id}_native[] = { ${data} };

	struct _native {
		const char* name;
		const char* source;
		size_t source_length;
	};

	static const struct _native natives[] = {

		{ "${id}", ${id}_native, sizeof(${id}_native) - 1 },

		{ NULL, NULL, 0 } /* sentinel */

	};

}
#endif
