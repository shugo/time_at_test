#include "ruby.h"

static VALUE
time_at_test(VALUE self)
{
    return rb_funcall(rb_cTime, rb_intern("at"), 2, INT2NUM(1637809696), INT2NUM(0));
}

void Init_time_at_test()
{
    rb_define_global_function("time_at_test", time_at_test, 0);
}
