package com.example.fragmenttest

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.fragment.app.Fragment
import com.example.fragmenttest.databinding.FragmentLeftBinding

class LeftFragment : Fragment() {
    private var _binding: FragmentLeftBinding? = null
    private val binding get() = _binding!!
    private lateinit var mainActivity: MainActivity

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        _binding = FragmentLeftBinding.inflate(inflater, container, false)
        if (activity != null) {
            mainActivity = activity as MainActivity
        }
        binding.replaceBtn.setOnClickListener {
            mainActivity.replaceFragment()
        }
        return binding.root
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }

    fun changeText(text:String?){
        binding.replaceBtn.text = text?:"null"
    }

}