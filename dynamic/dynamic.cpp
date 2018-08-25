#include "dynamic.h"
#include <iostream>

class Dynamic::Impl
{
	friend Dynamic;

public:
	Impl(void);

private:
	int a_;
	int b_;
	int c_ = 4;
};

Dynamic::Dynamic(void)
	: impl_(std::make_unique<Impl>())
{
}

Dynamic::~Dynamic(void)
{
}

void Dynamic::set_a(const int & a)
{
	this->impl_->a_ = a;
}

void Dynamic::set_b(const int & b)
{
	this->impl_->b_ = b;
}

const int & Dynamic::c(void) const
{
	return this->impl_->c_;
}

const int & Dynamic::a(void) const
{
	return this->impl_->a_;
}

const int & Dynamic::b(void) const
{
	return this->impl_->b_;
}

void Dynamic::set_c(const int & c)
{
	this->impl_->c_ = c;
}

Dynamic::Impl::Impl(void)
	: a_(0)
	, b_(0)
	, c_(0)
{
}
