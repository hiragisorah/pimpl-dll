#pragma once

#include <memory>

class Static
{
public:
	Static(void);
	Static(Static const&) = delete;
	Static& operator= (Static const&) = delete;

	virtual ~Static(void);

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