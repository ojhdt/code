package com.example.helloworld

import android.content.Intent
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.PersistableBundle
import android.util.Log
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        Log.d("MainActivity", this.toString())

        val savedString = savedInstanceState?.getString("key") ?: "Empty"
        Toast.makeText(this, savedString, Toast.LENGTH_SHORT).show()

//        val button1 = findViewById<Button>(R.id.button1)
        button1.setOnClickListener {
            Toast.makeText(this, "HelloWorld", Toast.LENGTH_SHORT).show()
        }

        button2.setOnClickListener {
            val data = "Hello SecondActivity!"
            val intent = Intent(this, SecondActivity::class.java)
            intent.putExtra("extra_data", data)
            startActivityForResult(intent, 1)
        }

        button3.setOnClickListener {
            val intent = Intent(Intent.ACTION_VIEW)
            intent.data = Uri.parse("https://blog.ojhdt.com")
            startActivity(intent)
        }

        button4.setOnClickListener {
            val intent = Intent(Intent.ACTION_DIAL)
            intent.data = Uri.parse("tel:10086")
            startActivity(intent)
        }

        button5.setOnClickListener {
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }

        button6.setOnClickListener {
            ThirdActivity.actionStart(this, "textFromMainActivity")
        }

        button7.setOnClickListener {
            FourthActivity.actionStart(this)
        }

        button8.setOnClickListener {
            FifthActivity.actionStart(this)
        }

        button9.setOnClickListener {
            SixthActivity.actionStart(this)
        }

        button10.setOnClickListener {
            SeventhActivity.actionStart(this)
        }

        button11.setOnClickListener {
            RecyclerViewActivity.actionStart(this)
        }

    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.main, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when (item.itemId) {
            R.id.item1 -> Toast.makeText(this, "Item1 Pressed", Toast.LENGTH_SHORT).show()
            R.id.item2 -> Toast.makeText(this, "Item2 Pressed", Toast.LENGTH_SHORT).show()
        }
        return true
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        Toast.makeText(
            this,
            "requestCode:${requestCode},resultcode:${resultCode},data:${data?.getStringExtra("data_return")}",
            Toast.LENGTH_SHORT
        ).show()
    }

    override fun onSaveInstanceState(outState: Bundle, outPersistentState: PersistableBundle) {
        super.onSaveInstanceState(outState, outPersistentState)
        outState.putString("string", "Some Text")
    }
}