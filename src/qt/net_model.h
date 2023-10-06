#ifndef NET_MODEL_H_
#define NET_MODEL_H_

#include "monitor_model_base.h"
#include <QAbstractTableModel>
#include <vector>

#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {

class NetModel : public MonitorModelBase {
  Q_OBJECT

public:
  explicit NetModel(QObject *parent = nullptr);

  virtual ~NetModel() {}

  int rowCount(const QModelIndex &parent = QModelIndex()) const override;
  int columnCount(const QModelIndex &parent = QModelIndex()) const override;
  QVariant data(const QModelIndex &index,
                int role = Qt::DisplayRole) const override;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role) const override;

  void UpdateMonitorInfo(const rpc_monitor::MonitorInfo &monitor_info);

signals:
  void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight,
                   const QVector<int> &roles);

private:
  std::vector<QVariant>
  insert_one_net_info(const rpc_monitor::NetInfo &net_info);
  std::vector<std::vector<QVariant>> monitor_data_;
  QStringList header_;

  enum NetModelInfo {
    NAME = 0,
    SEND_RATE,
    RCV_RATE,
    SEND_PACKETS_RATE,
    RCV_PACKETS_RATE,
    COLUMN_MAX
  };
};

} // namespace monitor
#endif 