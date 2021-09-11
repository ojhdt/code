package com.example.material

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.LayoutInflater
import android.view.Menu
import android.view.MenuItem
import android.widget.Toast
import androidx.core.view.GravityCompat
import androidx.recyclerview.widget.GridLayoutManager
import com.example.material.databinding.ActivityMainBinding
import com.google.android.material.snackbar.Snackbar
import kotlin.concurrent.thread

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
        setContentView(binding.root)
        setSupportActionBar(binding.actionBar)
        supportActionBar?.let {
            it.setDisplayHomeAsUpEnabled(true)
            it.setHomeAsUpIndicator(R.drawable.ic_baseline_menu_24)
        }
        binding.nav.setCheckedItem(R.id.nav_send)
        binding.nav.setNavigationItemSelectedListener {
            when (it.itemId) {
                R.id.nav_send -> Snackbar.make(binding.floatbtn, "send", Snackbar.LENGTH_SHORT)
                    .show()
                R.id.nav_setting -> Snackbar.make(
                    binding.floatbtn,
                    "setting",
                    Snackbar.LENGTH_SHORT
                ).show()
                R.id.nav_search -> Snackbar.make(binding.floatbtn, "search", Snackbar.LENGTH_SHORT)
                    .show()
            }
            binding.drawerlayout.closeDrawer(GravityCompat.START)
            true
        }
        binding.floatbtn.setOnClickListener {
            Snackbar.make(
                binding.floatbtn,
                "Float Btn",
                Snackbar.LENGTH_SHORT
            ).show()
        }
        binding.rv.layoutManager = GridLayoutManager(this, 2)

        val list = ArrayList<Fruit>()
        initFruitList(list)
        val adapter = MyAdapter(this, list)
        binding.rv.adapter = adapter
        binding.sw.setColorSchemeResources(R.color.design_default_color_primary)
        binding.sw.setOnRefreshListener {
            thread {
                Thread.sleep(1000)
                runOnUiThread {
                    initFruitList(list)
                    adapter.notifyDataSetChanged()
                    binding.sw.isRefreshing = false
                }
            }
        }
    }

    fun initFruitList(list: ArrayList<Fruit>) {
        val fruits = listOf<Fruit>(
            Fruit(
                R.drawable.apple,
                "Apple",
                "An apple is an edible fruit produced by an apple tree (Malus domestica)"
            ),
            Fruit(
                R.drawable.banana,
                "Banana",
                "A banana is an elongated, edible fruit – botanically a berry – produced by several kinds of large herbaceous flowering plants in the genus Musa."
            ),
            Fruit(
                R.drawable.cherry,
                "Cherry",
                "A cherry is the fruit of many plants of the genus Prunus, and is a fleshy drupe (stone fruit)."
            ),
            Fruit(
                R.drawable.grape,
                "Grape",
                "A grape is a fruit, botanically a berry, of the deciduous woody vines of the flowering plant genus Vitis."
            ),
            Fruit(
                R.drawable.orange,
                "Orange",
                "The orange is the fruit of various citrus species in the family Rutaceae (see list of plants known as orange); it primarily refers to Citrus × sinensis,[1] which is also called sweet orange, to distinguish it from the related Citrus × aurantium, referred to as bitter orange."
            ),
            Fruit(
                R.drawable.pear,
                "Pear",
                "Pears are fruits produced and consumed around the world, growing on a tree and harvested in the Northern Hemisphere in late summer into October."
            )
        )
        list.clear()
        repeat(50) {
            list.add(fruits[(0 until fruits.size).random()])
        }
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.toolbar, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when (item.itemId) {
            R.id.send -> Toast.makeText(this, "send", Toast.LENGTH_SHORT).show()
            R.id.setting -> Toast.makeText(this, "setting", Toast.LENGTH_SHORT).show()
            R.id.search -> Toast.makeText(this, "search", Toast.LENGTH_SHORT).show()
            android.R.id.home -> binding.drawerlayout.openDrawer(GravityCompat.START)
        }
        return true
    }
}