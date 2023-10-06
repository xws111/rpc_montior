#ifndef CPU_STAT_MODEL_H_
#define CPU_STAT_MODEL_H_

#include <QAbstractTableModel>
#include <vector>
#include "monitor_model_base.h"

#include "monitor_info.grpc.pb.h"
#include "monitor_info.pb.h"

namespace monitor {

class CpuStatModel : public MonitorModelBase {
  Q_OBJECT

 public:
  explicit CpuStatModel(QObject *parent = nullptr);

  virtual ~CpuStatModel() {}

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
  std::vector<QVariant> insert_one_cpu_stat(
      const rpc_monitor::CpuStat &cpu_stat);
  std::vector<std::vector<QVariant>> monitor_data_;
  QStringList header_;

  enum CpuStat {
    CPU_NAME = 0,
    CPU_PERCENT,
    CPU_USER_PERCENT,
    CPU_SYSTEM_PERCENT,
    COLUMN_MAX
  };
};

}  // namespace monitor
#endif CPU_STAT_MODEL_H_