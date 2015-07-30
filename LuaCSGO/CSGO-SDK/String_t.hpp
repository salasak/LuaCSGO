#pragma once

#include "Definitions.hpp"

namespace SDK {
	struct string_t {
	public:
		bool operator!() const { return (pszValue == NULL); }
		bool operator==(const string_t &rhs) const { return (pszValue == rhs.pszValue); }
		bool operator!=(const string_t &rhs) const { return (pszValue != rhs.pszValue); }
		bool operator<(const string_t &rhs) const { return ((void *)pszValue < (void *)rhs.pszValue); }

		const char *ToCStr() const { return (pszValue) ? pszValue : ""; }

	protected:
		const char *pszValue;
	};
}