// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TASKGRAPH_FLATBUFTASKGRAPH_H_
#define FLATBUFFERS_GENERATED_TASKGRAPH_FLATBUFTASKGRAPH_H_

#include "flatbuffers/flatbuffers.h"

namespace FlatBufTaskGraph {

struct Task;
struct TaskBuilder;

struct Device;
struct DeviceBuilder;

struct Connection;
struct ConnectionBuilder;

struct Path;
struct PathBuilder;

struct Route;
struct RouteBuilder;

struct Operator;
struct OperatorBuilder;

struct TaskGraph;
struct TaskGraphBuilder;

struct Topology;
struct TopologyBuilder;

enum SimTaskType : int16_t {
  SimTaskType_TASK_FORWARD = 0,
  SimTaskType_TASK_BACKWARD = 1,
  SimTaskType_TASK_COMM = 2,
  SimTaskType_TASK_UPDATE = 3,
  SimTaskType_TASK_BARRIER = 4,
  SimTaskType_TASK_NOMINAL_COMM = 5,
  SimTaskType_TASK_ALLREDUCE = 6,
  SimTaskType_MIN = SimTaskType_TASK_FORWARD,
  SimTaskType_MAX = SimTaskType_TASK_ALLREDUCE
};

inline const SimTaskType (&EnumValuesSimTaskType())[7] {
  static const SimTaskType values[] = {
    SimTaskType_TASK_FORWARD,
    SimTaskType_TASK_BACKWARD,
    SimTaskType_TASK_COMM,
    SimTaskType_TASK_UPDATE,
    SimTaskType_TASK_BARRIER,
    SimTaskType_TASK_NOMINAL_COMM,
    SimTaskType_TASK_ALLREDUCE
  };
  return values;
}

inline const char * const *EnumNamesSimTaskType() {
  static const char * const names[8] = {
    "TASK_FORWARD",
    "TASK_BACKWARD",
    "TASK_COMM",
    "TASK_UPDATE",
    "TASK_BARRIER",
    "TASK_NOMINAL_COMM",
    "TASK_ALLREDUCE",
    nullptr
  };
  return names;
}

inline const char *EnumNameSimTaskType(SimTaskType e) {
  if (flatbuffers::IsOutRange(e, SimTaskType_TASK_FORWARD, SimTaskType_TASK_ALLREDUCE)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSimTaskType()[index];
}

enum DeviceType : int16_t {
  DeviceType_DEVICE_COMP_GPU = 0,
  DeviceType_DEVICE_COMP_CPU = 1,
  DeviceType_DEVICE_MEM_SYSTEM = 2,
  DeviceType_DEVICE_MEM_Z_COPY = 3,
  DeviceType_DEVICE_MEM_GPU_FB = 4,
  DeviceType_DEVICE_COMM_MEMBUS_COMM = 5,
  DeviceType_DEVICE_COMM_UPI_IN_COMM = 6,
  DeviceType_DEVICE_COMM_UPI_OUT_COMM = 7,
  DeviceType_DEVICE_COMM_NIC_IN_COMM = 8,
  DeviceType_DEVICE_COMM_NIC_OUT_COMM = 9,
  DeviceType_DEVICE_COMM_PCI_TO_HOST_COMM = 10,
  DeviceType_DEVICE_COMM_PCI_TO_DEV_COMM = 11,
  DeviceType_DEVICE_COMM_NVLINK_COMM = 12,
  DeviceType_DEVICE_COMM_NW_COMM = 13,
  DeviceType_DEVICE_COMM_NW_NOMINAL = 14,
  DeviceType_MIN = DeviceType_DEVICE_COMP_GPU,
  DeviceType_MAX = DeviceType_DEVICE_COMM_NW_NOMINAL
};

inline const DeviceType (&EnumValuesDeviceType())[15] {
  static const DeviceType values[] = {
    DeviceType_DEVICE_COMP_GPU,
    DeviceType_DEVICE_COMP_CPU,
    DeviceType_DEVICE_MEM_SYSTEM,
    DeviceType_DEVICE_MEM_Z_COPY,
    DeviceType_DEVICE_MEM_GPU_FB,
    DeviceType_DEVICE_COMM_MEMBUS_COMM,
    DeviceType_DEVICE_COMM_UPI_IN_COMM,
    DeviceType_DEVICE_COMM_UPI_OUT_COMM,
    DeviceType_DEVICE_COMM_NIC_IN_COMM,
    DeviceType_DEVICE_COMM_NIC_OUT_COMM,
    DeviceType_DEVICE_COMM_PCI_TO_HOST_COMM,
    DeviceType_DEVICE_COMM_PCI_TO_DEV_COMM,
    DeviceType_DEVICE_COMM_NVLINK_COMM,
    DeviceType_DEVICE_COMM_NW_COMM,
    DeviceType_DEVICE_COMM_NW_NOMINAL
  };
  return values;
}

inline const char * const *EnumNamesDeviceType() {
  static const char * const names[16] = {
    "DEVICE_COMP_GPU",
    "DEVICE_COMP_CPU",
    "DEVICE_MEM_SYSTEM",
    "DEVICE_MEM_Z_COPY",
    "DEVICE_MEM_GPU_FB",
    "DEVICE_COMM_MEMBUS_COMM",
    "DEVICE_COMM_UPI_IN_COMM",
    "DEVICE_COMM_UPI_OUT_COMM",
    "DEVICE_COMM_NIC_IN_COMM",
    "DEVICE_COMM_NIC_OUT_COMM",
    "DEVICE_COMM_PCI_TO_HOST_COMM",
    "DEVICE_COMM_PCI_TO_DEV_COMM",
    "DEVICE_COMM_NVLINK_COMM",
    "DEVICE_COMM_NW_COMM",
    "DEVICE_COMM_NW_NOMINAL",
    nullptr
  };
  return names;
}

inline const char *EnumNameDeviceType(DeviceType e) {
  if (flatbuffers::IsOutRange(e, DeviceType_DEVICE_COMP_GPU, DeviceType_DEVICE_COMM_NW_NOMINAL)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesDeviceType()[index];
}

struct Task FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TaskBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TYPE = 4,
    VT_TASKID = 6,
    VT_DEVICEID = 8,
    VT_RUNTIME = 10,
    VT_XFERSIZE = 12,
    VT_NEXTTASKS = 14
  };
  FlatBufTaskGraph::SimTaskType type() const {
    return static_cast<FlatBufTaskGraph::SimTaskType>(GetField<int16_t>(VT_TYPE, 0));
  }
  uint64_t taskid() const {
    return GetField<uint64_t>(VT_TASKID, 0);
  }
  uint64_t deviceid() const {
    return GetField<uint64_t>(VT_DEVICEID, 0);
  }
  float runtime() const {
    return GetField<float>(VT_RUNTIME, 0.0f);
  }
  uint64_t xfersize() const {
    return GetField<uint64_t>(VT_XFERSIZE, 0);
  }
  const flatbuffers::Vector<uint64_t> *nexttasks() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_NEXTTASKS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, VT_TYPE) &&
           VerifyField<uint64_t>(verifier, VT_TASKID) &&
           VerifyField<uint64_t>(verifier, VT_DEVICEID) &&
           VerifyField<float>(verifier, VT_RUNTIME) &&
           VerifyField<uint64_t>(verifier, VT_XFERSIZE) &&
           VerifyOffset(verifier, VT_NEXTTASKS) &&
           verifier.VerifyVector(nexttasks()) &&
           verifier.EndTable();
  }
};

