#pragma once

#include "./detail/modifier.h"
#include "./environment.h"

NGS_BUILD_LIB_BEGIN

using details::add_const_like_t;
using details::add_volatile_like_t;
using details::add_reference_like_t;
using details::add_pointer_like_t;
using details::add_cv_like_t;
using details::add_cvref_like_t;

NGS_BUILD_LIB_END