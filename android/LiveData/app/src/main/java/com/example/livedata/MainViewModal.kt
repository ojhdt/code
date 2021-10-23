package com.example.livedata

import android.util.Log
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.Transformations
import androidx.lifecycle.ViewModel

class MainViewModal : ViewModel() {
    private val tempLiveData = MutableLiveData<Int>()
    private val _counter = MutableLiveData<Int>()
    val observeLiveData: LiveData<Int> =
        Transformations.switchMap(tempLiveData) { value -> DataBase.getData(value) }
    val counter: MutableLiveData<Int>
        get() {
            return _counter
        }

    fun clear() {
        _counter.value = 0
    }

    fun add(num: Int) {
        val count = _counter.value ?: 0
        _counter.value = count + num
    }

    fun setValue(num: Int) {
        Log.d("random", "step2 $num")
        tempLiveData.value = num
    }
}

object DataBase {
    fun getData(id: Int): LiveData<Int> {
        val data = MutableLiveData<Int>()
        data.value = id
        Log.d("random", id.toString())
        return data
    }
}