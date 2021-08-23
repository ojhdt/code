package com.example.fragmenttest

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.Toast
import androidx.fragment.app.Fragment
import com.example.fragmenttest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private val fragmentManager = supportFragmentManager
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)
        val fragment = fragmentManager.findFragmentById(R.id.left_fragment) as LeftFragment
        fragment.changeText("BBBB")
    }


    fun replaceFragment() {
        val transaction = fragmentManager.beginTransaction()
        transaction.replace(R.id.right_container, RightFragment())
        transaction.addToBackStack(null)
        transaction.commit()
    }
}