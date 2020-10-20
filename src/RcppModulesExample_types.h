#include "step1.h"
#include "step2.h"

RCPP_MODULE(step1_module) {
  function("echo", &echo);

  class_<A>("A")
    .field("A", &A::a);
}

RCPP_MODULE(step2_module) {
  class_<Echo>("Echo")
  .constructor<std::string>()
  .method("get", &Echo::get)
  ;
};
