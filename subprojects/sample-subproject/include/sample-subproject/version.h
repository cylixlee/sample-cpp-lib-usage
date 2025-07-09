#pragma once

namespace sample_subproject {

struct VersionTriplet {
  int major;
  int minor;
  int patch;
};

VersionTriplet get_version();

} // namespace sample_subproject