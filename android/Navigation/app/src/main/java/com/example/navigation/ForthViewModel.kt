package com.example.navigation

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel

class ForthViewModel : ViewModel() {
    // TODO: Implement the ViewModel
    val num: MutableLiveData<Int> = MutableLiveData(0)

    fun setNum(num:Int){
        this.num.setValue(num)
    }
}