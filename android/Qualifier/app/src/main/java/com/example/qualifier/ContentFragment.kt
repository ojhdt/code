package com.example.qualifier

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import com.example.qualifier.databinding.ContentFragBinding

class ContentFragment : Fragment() {
    private var _binding: ContentFragBinding? = null
    private val binding get() = _binding!!
    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = ContentFragBinding.inflate(inflater, container, false)
        return binding.root
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }

    fun refresh(
        title: String,
        writer: String,
        date: String,
        content: String,
        avatar: Int = R.drawable.annmorous
    ) {
        binding.run {
            contentTitle.text = title
            contentWriter.text = writer
            contentDate.text = date
            contentText.text = content
            contentAvatar.setImageResource(avatar)
        }
    }
}