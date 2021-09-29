/*
  Copyright © 2016 Hasan Yavuz Özderya and Thomas Hofmann

  This file is part of modFOC-Configurator.

  modFOC-Configurator is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  modFOC-Configurator is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with modFOC-Configurator.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SNEAKYLINEEDIT_H
#define SNEAKYLINEEDIT_H

#include <QLineEdit>
#include <QFocusEvent>

class SneakyLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit SneakyLineEdit(QWidget *parent = 0);

private:
    void focusInEvent(QFocusEvent * event);
    void focusOutEvent(QFocusEvent * event);
    void setBold(bool bold);
};

#endif // SNEAKYLINEEDIT_H
