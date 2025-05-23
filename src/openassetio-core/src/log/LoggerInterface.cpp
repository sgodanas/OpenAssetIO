// SPDX-License-Identifier: Apache-2.0
// Copyright 2022-2025 The Foundry Visionmongers Ltd
#include <openassetio/log/LoggerInterface.hpp>

#include <openassetio/export.h>
#include <openassetio/typedefs.hpp>

namespace openassetio {
inline namespace OPENASSETIO_CORE_ABI_VERSION {
namespace log {
LoggerInterface::~LoggerInterface() = default;

bool LoggerInterface::isSeverityLogged([[maybe_unused]] const Severity severity) const {
  return true;
}

void LoggerInterface::debugApi(const Str &message) { log(Severity::kDebugApi, message); }

void LoggerInterface::debug(const Str &message) { log(Severity::kDebug, message); }

void LoggerInterface::info(const Str &message) { log(Severity::kInfo, message); }

void LoggerInterface::progress(const Str &message) { log(Severity::kProgress, message); }

void LoggerInterface::warning(const Str &message) { log(Severity::kWarning, message); }

void LoggerInterface::error(const Str &message) { log(Severity::kError, message); }

void LoggerInterface::critical(const Str &message) { log(Severity::kCritical, message); }

}  // namespace log
}  // namespace OPENASSETIO_CORE_ABI_VERSION
}  // namespace openassetio
