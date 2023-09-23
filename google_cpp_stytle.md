
* 通用规则：命名有描述性，尽量少用缩写，例如: `DoSpecificThing()`

* 文件命名：`my_useful_class.h` 下滑线连接的具体描述性名字

* 类型命名：采用`CamelCase`,即大驼峰命名法，例: `MyUsefulClass`

* 变量命名：
    
    * 普通变量：`table_name`，下划线小写

    * 类数据成员: `table_name_`，下划线加小写，末尾加下划线
    * 结构体成员和普通变量一致
    * 常量：`const kTableName`
    * 函数：采用`CamelCase`: `ValidateFuncName()`
    * 枚举命名：
   ```
   enum UrlTableErrors {
    kOK = 0,
    kErrorOutOfMemory,
    kErrorMalformedInput,
   };
   ``` 
    * 宏命名：`MY_MACRO_THAT_SCARES_SMALL_CHILDREN`
* 命名空间：命名独特不冲突即可