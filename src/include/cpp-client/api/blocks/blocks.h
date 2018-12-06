/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef BLOCKS_H
#define BLOCKS_H

#include "api/base.h"
#include "api/paths.h"

#include <map>
#include <string>

namespace Ark {
namespace Client {
namespace API {

class Blocks : public API::Base
{
  public:
    Blocks(HTTP& http) : API::Base(http) { }

    std::string get(const char *const blockId);
    std::string all(int limit = 5, int page = 1);
    std::string transactions(const char *const blockId);
    std::string search(const std::map<std::string, std::string>& bodyParameters, int limit = 5, int page = 1);
};

};
};
};

#endif