struct TaskBuilder {
  typedef Task Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(FlatBufTaskGraph::SimTaskType type) {
    fbb_.AddElement<int16_t>(Task::VT_TYPE, static_cast<int16_t>(type), 0);
  }
  void add_taskid(uint64_t taskid) {
    fbb_.AddElement<uint64_t>(Task::VT_TASKID, taskid, 0);
  }
  void add_deviceid(uint64_t deviceid) {
    fbb_.AddElement<uint64_t>(Task::VT_DEVICEID, deviceid, 0);
  }
  void add_runtime(float runtime) {
    fbb_.AddElement<float>(Task::VT_RUNTIME, runtime, 0.0f);
  }
  void add_xfersize(uint64_t xfersize) {
    fbb_.AddElement<uint64_t>(Task::VT_XFERSIZE, xfersize, 0);
  }
  void add_nexttasks(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> nexttasks) {
    fbb_.AddOffset(Task::VT_NEXTTASKS, nexttasks);
  }
  explicit TaskBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Task> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Task>(end);
    return o;
  }
};

inline flatbuffers::Offset<Task> CreateTask(
    flatbuffers::FlatBufferBuilder &_fbb,
    FlatBufTaskGraph::SimTaskType type = FlatBufTaskGraph::SimTaskType_TASK_FORWARD,
    uint64_t taskid = 0,
    uint64_t deviceid = 0,
    float runtime = 0.0f,
    uint64_t xfersize = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> nexttasks = 0) {
  TaskBuilder builder_(_fbb);
  builder_.add_xfersize(xfersize);
  builder_.add_deviceid(deviceid);
  builder_.add_taskid(taskid);
  builder_.add_nexttasks(nexttasks);
  builder_.add_runtime(runtime);
  builder_.add_type(type);
  return builder_.Finish();
}

