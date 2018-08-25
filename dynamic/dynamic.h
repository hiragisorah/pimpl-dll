#pragma once

#ifdef _DYNAMIC_EXPORTS_
#define _DYNAMIC_API_ __declspec(dllexport) 
#else
#define _DYNAMIC_API_ __declspec(dllimport) 
#endif

#include <memory>

//warning C4251‚É‚Â‚¢‚Ä
//https://social.msdn.microsoft.com/Forums/ja-JP/c20b6c84-0489-485f-a1bc-d7140ec6c683/warning-c425112395123881235612390
#pragma warning(disable: 4251)

class _DYNAMIC_API_ Dynamic
{
public:
	Dynamic(void);
	Dynamic(Dynamic const&) = delete;
	Dynamic& operator= (Dynamic const&) = delete;

	virtual ~Dynamic(void);

public:
	void set_c(const int & c);
	void set_a(const int & a);
	void set_b(const int & b);
	const int & c(void) const;
	const int & a(void) const;
	const int & b(void) const;

private:
	class Impl;

	std::unique_ptr<Impl> impl_;
};