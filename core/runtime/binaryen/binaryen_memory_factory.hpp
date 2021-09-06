/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef KAGOME_BINARYEN_WASM_MEMORY_FACTORY_HPP
#define KAGOME_BINARYEN_WASM_MEMORY_FACTORY_HPP

#include "runtime/binaryen/memory_impl.hpp"

namespace kagome::runtime::binaryen {

  class BinaryenMemoryFactory {
   public:
    virtual ~BinaryenMemoryFactory() = default;

    virtual std::unique_ptr<MemoryImpl> make(
        wasm::ShellExternalInterface::Memory *memory, WasmSize heap_base) const;
  };

}  // namespace kagome::runtime::binaryen

#endif  // KAGOME_BINARYEN_WASM_MEMORY_FACTORY_HPP