inline flatbuffers::Offset<Task> CreateTaskDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    FlatBufTaskGraph::SimTaskType type = FlatBufTaskGraph::SimTaskType_TASK_FORWARD,
    uint64_t taskid = 0,
    uint64_t deviceid = 0,
    float runtime = 0.0f,
    uint64_t xfersize = 0,
    const std::vector<uint64_t> *nexttasks = nullptr) {
  auto nexttasks__ = nexttasks ? _fbb.CreateVector<uint64_t>(*nexttasks) : 0;
  return FlatBufTaskGraph::CreateTask(
      _fbb,
      type,
      taskid,
      deviceid,
      runtime,
      xfersize,
      nexttasks__);
}

struct Device FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DeviceBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TYPE = 4,
    VT_DEVICEID = 6,
    VT_NODEID = 8,
    VT_DEVICEPROPERTY = 10,
    VT_BANDWIDTH = 12
  };
  FlatBufTaskGraph::DeviceType type() const {
    return static_cast<FlatBufTaskGraph::DeviceType>(GetField<int16_t>(VT_TYPE, 0));
  }
  uint64_t deviceid() const {
    return GetField<uint64_t>(VT_DEVICEID, 0);
  }
  uint64_t nodeid() const {
    return GetField<uint64_t>(VT_NODEID, 0);
  }
  uint64_t deviceproperty() const {
    return GetField<uint64_t>(VT_DEVICEPROPERTY, 0);
  }
  uint64_t bandwidth() const {
    return GetField<uint64_t>(VT_BANDWIDTH, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, VT_TYPE) &&
           VerifyField<uint64_t>(verifier, VT_DEVICEID) &&
           VerifyField<uint64_t>(verifier, VT_NODEID) &&
           VerifyField<uint64_t>(verifier, VT_DEVICEPROPERTY) &&
           VerifyField<uint64_t>(verifier, VT_BANDWIDTH) &&
           verifier.EndTable();
  }
};

