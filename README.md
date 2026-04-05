# LiangShu (量枢)

> The Quantum Pivot for Intelligent Clustering | Hybrid Quantum-Classical Framework on Origin Pilot

© 2026 Chen Jianjian — Open Source under Apache License 2.0

---

## 中文标题  
# 量枢（LiangShu）

> 智能聚类的量子枢轴｜基于本源司南的量子-经典混合框架

© 2026 陈剑剑 — 本项目采用 Apache 2.0 开源许可证

---

## Overview | 概述

**LiangShu** is a production-oriented hybrid quantum-classical framework that implements **quantum-enhanced K-Means clustering** on real quantum hardware (Origin Pilot QPU).  
It leverages **RY encoding**, **SWAP Test-based distance measurement**, and **classical optimization loops** to deliver verifiable clustering results with quantum advantage in feature space.

**量枢** 是一个面向落地的量子-经典混合框架，在真实量子硬件（本源司南 QPU）上实现**量子增强 K-Means 聚类**。  
通过 **RY 编码**、**基于 SWAP Test 的距离计算** 与 **经典优化闭环**，在特征空间中提供具备量子优势的可验证聚类结果。

---

## Core Capabilities | 核心能力

- ✅ **Quantum Distance Engine**: Measure data similarity via quantum state overlap.  
- ✅ **Hybrid Execution Loop**: Mini-batch scheduling between CPU and QPU.  
- ✅ **Error Mitigation**: Hardware-aware noise suppression for NISQ devices.  
- ✅ **C++/Python Dual Interface**: High-performance core + easy-to-use API.  
- ✅ **Origin Pilot Integration**: Fully compatible with Benyuan OS & QPanda 3.

- ✅ **量子距离引擎**：通过量子态重叠度度量数据相似性  
- ✅ **混合执行循环**：CPU 与 QPU 间的小批量协同调度  
- ✅ **错误缓解机制**：面向 NISQ 设备的硬件感知降噪  
- ✅ **C++/Python 双接口**：高性能核心 + 易用高层 API  
- ✅ **本源司南集成**：完整兼容本源量子操作系统与 QPanda 3

---

## System Architecture | 系统架构

[Python Application Layer]
↓
[C++ Core: DataEncoder → QuantumDistanceCalculator → CentroidManager]
↓
[QPanda 3 Runtime → Origin Pilot OS → Physical QPU]
All quantum circuits are compiled, optimized, and executed under the **Benyuan Quantum OS** environment.  
所有量子线路均在**本源量子操作系统**环境下编译、优化并执行。

---

## 🛠️ 安装与使用 | Installation & Usage

### 前置依赖
- Linux（推荐 Ubuntu 20.04+）
- C++17 编译器（g++ ≥ 9）
- CMake ≥ 3.18
- Python ≥ 3.8
- **QPanda 3 SDK**（由本源量子提供）

> 💡 若在 **本源量子云平台** 开发，QPanda 已预装。

### 快速开始
```bash
# 1. 克隆项目
git clone https://github.com/chene2603-cmd/LiangShu.git
cd LiangShu

# 2. 安装 Python 依赖
pip install -r requirements.txt

# 3. 编译 C++ 核心
mkdir build && cd build
cmake ..
make -j$(nproc)

# 4. 运行示例
python examples/iris_demo.py
项目结构
LiangShu/
├── examples/           # 可直接运行的使用示例
├── python/             # Python 接口
├── quantum/            # C++ 量子核心（include/src）
├── config/             # 配置文件
├── CMakeLists.txt      # 构建配置
├── requirements.txt    # Python 依赖
└── SECURITY.md         # 安全漏洞报告流程
🤝 贡献与协作 | Contributing

欢迎提交 Issue、PR 或改进建议！
本项目遵循开放、透明的协作原则。

如需：

添加新示例

优化量子线路

改进错误缓解策略
请直接 Fork 并提交 Pull Request。

 

📜 许可证 | License

本项目采用 Apache License 2.0 ——
允许自由使用、修改、分发，包括商业用途，只需保留原始版权声明。