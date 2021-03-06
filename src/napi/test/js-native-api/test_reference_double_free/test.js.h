#include "lib/modules.h"

DEFINE_TEST_SCRIPT(test_reference_double_free_test_js, R"JavaScript(
'use strict';

// This test makes no assertions. It tests a fix without which it will crash
// with a double free.

const { buildType } = require('../../common');

const addon = require(`./build/${buildType}/test_reference_double_free`);

{ new addon.MyObject(true); }
{ new addon.MyObject(false); }
)JavaScript");