struct DeviceBuilder {
  typedef Device Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(FlatBufTaskGraph::DeviceType type) {
    fbb_.AddElement<int16_t>(Device::VT_TYPE, static_cast<int16_t>(type), 0);
  }
  void add_deviceid(uint64_t deviceid) {
    fbb_.AddElement<uint64_t>(Device::VT_DEVICEID, deviceid, 0);
  }
  void add_nodeid(uint64_t nodeid) {
    fbb_.AddElement<uint64_t>(Device::VT_NODEID, nodeid, 0);
  }
  void add_deviceproperty(uint64_t deviceproperty) {
    fbb_.AddElement<uint64_t>(Device::VT_DEVICEPROPERTY, deviceproperty, 0);
  }
  void add_bandwidth(uint64_t bandwidth) {
    fbb_.AddElement<uint64_t>(Device::VT_BANDWIDTH, bandwidth, 0);
  }
  explicit DeviceBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Device> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Device>(end);
    return o;
  }
};

inline flatbuffers::Offset<Device> CreateDevice(
    flatbuffers::FlatBufferBuilder &_fbb,
    FlatBufTaskGraph::DeviceType type = FlatBufTaskGraph::DeviceType_DEVICE_COMP_GPU,
    uint64_t deviceid = 0,
    uint64_t nodeid = 0,
    uint64_t deviceproperty = 0,
    uint64_t bandwidth = 0) {
  DeviceBuilder builder_(_fbb);
  builder_.add_bandwidth(bandwidth);
  builder_.add_deviceproperty(deviceproperty);
  builder_.add_nodeid(nodeid);
  builder_.add_deviceid(deviceid);
  builder_.add_type(type);
  return builder_.Finish();
}

struct Connection FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ConnectionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FROMNODE = 4,
    VT_TONODE = 6,
    VT_NCONN = 8
  };
  uint32_t fromnode() const {
    return GetField<uint32_t>(VT_FROMNODE, 0);
  }
  uint32_t tonode() const {
    return GetField<uint32_t>(VT_TONODE, 0);
  }
  uint32_t nconn() const {
    return GetField<uint32_t>(VT_NCONN, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_FROMNODE) &&
           VerifyField<uint32_t>(verifier, VT_TONODE) &&
           VerifyField<uint32_t>(verifier, VT_NCONN) &&
           verifier.EndTable();
  }
};

struct ConnectionBuilder {
  typedef Connection Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_fromnode(uint32_t fromnode) {
    fbb_.AddElement<uint32_t>(Connection::VT_FROMNODE, fromnode, 0);
  }
  void add_tonode(uint32_t tonode) {
    fbb_.AddElement<uint32_t>(Connection::VT_TONODE, tonode, 0);
  }
  void add_nconn(uint32_t nconn) {
    fbb_.AddElement<uint32_t>(Connection::VT_NCONN, nconn, 0);
  }
  explicit ConnectionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Connection> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Connection>(end);
    return o;
  }
};

inline flatbuffers::Offset<Connection> CreateConnection(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t fromnode = 0,
    uint32_t tonode = 0,
    uint32_t nconn = 0) {
  ConnectionBuilder builder_(_fbb);
  builder_.add_nconn(nconn);
  builder_.add_tonode(tonode);
  builder_.add_fromnode(fromnode);
  return builder_.Finish();
}

struct Path FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PathBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_HOPNODE = 4,
    VT_CHANCE = 6
  };
  const flatbuffers::Vector<uint32_t> *hopnode() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_HOPNODE);
  }
  float chance() const {
    return GetField<float>(VT_CHANCE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HOPNODE) &&
           verifier.VerifyVector(hopnode()) &&
           VerifyField<float>(verifier, VT_CHANCE) &&
           verifier.EndTable();
  }
};

struct PathBuilder {
  typedef Path Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_hopnode(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> hopnode) {
    fbb_.AddOffset(Path::VT_HOPNODE, hopnode);
  }
  void add_chance(float chance) {
    fbb_.AddElement<float>(Path::VT_CHANCE, chance, 0.0f);
  }
  explicit PathBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Path> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Path>(end);
    return o;
  }
};

