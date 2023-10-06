#ifndef MONITOR_MODEL_BASE_H_
#define MONITOR_MODEL_BASE_H_

#include <QAbstractTableModel>
#include <QObject>

namespace monitor {

class MonitorModelBase : public QAbstractTableModel {
  Q_OBJECT

 public:
  explicit MonitorModelBase(QObject *parent = nullptr)
      : QAbstractTableModel(parent) {}
  QVariant data(const QModelIndex &index,
                int role = Qt::DisplayRole) const override;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role) const override;
  virtual ~MonitorModelBase() {}
};

}  // namespace monitor

#endif