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
#include <stratosphere.hpp>

namespace ams::fssrv {

    void InitializeForFileSystemProxy(fscreator::FileSystemCreatorInterfaces *fs_creator_interfaces, fssystem::IBufferManager *buffer_manager, bool is_development_function_enabled) {
        /* TODO FS-REIMPL */
        AMS_UNUSED(fs_creator_interfaces, buffer_manager, is_development_function_enabled);
    }

}
