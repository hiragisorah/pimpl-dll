#include "static.h"
#include <iostream>

class Static::Impl
{
	friend Static;

public:
	Impl(void);

private:
	int a_;
	int b_;
	int c_ = 4;
};

Static::Static(void)
	: impl_(std::make_unique<Impl>())
{
}

Static::~Static(void)
{
}

void Static::set_a(const int & a)
{
	this->impl_->a_ = a;
}

void Static::set_b(const int & b)
{
	this->impl_->b_ = b;
}

const int & Static::c(void) const
{
	return this->impl_->c_;
}

const int & Static::a(void) const
{
	return this->impl_->a_;
}

const int & Static::b(void) const
{
	return this->impl_->b_;
}

void Static::set_c(const int & c)
{
	this->impl_->c_ = c;
}

Static::Impl::Impl(void)
	: a_(0)
	, b_(0)
	, c_(0)
{
}
