#include <string>
const char* tf_git_version() {return "unknown";}
const char* tf_compiler_version() {return __VERSION__;}
const int tf_cxx11_abi_flag() {
#ifdef _GLIBCXX_USE_CXX11_ABI
  return _GLIBCXX_USE_CXX11_ABI;
#else
  return 0;
#endif
}
const int tf_monolithic_build() {
#ifdef TENSORFLOW_MONOLITHIC_BUILD
  return 1;
#else
  return 0;
#endif
}
