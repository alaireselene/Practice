Nháp nhanh thôi có gì format lại sau.


Lộ trình học CP:
- Học 1 ngôn ngữ, các kiểu dữ liệu và cấu trúc điều khiển của nó.
- Các thuật toán sắp xếp, tìm kiếm.
- Tóan rời rạc -> Quy hoạch động.

Some trash note:
1. Benefits of inline functions in C++?

Inline functions are faster because you don't need to push and pop things on/off the stack like parameters and the return address; however, it does make your binary slightly larger.

Does it make a significant difference? Not noticeably enough on modern hardware for most. But it can make a difference, which is enough for some people.

Marking something inline does not give you a guarantee that it will be inline. It's just a suggestion to the compiler. Sometimes it's not possible such as when you have a virtual function, or when there is recursion involved. And sometimes the compiler just chooses not to use it.

I could see a situation like this making a detectable difference:

```cpp
inline int aplusb_pow2(int a, int b) {
  return (a + b)*(a + b) ;
}
for(int a = 0; a < 900000; ++a)
    for(int b = 0; b < 900000; ++b)
        aplusb_pow2(a, b);
```

2. n ^ 2 + n + 41 là số nguyên tố với mọi n < 40.

3. Định lý bốn màu (còn gọi là định lý bản đồ bốn màu) phát biểu rằng đối với bất kỳ mặt phẳng nào được chia thành các vùng phân biệt, chẳng hạn như bản đồ hành chính của một quốc gia, chỉ cần dùng tối đa bốn màu để phân biệt các vùng lân cận với nhau. Hai vùng được coi là lân cận nếu như chúng có chung nhau một đoạn đường biên, không tính chung nhau một điểm. 
