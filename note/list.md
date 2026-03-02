# 1. 基本操作

## 1.1 定义

```cpp
struct ListNode {
    int val;  // 节点值
    ListNode *next;  // 指向下一个节点的指针
    ListNode() : val(0), next(nullptr) {}  // 默认构造函数
    ListNode(int x) : val(x), next(nullptr) {}  // [常用这个]参数为节点值的构造函数
    ListNode(int x, ListNode *next) : val(x), next(next) {}  // 参数为节点值和指向下一个节点的指针的构造函数
};
```

## 1.2 具体操作

```cpp
class LinkedList {
private:
    ListNode *head;  // 头节点指针
public:
    LinkedList() : head(nullptr) {}  // 构造函数，初始化头节点为空指针
    ~LinkedList()  // 析构函数，释放链表内存
    bool insert(int pos, int val)  // 在指定位置插入节点（位置从0开始）
    bool remove(int val)   // 删除第一个值为val的节点
    void print()  // 输出链表内容
};
```

### 1.2.1 构造函数

```cpp
LinkedList() : head(nullptr) {}
```
构造函数在**创建**类的对象时自动调用，用于初始化对象的成员变量。
`LinkedList()` 是构造函数的名字（必须与类名完全相同）。`: head(nullptr)` 是成员初始化列表，表示将成员变量`head`初始化为空指针`nullptr`。`{}` 是构造函数的空函数体（此处不需要额外操作）
相当于：
```python
def __init__(self):
    self.head = None  # 初始化头节点为 None
```

### 1.2.2 析构函数

```cpp
~LinkedList() {
    // 析构函数，释放链表内存
    ListNode *current = head;  // 从头节点开始
    // 遍历链表，直到链表末尾
    while (current != nullptr) {
        ListNode *temp = current;  // 保存当前节点
        current = current->next;  // 移动到下一个节点
        delete temp;  // 释放当前节点
    }
}
```
析构函数在对象被**销毁**时自动调用，用于释放对象占用的资源（例如动态分配的内存）。
`~LinkedList()` 是析构函数的名字（必须与类名相同，前缀有波浪号~）。内部的`while`循环遍历整个链表，逐个删除动态分配的节点，避免内存泄漏。
相当于：
```python
def __del__(self):
    current = self.head  # 从头节点开始
    while current is not None:  # 遍历链表，直到链表末尾
        temp = current  # 保存当前节点
        current = current.next  # 移动到下一个节点
        del temp  # 释放当前节点
```

### 1.2.3 插入节点

```cpp
// 在指定位置插入节点（位置从0开始）
bool insert(int pos, int val) {
    // 边界检查：位置小于0时直接返回 false
    if (pos < 0) return false;

    ListNode *newNode = new ListNode(val);
    // 情况1：插入头节点
    if (pos == 0) {  // 插入头部
        newNode->next = head;  // 新节点的next指向原头节点
        head = newNode;  // 更新头节点为新节点
        return true;
    }

    // 情况2：插入中间或尾部节点
    ListNode *current = head;
    // 遍历到插入位置的前一个节点。循环从0到pos-2(共pos-1次)，确保current移动到pos-1的位置
    for (int i = 0; i < pos - 1 && current != nullptr; ++i) {
        current = current->next;
    }
    // 如果current为nullptr，说明插入位置超出链表长度+1，无效
    if (current == nullptr) {
        delete newNode;
        return false;
    }
    newNode->next = current->next;  // 新节点next指向原current的下一个节点
    current->next = newNode;  // current的next指向新节点
    return true;
}
```


### 1.2.4 删除节点

```cpp
// 删除第一个值为val的节点
bool remove(int val) {
    // 边界检查：链表为空时直接返回 false
    if (head == nullptr) return false;

    // 情况1：删除头节点
    if (head->val == val) {}
        ListNode *temp = head;
        head = head->next;  // 更新头节点为下一个节点
        delete temp;  // 释放原头节点的内存
        return true;
    }

    // 情况2：删除中间或尾部节点
    ListNode *current = head;
    while (current->next != nullptr) {  // 遍历链表直到末尾
        if (current->next->val == val) {  // 找到目标节点的前驱节点current
            ListNode *temp = current->next;
            current->next = temp->next;  // 将前驱节点的next指向后继节点
            delete temp;  // 释放目标节点的内存
            return true;
        }
        current = current->next;  // 遍历下一个节点
    }

    return false;  // 未找到节点
}
```


### 1.2.5 输出链表

```cpp
// 输出链表内容
void print() {
    ListNode *current = head;  // 从头节点开始
    while (current != nullptr) {
        cout << current->val << " ";  // 输出当前节点值
        current = current->next;  // 移动到下一个节点
    }
    cout << endl;
}
```

### 1.2.6 使用示例

```cpp
int main() {
    LinkedList list;
    list.print();         // 输出：

    // 插入
    list.insert(0, 10);   // 头部插入10
    list.insert(1, 20);   // 位置1插入20，链表：10->20
    list.insert(1, 15);   // 位置1插入15，链表：10->15->20
    list.print();         // 输出：10 15 20

    // 删除
    list.remove(15);      // 删除15
    list.print();         // 输出：10 20
    list.remove(30);      // 尝试删除不存在的值
    list.print();         // 输出：10 20

    return 0;
}   // list离开作用域，析构函数自动调用，释放所有节点内存
```

下面的题目求解时均不考虑内存泄漏问题，只关注链表操作。

## 2. 基本操作

### 2.1 移除链表元素
给你一个链表的头节点`head`(注：应该叫为指向首元结点的头指针)和一个整数`val` ，请你删除链表中所有满足 `Node.val == val` 的节点，并返回 新的头节点 。

