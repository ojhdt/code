package com.example.qualifier

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.LayoutInflater
import androidx.fragment.app.Fragment
import com.example.qualifier.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    val newsData = listOf<News>(
        News(
            "Android LayoutInflater原理分析，带你一步步深入了解View",
            "有不少朋友跟我反应，都希望我可以写一篇关于View的文章，讲一讲View的工作原理以及自定义View的方法。没错，承诺过的文章我是一定要兑现的，而且在View这个话题上我还准备多写几篇，尽量能将这个知识点讲得透彻一些。那么今天就从LayoutInflater开始讲起吧。",
            "2021-10-03",
            "guolin"
        ),
        News(
            "理解Android中的LayoutInflater",
            "大家对LayoutInflater一定不陌生，它主要用于加载布局，在Fragment的onCreateView方法、ListView Adapter的getView方法等许多地方都可以见到它的身影。今天主要聊聊LayoutInflater的用法以及加载布局的工作原理。",
            "2017-02-06",
            "凡诺依曼"
        ),
        News(
            "在RecyclerView.Adapter中使用ViewBinding",
            "偶尔会遇到需要在RecyclerView中开始或结束的位置上显示一些固定的内容的需求，此时Adapter的getItemCount与List的size并不相等，当列表的数据发生变化时，会出现RecyclerView的动画不正常，加载不正确等问题，这里也可以提供解决方案",
            "2020-10-07",
            "robot"
        ),
        News(
            "视图绑定",
            "通过视图绑定功能，您可以更轻松地编写可与视图交互的代码。在模块中启用视图绑定之后，系统会为该模块中的每个 XML 布局文件生成一个绑定类。绑定类的实例包含对在相应布局中具有 ID 的所有视图的直接引用。",
            "2022-12-07",
            "Google"
        ),
        News(
            "kotlin-android-extensions插件也被废弃了？扶我起来",
            "虽然也有一些诸如ButterKnife之类的第三方库，专门用于对findViewById的用法进行简化，但是ButterKnife还是要通过注解来让控件与资源id之间进行绑定，并不算是非常方便。",
            "2021-01-25",
            "guolin"
        ),
        News(
            "How to make space between LinearLayout children?",
            "I am programatically adding custom views to a vertical LinearLayout, and I would like there to be some space between the views. I have tried adding: setPadding(0, 1, 0, 1) to my CustomView constructor, but this doesn't seem to have any effect. Any advice?",
            "2020-08-23",
            "Jack"
        ),
        News(
            "LinearLayout中间布局填充出现的问题",
            "线性布局如何中间填充，会挤掉他下面的布局，所以中间填充使用layout_weight属性。",
            "2018-03-16",
            "sb"
        )
    )

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
        setContentView(binding.root)
    }

    fun getNewsdata(): List<News> {
        return newsData
    }


}