inline flatbuffers::Offset<Path> CreatePath(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> hopnode = 0,
    float chance = 0.0f) {
  PathBuilder builder_(_fbb);
  builder_.add_chance(chance);
  builder_.add_hopnode(hopnode);
  return builder_.Finish();
}

inline flatbuffers::Offset<Path> CreatePathDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint32_t> *hopnode = nullptr,
    float chance = 0.0f) {
  auto hopnode__ = hopnode ? _fbb.CreateVector<uint32_t>(*hopnode) : 0;
  return FlatBufTaskGraph::CreatePath(
      _fbb,
      hopnode__,
      chance);
}

struct Route FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef RouteBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FROMNODE = 4,
    VT_TONODE = 6,
    VT_PATHS = 8
  };
  uint32_t fromnode() const {
    return GetField<uint32_t>(VT_FROMNODE, 0);
  }
  uint32_t tonode() const {
    return GetField<uint32_t>(VT_TONODE, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Path>> *paths() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Path>> *>(VT_PATHS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_FROMNODE) &&
           VerifyField<uint32_t>(verifier, VT_TONODE) &&
           VerifyOffset(verifier, VT_PATHS) &&
           verifier.VerifyVector(paths()) &&
           verifier.VerifyVectorOfTables(paths()) &&
           verifier.EndTable();
  }
};

struct RouteBuilder {
  typedef Route Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_fromnode(uint32_t fromnode) {
    fbb_.AddElement<uint32_t>(Route::VT_FROMNODE, fromnode, 0);
  }
  void add_tonode(uint32_t tonode) {
    fbb_.AddElement<uint32_t>(Route::VT_TONODE, tonode, 0);
  }
  void add_paths(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Path>>> paths) {
    fbb_.AddOffset(Route::VT_PATHS, paths);
  }
  explicit RouteBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Route> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Route>(end);
    return o;
  }
};

inline flatbuffers::Offset<Route> CreateRoute(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t fromnode = 0,
    uint32_t tonode = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Path>>> paths = 0) {
  RouteBuilder builder_(_fbb);
  builder_.add_paths(paths);
  builder_.add_tonode(tonode);
  builder_.add_fromnode(fromnode);
  return builder_.Finish();
}

inline flatbuffers::Offset<Route> CreateRouteDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t fromnode = 0,
    uint32_t tonode = 0,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Path>> *paths = nullptr) {
  auto paths__ = paths ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Path>>(*paths) : 0;
  return FlatBufTaskGraph::CreateRoute(
      _fbb,
      fromnode,
      tonode,
      paths__);
}

struct Operator FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OperatorBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_OPID = 4,
    VT_TYPE = 6,
    VT_NAME = 8
  };
  uint64_t opid() const {
    return GetField<uint64_t>(VT_OPID, 0);
  }
  uint64_t type() const {
    return GetField<uint64_t>(VT_TYPE, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_OPID) &&
           VerifyField<uint64_t>(verifier, VT_TYPE) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
};

struct OperatorBuilder {
  typedef Operator Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_opid(uint64_t opid) {
    fbb_.AddElement<uint64_t>(Operator::VT_OPID, opid, 0);
  }
  void add_type(uint64_t type) {
    fbb_.AddElement<uint64_t>(Operator::VT_TYPE, type, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Operator::VT_NAME, name);
  }
  explicit OperatorBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Operator> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Operator>(end);
    return o;
  }
};

inline flatbuffers::Offset<Operator> CreateOperator(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t opid = 0,
    uint64_t type = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  OperatorBuilder builder_(_fbb);
  builder_.add_type(type);
  builder_.add_opid(opid);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Operator> CreateOperatorDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t opid = 0,
    uint64_t type = 0,
    const char *name = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return FlatBufTaskGraph::CreateOperator(
      _fbb,
      opid,
      type,
      name__);
}

