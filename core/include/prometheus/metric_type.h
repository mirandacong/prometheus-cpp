#pragma once

#include "prometheus/core_export.h"

namespace prometheus {

enum class PROMETHEUS_CPP_CORE_EXPORT MetricType {
  Counter,
  Gauge,
  Summary,
  Untyped,
  Histogram,
};

}  // namespace prometheus
