# 为什么下面这串代码不使用 `lv_disp_load_scr()` 也能直接显示：

```c
lv_obj_t *obj1 = lv_obj_create(lv_scr_act());
lv_obj_set_width(obj1, 200);
lv_obj_set_height(obj1, 100);
lv_obj_set_size(obj1, 200, 200);
````

这段代码直接显示的原因在于使用了 `lv_scr_act()` 来创建 `obj1` 控件的父对象。

---

🧠 **简单理解**：

`lv_scr_act()` 返回的是当前活动屏幕（即当前显示的屏幕），而你把 `obj1` 创建在了这个屏幕上。

因此，`obj1` 会自动添加到当前活动的屏幕上，并且被显示出来，无需调用 `lv_disp_load_scr()` 来手动加载屏幕。

---

🧱 **详细解释**：

* **`lv_scr_act()`**：

  `lv_scr_act()` 返回当前显示器的活动屏幕对象（通常是当前显示的屏幕）。

  在大多数情况下，`lv_scr_act()` 会返回当前加载并显示的屏幕。如果你没有切换过屏幕，它返回的是当前的默认屏幕。

* **`lv_obj_create(lv_scr_act())`**：

  `lv_obj_create()` 创建一个新的对象，并且将其添加到传入的父对象中。在这行代码中，`lv_scr_act()` 返回当前显示的屏幕（父对象），因此 `obj1` 被创建并自动加入当前屏幕中。

  创建完后，这个对象会立即显示在屏幕上。

* **为什么不需要 `lv_disp_load_scr()`**：

  `lv_disp_load_scr()` 的作用是将某个屏幕加载并显示。但是当你使用 `lv_scr_act()` 时，`obj1` 会被直接添加到当前显示的屏幕上，因此不需要额外调用 `lv_disp_load_scr()` 来显示屏幕。

  `lv_disp_load_scr()` 通常在需要切换到一个新的屏幕时使用，而如果你只是在现有屏幕上创建控件并放置它们，这些控件会立即显示，不需要手动加载屏幕。

---

📜 **举个例子**：

假设你有一个屏幕 `screen1`，并想创建一个标签控件 `label`：

```c
lv_obj_t *label = lv_label_create(lv_scr_act());  // 创建标签并添加到当前活动屏幕
lv_label_set_text(label, "Hello World!");         // 设置标签文本
```

在这段代码中：

* `lv_scr_act()` 返回当前显示的屏幕（例如 `screen1`），
* `lv_label_create(lv_scr_act())` 创建的标签控件会被自动添加到 `screen1` 上，
* 这时标签就会显示在屏幕上，无需再调用 `lv_disp_load_scr()`。

---

🧩 **总结**：

这段代码之所以不需要调用 `lv_disp_load_scr()` 是因为使用了 `lv_scr_act()` 来指定父对象（即当前活动屏幕）。控件 `obj1` 会自动被添加到当前活动屏幕并显示出来，而 `lv_disp_load_scr()` 通常用于切换或加载新的屏幕。

```
```
