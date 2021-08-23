package com.example.helloworld

import android.content.Context
import android.util.AttributeSet
import android.view.LayoutInflater
import android.view.View
import android.widget.RelativeLayout
import kotlinx.android.synthetic.main.button.view.*

class SubmitBlock(context:Context, attr:AttributeSet): RelativeLayout(context, attr), View.OnClickListener {
    init {
        LayoutInflater.from(context).inflate(R.layout.button, this)
        button.setOnClickListener(this)
    }

    override fun onClick(v: View?) {
        when(v?.id){
            R.id.button -> {
                displayArea.text = inputEditText.text
            }
        }
    }
}