```cpp
// 203.cpp
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode* dummyHead = new ListNode(0, head);  // [堆] 创建虚拟头节点，并指向原头节点
        struct ListNode* cur = dummyHead;  // 从虚拟头节点开始遍历
        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                cur->next = cur->next->next;  // 删除cur的下一个节点
            } else {
                cur = cur->next;  // 移动到下一个节点，注意不要无条件移动了（也就是上一个if里不能执行cur = cur->next，因为并不知道下一个节点是不是要删除的节点）
            }
        }
        return dummyHead->next;  // 返回虚拟头节点的下一个节点
    }
};
```
这里使用的测试代码是：
```cpp
int main() {
    LinkedList list;  // 创建链表对象
    vector<int> arr = {1, 2, 6, 3, 4, 5, 6};
    ListNode *head = list.arr2list(arr);  // 将数组转换为链表，返回头节点指针
    list.print(head);  // 输出：1 2 6 3 4 5 6
    Solution s;
    ListNode *ans = s.removeElements(head, 6);  // 删除值为6的节点
    list.print(ans);  // 输出：1 2 3 4 5
    return 0;
}
```

初始化时，`cur` 和 `dummyHead` 都指向同一个节点，是同一个节点的引用，所以修改 `cur.next` 也会修改 `dummyHead.next`。
为什么在`cur->next != nullptr`的时候不需要`cur = cur->next`：因为删除节点后，`cur.next` 的节点值也可能等于`val`，也需要删除，如果直接更新 `cur` 为 `cur.next`，就漏删了节点。
还可以写为：
```cpp
ListNode dummyHead(0, head);  // [栈] dummyHead -> head -> 节点1 -> 节点2 -> ... -> nullptr
struct ListNode* cur = &dummyHead;
while {...}  // 不变
return dummyHead.next;
```
即：
`struct ListNode* dummyHead = new ListNode(0, head);`在堆上分配内存，生命周期由程序员控制，可以长期存在(直到调用 `delete`)，需要通过指针访问成员：`dummyHead->next`，等价于`(*dummyHead).next`。
`ListNode dummyHead(0, head);`在栈上分配内存，生命周期仅限于当前作用域，尝试在作用域外访问它(例如`return &dummyHead`)，会导致**悬空指针**Dangling Pointer，可以直接访问成员：`dummyHead.next`。
`&`为取地址运算符或引用声明符，`*`为解引用运算符或指针声明符。
`dummyHead`是一个对象（不是指针），访问成员要用 `.`。而 `->`只用于指针（等价于 `(*p).member`）。


### 2.2 翻转链表 √

给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

1. 使用3个指针 `l`、`p`、`r` 分别指向当前节点的左边节点left、当前节点和右边节点right。
```c
// 206.cpp
ListNode* reverseList(ListNode* head)
{
    ListNode* p = head;
    ListNode* l = nullptr;
    ListNode* r;
    if (!head)
        return head;  // 空
    if (head->next != nullptr)
        r = head->next;
    else
        return p;  // 只有一个节点
    while (p->next != nullptr)
    {
        p->next = l;  // 从l<-p->r变为l<-p<-r
        l = p;
        p = r;
        r = r->next;
    }
    p->next = l;  // 还要把最后一个节点的next指向l
    return p;
}
```
另一种写法可以避免繁琐的边界条件判断，直接在循环里处理所有情况：
```cpp
// 206_2.cpp(推荐此种写法)
ListNode* reverseList(ListNode* head)
{
    ListNode* r; // 保存p的下一个节点
    ListNode* p = head;
    ListNode* l = nullptr;
    while (p)  // 空则直接退
    {
        r = p->next; // 保存一下p的下一个节点，因为接下来要改变p->next
        p->next = l; // 翻转操作
        l = p;
        p = r;
    }
    return l;
}
```

2. 递归写法
```cpp
// 206_3.cpp
ListNode* reverse(ListNode* l, ListNode* p)
{
    if (p == nullptr) return l;
    ListNode* r = p->next;
    p->next = l;
    return reverse(p, r); // 其实就是做了这两步: l = p; p = r;
}

ListNode* reverseList(ListNode* head)
{
    return reverse(nullptr, head); // 相当于ListNode* cur = head; ListNode* pre = NULL;
}
```

### 2.3 两两交换链表中的节点 √

给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。
```cpp
// 24.cpp
ListNode* swapPairs(ListNode* head)
{
    ListNode* r;
    if (head and head->next)
        r = head->next->next;
    else
        return head; // 空或者单个元素
    ListNode* p = head->next;
    ListNode* l = head;
    ListNode* ans = head->next;
    while (r != nullptr and r->next != nullptr)
    {
        l->next = r->next;  // l指向3位后的，比如1应该指向4
        p->next = l;  // p指向l，比如2应该指向1，这样从1234变成了2->1->4，而3失去了前向指针，只能用r访问
        l = r;  // l,p,r向右移动2位
        p = r->next;
        r = r->next->next;
    }
    l->next = r;
    p->next = l;
    return ans;
}
```

### 2.4 删除链表的倒数第N个节点 √
给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
```cpp
// 19.cpp
ListNode* removeNthFromEnd(ListNode* head, int n)
{
    struct ListNode* dummyHead = new ListNode(0, head);
    ListNode* l = dummyHead;
    ListNode* r = dummyHead;
    for (int i = 0; i < n; i++)
        r = r->next;  // r先走n步，这样l和r之间就相隔n个节点了
    while (r != nullptr and r->next != nullptr)
    {
        l = l->next;
        r = r->next;
    }
    l->next = l->next->next;  // l->next就是要删除的节点
    return dummyHead->next;
}
```
注意本题使用虚拟头结点会简单很多，因为是删除，可能删头结点了。
