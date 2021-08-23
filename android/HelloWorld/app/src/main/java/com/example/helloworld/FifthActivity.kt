package com.example.helloworld

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.ArrayAdapter
import kotlinx.android.synthetic.main.activity_fifth.*

class FifthActivity : AppCompatActivity(), View.OnClickListener {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_fifth)

        val data = ArrayList<String>()
        data.apply {
            add("apple")
            add("banana")
            add("peach")
            add("melon")
        }

        val adapter = ArrayAdapter<String>(this, android.R.layout.simple_list_item_1,data)
        listView.adapter = adapter
    }

    override fun onClick(v: View?) {

    }

    companion object {
        fun actionStart(context: Context) {
            val intent = Intent(context, FifthActivity::class.java)
            context.startActivity(intent)
        }
    }
}
