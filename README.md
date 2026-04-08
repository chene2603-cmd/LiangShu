MIT License

Copyright (c) 2025 chene2603-cmd

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

---

## Additional Clarifications for AI/Local-Agent Context

1. **No Data Collection**: This software runs entirely offline. It does not connect to the internet, collect user data, log inputs, or transmit any information externally.

2. **Model Responsibility**: The software loads locally stored language models only. The authors assume no liability for the behavior, safety, or legality of third-party models used with this framework.

3. **Security Boundary**: This project contains no remote code execution, dynamic evaluation (`eval`), shell commands, or file system writes beyond temporary cache (if explicitly enabled by user). Any deviation from this must be introduced by the user.

4. **Use at Your Own Risk**: While designed for transparency and safety, this tool is provided for research and development purposes. Production deployment requires independent security and compliance review.

---

## 中文说明（非法律条款，仅作理解参考）

本项目（LiangShu）是一个本地运行的轻量级智能体框架，遵循以下原则：

1. **完全离线**：不联网、不收集任何用户输入、不上传数据；
2. **模型由用户自备**：仅加载您本地已有的语言模型，作者不对第三方模型的内容或行为负责；
3. **无危险操作**：代码中不含 `eval()`、`os.system()`、远程执行等高风险函数；
4. **研究用途优先**：虽经安全设计，但仍建议在生产环境使用前进行独立审计。

我们致力于提供一个透明、可控、可信赖的本地AI工具。感谢您的理解与支持。
