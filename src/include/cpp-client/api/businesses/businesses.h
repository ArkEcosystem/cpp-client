/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef BUSINESSES_H
#define BUSINESSES_H

#include <map>
#include <string>

#include "api/base.h"
#include "api/paths.h"

namespace Ark {
namespace Client {
namespace api {  // NOLINT

class IBusinesses : public Base {
 public:
  virtual ~IBusinesses() {}
  virtual std::string get(const char* const businessId) = 0;
  virtual std::string all(const char* const query) = 0;
  virtual std::string bridgechains(const char* const businessId, const char* const query) = 0;
  virtual std::string search(const std::map<std::string, std::string>& bodyParameters, const char* const query) = 0;

 protected:
  IBusinesses(Host& host, IHTTP& http) : Base(host, http) {}
};

/**/

class Businesses : public IBusinesses { 
 public:
  Businesses(Host& host, IHTTP& http) : IBusinesses(host, http) {}

  std::string get(const char* const businessId) override;
  std::string all(const char* const query) override;
  std::string bridgechains(const char* const businessId, const char* const query) override;
  std::string search(const std::map<std::string, std::string>& bodyParameters, const char* const query) override;
};

}  // namespace api
}  // namespace Client
}  // namespace Ark

#endif