struct TaskGraph FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TaskGraphBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NGPUPERNODE = 4,
    VT_NNODE = 6,
    VT_INTERGPUBW = 8,
    VT_DRAMBW = 10,
    VT_NETBW = 12,
    VT_CONN = 14,
    VT_OPS = 16,
    VT_TASKS = 18,
    VT_DEVICES = 20,
    VT_ROUTES = 22
  };
  uint32_t ngpupernode() const {
    return GetField<uint32_t>(VT_NGPUPERNODE, 0);
  }
  uint32_t nnode() const {
    return GetField<uint32_t>(VT_NNODE, 0);
  }
  float intergpubw() const {
    return GetField<float>(VT_INTERGPUBW, 0.0f);
  }
  float drambw() const {
    return GetField<float>(VT_DRAMBW, 0.0f);
  }
  float netbw() const {
    return GetField<float>(VT_NETBW, 0.0f);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>> *conn() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>> *>(VT_CONN);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Operator>> *ops() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Operator>> *>(VT_OPS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Task>> *tasks() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Task>> *>(VT_TASKS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Device>> *devices() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Device>> *>(VT_DEVICES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>> *routes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>> *>(VT_ROUTES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_NGPUPERNODE) &&
           VerifyField<uint32_t>(verifier, VT_NNODE) &&
           VerifyField<float>(verifier, VT_INTERGPUBW) &&
           VerifyField<float>(verifier, VT_DRAMBW) &&
           VerifyField<float>(verifier, VT_NETBW) &&
           VerifyOffset(verifier, VT_CONN) &&
           verifier.VerifyVector(conn()) &&
           verifier.VerifyVectorOfTables(conn()) &&
           VerifyOffset(verifier, VT_OPS) &&
           verifier.VerifyVector(ops()) &&
           verifier.VerifyVectorOfTables(ops()) &&
           VerifyOffset(verifier, VT_TASKS) &&
           verifier.VerifyVector(tasks()) &&
           verifier.VerifyVectorOfTables(tasks()) &&
           VerifyOffset(verifier, VT_DEVICES) &&
           verifier.VerifyVector(devices()) &&
           verifier.VerifyVectorOfTables(devices()) &&
           VerifyOffset(verifier, VT_ROUTES) &&
           verifier.VerifyVector(routes()) &&
           verifier.VerifyVectorOfTables(routes()) &&
           verifier.EndTable();
  }
};

struct TaskGraphBuilder {
  typedef TaskGraph Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ngpupernode(uint32_t ngpupernode) {
    fbb_.AddElement<uint32_t>(TaskGraph::VT_NGPUPERNODE, ngpupernode, 0);
  }
  void add_nnode(uint32_t nnode) {
    fbb_.AddElement<uint32_t>(TaskGraph::VT_NNODE, nnode, 0);
  }
  void add_intergpubw(float intergpubw) {
    fbb_.AddElement<float>(TaskGraph::VT_INTERGPUBW, intergpubw, 0.0f);
  }
  void add_drambw(float drambw) {
    fbb_.AddElement<float>(TaskGraph::VT_DRAMBW, drambw, 0.0f);
  }
  void add_netbw(float netbw) {
    fbb_.AddElement<float>(TaskGraph::VT_NETBW, netbw, 0.0f);
  }
  void add_conn(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>>> conn) {
    fbb_.AddOffset(TaskGraph::VT_CONN, conn);
  }
  void add_ops(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Operator>>> ops) {
    fbb_.AddOffset(TaskGraph::VT_OPS, ops);
  }
  void add_tasks(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Task>>> tasks) {
    fbb_.AddOffset(TaskGraph::VT_TASKS, tasks);
  }
  void add_devices(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Device>>> devices) {
    fbb_.AddOffset(TaskGraph::VT_DEVICES, devices);
  }
  void add_routes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>>> routes) {
    fbb_.AddOffset(TaskGraph::VT_ROUTES, routes);
  }
  explicit TaskGraphBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<TaskGraph> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TaskGraph>(end);
    return o;
  }
};

