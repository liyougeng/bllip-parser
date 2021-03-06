/*
 * Copyright 1999, 2005 Brown University, Providence, RI.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.  You may obtain
 * a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef FBINARYARRAY_H
#define FBINARYARRAY_H

#include <iostream>
#include <fstream>

class Feat;
class FeatureTree;

class FBinaryArray
{
 public:
  FBinaryArray() : size_(0) {}
  void set(int sz);
  Feat*   find(const int id) const;
  int     size() const { return size_; }
  Feat*   index(int i);
  int size_;
  Feat* array_;
};

class FTreeBinaryArray
{
 public:
  FTreeBinaryArray() : size_(0) {}
  void set(int sz);
  FeatureTree*   find(const int id) const;
  int     size() const { return size_; }
  FeatureTree*   index(int i);
  int size_;
  FeatureTree* array_;
};

#endif /* ! FBINARYARRAY_H */
