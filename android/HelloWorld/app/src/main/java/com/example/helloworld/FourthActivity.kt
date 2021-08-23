package com.example.helloworld

import android.content.Context
import android.content.DialogInterface
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Toast
import androidx.appcompat.app.AlertDialog
import androidx.core.content.ContextCompat.startActivity
import kotlinx.android.synthetic.main.activity_fourth.*

class FourthActivity : AppCompatActivity(), View.OnClickListener {
    private var isProgessBarVisible: Boolean = true
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_fourth)
        supportActionBar?.hide()

        button1.setOnClickListener(this)
        button2.text = "Hide"
        button2.setOnClickListener(this)
        button3.setOnClickListener(this)
        button4.setOnClickListener(this)
    }

    override fun onClick(v: View?) {
        when (v?.id) {
            R.id.button1 -> img1.setImageResource(R.drawable.img2)
            R.id.button2 -> {
                if (isProgessBarVisible) {
                    isProgessBarVisible = false
                    pgBar1.visibility = View.INVISIBLE
                    button2.text = "Show"
                } else {
                    isProgessBarVisible = true
                    pgBar1.visibility = View.VISIBLE
                    button2.text = "Hide"
                }
            }
            R.id.button3 -> pgBar1.let {
                if (it.progress < 100)
                    it.progress = it.progress + 10 else it.progress = 0
            }
            R.id.button4 -> {
                AlertDialog.Builder(this)
                    .apply {
                        setTitle("Title")
                        setMessage("Some message")
                        setCancelable(true)
                        setPositiveButton("OK") { dialogInterface: DialogInterface, i: Int ->
                            Toast.makeText(this@FourthActivity, "OK", Toast.LENGTH_SHORT).show()
                        }
                        setNegativeButton("Cancel") { dialogInterface: DialogInterface, i: Int ->
                            Toast.makeText(this@FourthActivity, "Cancel", Toast.LENGTH_SHORT).show()
                        }
                        setNeutralButton("Ignore") { dialogInterface: DialogInterface, i: Int ->
                            Toast.makeText(this@FourthActivity, "Ignore", Toast.LENGTH_SHORT).show()
                        }
                    }.show()
            }
        }
    }

    companion object {
        fun actionStart(context: Context) {
            val intent = Intent(context, FourthActivity::class.java)
            context.startActivity(intent)
        }
    }
}