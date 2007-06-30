/*  OpenDAX - An open source data acquisition and control system 
 *  Copyright (c) 2007 Phil Birkelbach
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */


#ifndef __FUNC_H
#define __FUNC_H

/* Memory management functions.  These are just to override the
 * standard memory management functions in case I decide to do
 * something createive with them later. */


void *xmalloc(size_t);
void *xrealloc(void *, size_t);
void *xcalloc(size_t, size_t);

/* Error handling and logging functions */

void xfatal(const char *,...);
void xerror(const char *,...);
void xnotice(const char *,...);
void setverbosity(int);
void xlog(int,const char *,...);

/* Portability functions */

char *xstrcpy(const char *);
char *xstrdup(char *);

/* Stuff */

int daemonize(char *);

#endif /* !__FUNC_H */