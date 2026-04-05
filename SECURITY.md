# Security Policy | 安全策略

## Reporting a Vulnerability | 漏洞报告

**LiangShu (量枢)** is a proprietary, closed-source quantum-classical computing framework.  
Given its integration with real quantum hardware and classical control logic, security findings must be handled responsibly.

**量枢** 是一套专有闭源的量子-经典计算框架。  
鉴于其与真实量子硬件及经典控制逻辑的深度集成，安全问题需谨慎处理。

If you identify a potential vulnerability:
1. **Do NOT disclose it publicly**.
2. Email a detailed report to: **chene2603@gmail.com**
3. Allow up to 7 business days for acknowledgment.

如您发现潜在漏洞，请：
1. **切勿公开披露**；
2. 发送详细报告至：**chene2603@gmail.com**；
3. 请预留最多7个工作日等待确认。

We appreciate responsible disclosure. Note that this is **not an open-source project**, and public CVE assignment does not apply.

我们感谢负责任的披露。请注意，本项目**非开源项目**，不适用公开 CVE 分配。

---

## Design Security Assumptions | 安全设计假设

- The **quantum execution path** is isolated within the Origin Pilot trusted environment.
- All **classical-quantum data exchange** is validated and sanitized.
- The **C++ core** enforces memory safety and input bounds checking.
- **No external network access** is required during quantum execution.

- **量子执行路径** 隔离于本源司南可信环境中  
- 所有**经典-量子数据交换**均经过校验与清洗  
- **C++ 核心** 强制内存安全与输入边界检查  
- 量子执行期间**无需外部网络访问**

---

## No Public Bug Bounty | 无公开漏洞赏金计划

This project does not operate a public bug bounty program.  
Confidential discussions are welcome via the contact email above.

本项目不设公开漏洞赏金计划。  
欢迎通过上述邮箱进行保密沟通。