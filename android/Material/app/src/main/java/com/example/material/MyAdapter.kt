package com.example.material

import android.content.Context
import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import com.example.material.databinding.MdCardBinding

class MyAdapter(val context:Context, val list: ArrayList<Fruit>) : RecyclerView.Adapter<MyAdapter.Holder>() {
    inner class Holder(binding: MdCardBinding) : RecyclerView.ViewHolder(binding.root) {
        val img = binding.image
        val name = binding.fruitName
        val des = binding.fruitDescription
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): Holder {
        val binding = MdCardBinding.inflate(LayoutInflater.from(parent.context))
        return Holder(binding)
    }

    override fun onBindViewHolder(holder: Holder, position: Int) {
        val item:Fruit = list[position]
//        holder.img.setImageResource(R.drawable.apple)
        Glide.with(context).load(item.img).into(holder.img)
        holder.name.text = item.name
        holder.des.text = item.description
    }

    override fun getItemCount(): Int {
        return list.size
    }
}