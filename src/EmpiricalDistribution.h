/***
 * Copyright (C) 2016 Luca Weihs
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WCM_EmpiricalDistribution
#define WCM_EmpiricalDistribution

#include "RangeTree.h"
#include "RcppArmadillo.h"

class EmpiricalDistribution {
private:
  std::shared_ptr<RangeTree::RangeTree<int> > rtree;
  arma::mat samples;

public:
  EmpiricalDistribution(arma::mat samples);
  int countInRange(const std::vector<double>& lower,
                   const std::vector<double>& upper,
                   const std::vector<bool>& withLower,
                   const std::vector<bool>& withUpper) const;

  double probOfRange(const std::vector<double>& lower,
                     const std::vector<double>& upper,
                     const std::vector<bool>& withLower,
                     const std::vector<bool>& withUpper) const;
};

#endif
