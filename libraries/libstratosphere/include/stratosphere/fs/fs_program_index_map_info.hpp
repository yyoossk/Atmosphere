/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <stratosphere/fs/fs_common.hpp>

namespace ams::fs {

    struct ProgramIndexMapInfo {
        ncm::ProgramId program_id;
        ncm::ProgramId base_program_id;
        u8 program_index;
        u8 pad[0xF];
    };
    static_assert(util::is_pod<ProgramIndexMapInfo>::value);
    static_assert(sizeof(ProgramIndexMapInfo) == 0x20);

}