inline flatbuffers::Offset<TaskGraph> CreateTaskGraph(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t ngpupernode = 0,
    uint32_t nnode = 0,
    float intergpubw = 0.0f,
    float drambw = 0.0f,
    float netbw = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>>> conn = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Operator>>> ops = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Task>>> tasks = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Device>>> devices = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>>> routes = 0) {
  TaskGraphBuilder builder_(_fbb);
  builder_.add_routes(routes);
  builder_.add_devices(devices);
  builder_.add_tasks(tasks);
  builder_.add_ops(ops);
  builder_.add_conn(conn);
  builder_.add_netbw(netbw);
  builder_.add_drambw(drambw);
  builder_.add_intergpubw(intergpubw);
  builder_.add_nnode(nnode);
  builder_.add_ngpupernode(ngpupernode);
  return builder_.Finish();
}

inline flatbuffers::Offset<TaskGraph> CreateTaskGraphDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t ngpupernode = 0,
    uint32_t nnode = 0,
    float intergpubw = 0.0f,
    float drambw = 0.0f,
    float netbw = 0.0f,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>> *conn = nullptr,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Operator>> *ops = nullptr,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Task>> *tasks = nullptr,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Device>> *devices = nullptr,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Route>> *routes = nullptr) {
  auto conn__ = conn ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Connection>>(*conn) : 0;
  auto ops__ = ops ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Operator>>(*ops) : 0;
  auto tasks__ = tasks ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Task>>(*tasks) : 0;
  auto devices__ = devices ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Device>>(*devices) : 0;
  auto routes__ = routes ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Route>>(*routes) : 0;
  return FlatBufTaskGraph::CreateTaskGraph(
      _fbb,
      ngpupernode,
      nnode,
      intergpubw,
      drambw,
      netbw,
      conn__,
      ops__,
      tasks__,
      devices__,
      routes__);
}

struct Topology FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TopologyBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CONN = 4,
    VT_ROUTES = 6
  };
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>> *conn() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>> *>(VT_CONN);
  }
  const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>> *routes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>> *>(VT_ROUTES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_CONN) &&
           verifier.VerifyVector(conn()) &&
           verifier.VerifyVectorOfTables(conn()) &&
           VerifyOffset(verifier, VT_ROUTES) &&
           verifier.VerifyVector(routes()) &&
           verifier.VerifyVectorOfTables(routes()) &&
           verifier.EndTable();
  }
};

struct TopologyBuilder {
  typedef Topology Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_conn(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>>> conn) {
    fbb_.AddOffset(Topology::VT_CONN, conn);
  }
  void add_routes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>>> routes) {
    fbb_.AddOffset(Topology::VT_ROUTES, routes);
  }
  explicit TopologyBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Topology> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Topology>(end);
    return o;
  }
};

inline flatbuffers::Offset<Topology> CreateTopology(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>>> conn = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FlatBufTaskGraph::Route>>> routes = 0) {
  TopologyBuilder builder_(_fbb);
  builder_.add_routes(routes);
  builder_.add_conn(conn);
  return builder_.Finish();
}

inline flatbuffers::Offset<Topology> CreateTopologyDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Connection>> *conn = nullptr,
    const std::vector<flatbuffers::Offset<FlatBufTaskGraph::Route>> *routes = nullptr) {
  auto conn__ = conn ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Connection>>(*conn) : 0;
  auto routes__ = routes ? _fbb.CreateVector<flatbuffers::Offset<FlatBufTaskGraph::Route>>(*routes) : 0;
  return FlatBufTaskGraph::CreateTopology(
      _fbb,
      conn__,
      routes__);
}

}  // namespace FlatBufTaskGraph

#endif  // FLATBUFFERS_GENERATED_TASKGRAPH_FLATBUFTASKGRAPH_H_
