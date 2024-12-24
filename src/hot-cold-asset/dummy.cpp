// PROS does not support templates that don't produce a static binary,
// so we have to force the creation of one in a way that can't cause
// any problems.
// By defining a volatile variable in an anonymous namespace, there
// won't be any funky linking errors if there is a variable with the
// same name in the project.
namespace {
volatile char dummy = 'a';
}
