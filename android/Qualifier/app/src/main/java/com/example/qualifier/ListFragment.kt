package com.example.qualifier

import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.example.qualifier.databinding.ContentFragBinding
import com.example.qualifier.databinding.ListFragBinding
import com.example.qualifier.databinding.ListItemBinding

class ListFragment : Fragment() {
    private var _binding: ListFragBinding? = null
    private val binding get() = _binding!!
    private var isTablet: Boolean = false

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View {
        _binding = ListFragBinding.inflate(inflater, container, false)

        binding.rv.layoutManager = LinearLayoutManager(activity)
        binding.rv.adapter = MyAdapter((activity as MainActivity).getNewsdata())

        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
    }


    inner class MyAdapter(val data: List<News>) : RecyclerView.Adapter<Holder>() {
        override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): Holder {
            val holder = Holder(
                ListItemBinding.inflate(
                    LayoutInflater.from(parent.context),
                    parent,
                    false
                )
            )
            return holder
        }

        override fun onBindViewHolder(holder: Holder, position: Int) {
            val item = data[position]
            isTablet = activity?.findViewById<View>(R.id.contentfg) != null

            if (isTablet) {
                holder.root.setOnClickListener {
                    val manager = activity?.supportFragmentManager
                    val fragment = manager?.findFragmentById(R.id.contentfg) as ContentFragment
                    fragment.refresh(item.title, item.writer, item.date, item.content)
                }
            } else {
                holder.root.setOnClickListener {
                    activity?.let { it1 -> ContentActivity.actionStart(it1, item) }
                }
            }
            holder.avatar.setImageResource(item.avatar)
            holder.content.text = item.content
            holder.date.text = item.date
            holder.title.text = item.title
        }

        override fun getItemCount(): Int {
            return data.size
        }
    }

    inner class Holder(binding: ListItemBinding) : RecyclerView.ViewHolder(binding.root) {
        val avatar = binding.itemAvatar
        val title = binding.itemTitle
        val content = binding.itemText
        val date = binding.itemDate
        val root: View = binding.root
    }


    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }
}