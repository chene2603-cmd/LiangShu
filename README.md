# LiangShu (量枢)

> The Quantum Pivot for Intelligent Clustering | Hybrid Quantum-Classical Framework on Origin Pilot  
> 智能聚类的量子枢轴｜基于本源司南的量子-经典混合框架

© 2026 Chen Jianjian — Open Source under Apache License 2.0  
© 2026 陈剑剑 — 本项目采用 Apache 2.0 开源许可证

---

## Overview | 概述

**LiangShu** is a production-oriented hybrid quantum-classical framework that implements **quantum-enhanced K-Means clustering** on real quantum hardware (Origin Pilot QPU).  
**量枢** 是一个面向落地的量子-经典混合框架，在真实量子硬件（本源司南 QPU）上实现**量子增强 K-Means 聚类**。

It leverages **RY encoding**, **SWAP Test-based distance measurement**, and **classical optimization loops** to deliver verifiable clustering results with quantum advantage in feature space.  
通过 **RY 编码**、**基于 SWAP Test 的距离计算** 与 **经典优化闭环**，在特征空间中提供具备量子优势的可验证聚类结果。

---

## Core Capabilities | 核心能力

- ✅ **Quantum Distance Engine**: Measure data similarity via quantum state overlap.  
  ✅ **量子距离引擎**：通过量子态重叠度度量数据相似性

- ✅ **Hybrid Execution Loop**: Mini-batch scheduling between CPU and QPU.  
  ✅ **混合执行循环**：CPU 与 QPU 间的小批量协同调度

- ✅ **Error Mitigation**: Hardware-aware noise suppression for NISQ devices.  
  ✅ **错误缓解机制**：面向 NISQ 设备的硬件感知降噪

- ✅ **C++/Python Dual Interface**: High-performance core + easy-to-use API.  
  ✅ **C++/Python 双接口**：高性能核心 + 易用高层 API

- ✅ **Origin Pilot Integration**: Fully compatible with Benyuan OS & QPanda 3.  
  ✅ **本源司南集成**：完整兼容本源量子操作系统与 QPanda 3

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

## Installation & Usage | 安装与使用

### Prerequisites | 前置依赖

- Linux (Ubuntu 20.04+ recommended)  
  Linux（推荐 Ubuntu 20.04+）
- C++17 compiler (g++ ≥ 9 or clang++)  
  C++17 编译器（g++ ≥ 9 或 clang++）
- CMake ≥ 3.18  
  CMake ≥ 3.18
- Python ≥ 3.8  
  Python ≥ 3.8
- **QPanda 3 SDK** (provided by Origin Quantum)  
  **QPanda 3 SDK**（由本源量子提供）

> 💡 If you're using **Origin Quantum Cloud**, QPanda is pre-installed.  
> 💡 若在**本源量子云平台**开发，QPanda 已预装。

### Quick Start | 快速开始

```bash
# 1. Clone the repository
# 1. 克隆项目
git clone https://github.com/chene2603-cmd/LiangShu.git
cd LiangShu

# 2. Install Python dependencies
# 2. 安装 Python 依赖
pip install -r requirements.txt

# 3. Build the C++ core
# 3. 编译 C++ 核心
mkdir build && cd build
cmake ..
make -j$(nproc)

# 4. Run an example
# 4. 运行示例
python examples/iris_demo.pyProject Structure | 项目结构
LiangShu/
├── examples/           # Runnable demos
│                       # 可运行示例
├── python/             # Python bindings
│                       # Python 接口
├── quantum/            # C++ quantum core (include/src)
│                       # C++ 量子核心（头文件/源码）
├── config/             # Configuration files
│                       # 配置文件
├── CMakeLists.txt      # C++ build configuration
│                       # C++ 构建配置
├── requirements.txt    # Python dependencies
│                       # Python 依赖列表
└── SECURITY.md         # Security policy
                        # 安全策略
Contributing | 贡献

We welcome issues, pull requests, and community collaboration!
欢迎提交 Issue、Pull Request 与社区协作！

Whether you want to:

Add new examples

Optimize quantum circuits

Improve documentation

— your contribution matters.
无论你是想：

添加新示例

优化量子线路

改进文档

—— 你的贡献都至关重要。

 

License | 许可证

This project is licensed under the Apache License 2.0.
本项目采用 Apache License 2.0 许可证。

You may use, modify, and distribute this software — including for commercial purposes — as long as you include the original copyright notice.
您可自由使用、修改和分发本软件（包括用于商业用途），只需保留原始版权声明。

See LICENSE for full terms.
完整条款见 LICENSE。