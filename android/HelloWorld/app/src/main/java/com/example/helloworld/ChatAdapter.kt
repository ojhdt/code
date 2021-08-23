package com.example.helloworld

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class ChatAdapter(val context: Context, val data: ArrayList<Msg>) :
    RecyclerView.Adapter<RecyclerView.ViewHolder>() {
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): RecyclerView.ViewHolder {
        return if (viewType == 0) {
            ViewHolderRight(LayoutInflater.from(context).inflate(R.layout.chat_right, null))
        } else {
            ViewHolderLeft(LayoutInflater.from(context).inflate(R.layout.chat_left, null))
        }
    }

    override fun onBindViewHolder(holder: RecyclerView.ViewHolder, position: Int) {
        val item = data[position]
        when(holder){
            is ViewHolderLeft -> {
                holder.avatar_left.setImageResource(item.avatar)
                holder.name_left.text = item.name
                holder.content_left.text = item.content
            }
            is ViewHolderRight -> {
                holder.avatar_right.setImageResource(item.avatar)
                holder.name_right.text = item.name
                holder.content_right.text = item.content
            }
            else -> {}
        }
    }

    override fun getItemCount(): Int {
        return data.size
    }

    override fun getItemViewType(position: Int): Int {
        return data[position].type
    }

    inner class ViewHolderLeft(view: View) : RecyclerView.ViewHolder(view) {
        val avatar_left = view.findViewById<ImageView>(R.id.avatar_left)
        val name_left = view.findViewById<TextView>(R.id.name_left)
        val content_left = view.findViewById<TextView>(R.id.content_left)
    }

    inner class ViewHolderRight(view: View) : RecyclerView.ViewHolder(view) {
        val avatar_right = view.findViewById<ImageView>(R.id.avatar_right)
        val name_right = view.findViewById<TextView>(R.id.name_right)
        val content_right = view.findViewById<TextView>(R.id.content_right)
    }
}