# LiangShu (量枢)

> The Quantum Pivot for Intelligent Clustering | Hybrid Quantum-Classical Framework on Origin Pilot

© 2026 Chen Jianjian (Shenzhen) — Proprietary. All Rights Reserved.

---

## 中文标题  
# 量枢（LiangShu）

> 智能聚类的量子枢轴｜基于本源司南的量子-经典混合框架

© 2026 陈剑剑（深圳）—— 专有软件，保留所有权利。

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

## Licensing & Contact | 授权与联系

This is **proprietary closed-source software**.  
For commercial licensing, technical evaluation, or research collaboration:  
📧 **chene2603@gmail.com**

本项目为**专有闭源软件**。  
商业授权、技术评估或科研合作请联系：  
📧 **chene2603@gmail.com**

---

## Copyright Notice | 版权声明

© 2026 Chen Jianjian (Shenzhen). All rights reserved.  
Protected under the Copyright Law of the People’s Republic of China and international intellectual property conventions.  
Unauthorized use, copying, modification, distribution, reverse engineering, or commercial exploitation is strictly prohibited.

© 2026 陈剑剑（深圳）。保留所有权利。  
受《中华人民共和国著作权法》及国际知识产权公约保护。  
严禁未经授权的使用、复制、修改、分发、反向工程或商业利用。