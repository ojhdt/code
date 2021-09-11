package com.example.permission

import android.content.pm.PackageManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.ContactsContract
import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.example.permission.databinding.ActivityMainBinding
import com.example.permission.databinding.ListItemBinding

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding
    val contactList = ArrayList<Person>()
    val adapter = MyAdapter(contactList)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
        setContentView(binding.root)

        if (ContextCompat.checkSelfPermission(
                this,
                android.Manifest.permission.READ_CONTACTS
            ) != PackageManager.PERMISSION_GRANTED
        ) {
            ActivityCompat.requestPermissions(
                this,
                arrayOf(android.Manifest.permission.READ_CONTACTS),
                1
            )
        } else {
            getContact()
        }

        binding.rv.layoutManager = LinearLayoutManager(this)
        binding.rv.adapter = adapter
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    ) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        when(requestCode){
            1->{
                if(grantResults.isNotEmpty() && grantResults[0] == PackageManager.PERMISSION_GRANTED){
                    getContact()
                }
            }
        }
    }

    inner class MyAdapter(val list: List<Person>) : RecyclerView.Adapter<Holder>() {
        override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): Holder {
            val holder = Holder(ListItemBinding.inflate(LayoutInflater.from(parent.context)))
            return holder
        }

        override fun onBindViewHolder(holder: Holder, position: Int) {
            val item = list[position]
            holder.name.text = item.name
            holder.number.text = item.number
        }

        override fun getItemCount(): Int {
            return list.size
        }
    }

    inner class Holder(binding: ListItemBinding) : RecyclerView.ViewHolder(binding.root) {
        val name = binding.name
        val number = binding.number
    }

    fun getContact() {
        contentResolver.query(
            ContactsContract.CommonDataKinds.Phone.CONTENT_URI,
            null,
            null,
            null,
            null
        )?.apply {
            while (moveToNext()) {
                contactList.add(
                    Person(
                        getString(getColumnIndex(ContactsContract.CommonDataKinds.Phone.DISPLAY_NAME)),
                        getString(getColumnIndex(ContactsContract.CommonDataKinds.Phone.NUMBER))
                    )
                )

            }
            close()
            adapter.notifyDataSetChanged()
        }
    }
}