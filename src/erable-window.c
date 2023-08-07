/* erable-window.c
 *
 * Copyright 2023 Andrew Lee
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
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "config.h"

#include "erable-window.h"

struct _ErableWindow
{
	AdwApplicationWindow  parent_instance;

	/* Template widgets */
	GtkHeaderBar        *header_bar;
	GtkButton           *play_button;
        GtkButton           *browse_button;
};

G_DEFINE_FINAL_TYPE (ErableWindow, erable_window, ADW_TYPE_APPLICATION_WINDOW)

static void
erable_window_class_init (ErableWindowClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class, "/me/alee14/erable/erable-window.ui");
	gtk_widget_class_bind_template_child (widget_class, ErableWindow, header_bar);
	gtk_widget_class_bind_template_child (widget_class, ErableWindow, play_button);
        gtk_widget_class_bind_template_child (widget_class, ErableWindow, browse_button);
}

static void
erable_window_init (ErableWindow *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}
