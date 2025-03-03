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
#include <vapours.hpp>
#include <stratosphere/erpt/erpt_types.hpp>

#define AMS_ERPT_I_ATTACHMENT_INTERFACE_INFO(C, H)                                                                                                     \
    AMS_SF_METHOD_INFO(C, H,  0, Result, Open,     (const erpt::AttachmentId &attachment_id),                                 (attachment_id))         \
    AMS_SF_METHOD_INFO(C, H,  1, Result, Read,     (ams::sf::Out<u32> out_count, const ams::sf::OutBuffer &out_buffer),       (out_count, out_buffer)) \
    AMS_SF_METHOD_INFO(C, H,  2, Result, SetFlags, (erpt::AttachmentFlagSet flags),                                           (flags))                 \
    AMS_SF_METHOD_INFO(C, H,  3, Result, GetFlags, (ams::sf::Out<erpt::AttachmentFlagSet> out),                               (out))                   \
    AMS_SF_METHOD_INFO(C, H,  4, Result, Close,    (),                                                                        ())                      \
    AMS_SF_METHOD_INFO(C, H,  5, Result, GetSize,  (ams::sf::Out<s64> out),                                                   (out))

AMS_SF_DEFINE_INTERFACE(ams::erpt::sf, IAttachment, AMS_ERPT_I_ATTACHMENT_INTERFACE_INFO)