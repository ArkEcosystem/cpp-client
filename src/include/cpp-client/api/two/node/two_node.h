/**
 * This file is part of Ark Cpp Client.
 *
 * (c) Ark Ecosystem <info@ark.io>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 **/

#ifndef TWO_NODE_H
#define TWO_NODE_H

#include "api/base.h"
#include "api/two/two_paths.h"

namespace Ark {
namespace Client {
namespace API {
namespace TWO {

class INode : public API::Base
{
protected:
  INode(IHTTP& http) : API::Base(http) { }

  virtual std::string configuration() = 0;
  virtual std::string status() = 0;
  virtual std::string syncing() = 0;
};

class Node : public INode {
public:
  Node(IHTTP& http) : INode(http) { }

  std::string configuration() override;
  std::string status() override;
  std::string syncing() override;
};

};
};
};
};

#endif
