#include "monitor_model_base.h"

#include <QColor>
#include <QFont>

namespace monitor {
QVariant MonitorModelBase::headerData(int section, Qt::Orientation orientation,
                                      int role) const {
  if (role == Qt::FontRole) {
    return QVariant::fromValue(QFont("Microsoft YaHei", 10, QFont::Bold));
  }

  if (role == Qt::BackgroundRole) {
    return QVariant::fromValue(QColor(Qt::lightGray));
  }

  return QAbstractTableModel::headerData(section, orientation, role);
}

QVariant MonitorModelBase::data(const QModelIndex &index, int role) const {
  if (role == Qt::TextAlignmentRole) {
    return QVariant(Qt::AlignLeft | Qt::AlignVCenter);
  }

  if (role == Qt::TextColorRole) {
    return QVariant::fromValue(QColor(Qt::black));
  }

  if (role == Qt::BackgroundRole) {
    return QVariant::fromValue(QColor(Qt::white));
  }

  return QVariant();
}
}  // namespace monitor