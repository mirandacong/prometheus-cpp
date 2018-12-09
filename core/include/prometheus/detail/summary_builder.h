#pragma once

#include <map>
#include <string>

#include "prometheus/core_export.h"

namespace prometheus {

template <typename T>
class Family;
class Summary;
class Registry;

namespace detail {

class PROMETHEUS_CPP_CORE_EXPORT SummaryBuilder {
 public:
  SummaryBuilder& Labels(const std::map<std::string, std::string>& labels);
  SummaryBuilder& Name(const std::string&);
  SummaryBuilder& Help(const std::string&);
  Family<Summary>& Register(Registry&);

 private:
  std::map<std::string, std::string> labels_;
  std::string name_;
  std::string help_;
};

}  // namespace detail
}  // namespace prometheus
