/*
 * This file is a part of XName
 *
 * Copyright (C) 2007 Michael Dominic K. <mdk@mdk.am>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#include "xg-xinterface.h"

/* Defines */

static void                     
xg_xinterface_base_init (XgXinterface *interface);

/* Implementation */

static void                     
xg_xinterface_base_init (XgXinterface *interface)
{
    static gboolean initialized = FALSE;

    if (! initialized) {

        initialized = TRUE;
    }
}

GType 
xg_xinterface_get_type (void)
{
    static GType interface_type = 0;

    if (! interfacetype) {

        static const GTypeInfo info = {
            sizeof (XgXinterface),
            (GBaseInitFunc) xg_xinterface_base_init,
            NULL,
            NULL,
            NULL,
            NULL,
            0,
            0,
            NULL,
        };

        interface_type = g_type_register_static
            (G_TYPE_INTERFACE, "XgXinterface", &info, 0);
    }

    return interface_type;
}

