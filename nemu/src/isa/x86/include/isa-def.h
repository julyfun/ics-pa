/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#ifndef __ISA_X86_H__
#define __ISA_X86_H__

#include <common.h>

typedef struct {
  union {
    struct {
      uint32_t eax;
      uint32_t ecx;
      uint32_t edx;
      uint32_t ebx;
      uint32_t esp;
      uint32_t ebp;
      uint32_t esi;
      uint32_t edi;
    };
    union {
      uint32_t _32;
      uint16_t _16;
      uint8_t _8[2];
    } gpr[8];
  };
  word_t pc;
} x86_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} x86_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
