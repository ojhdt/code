package com.example.navigation

import androidx.lifecycle.ViewModelProvider
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.TextView
import android.widget.Toast
import androidx.fragment.app.activityViewModels
import androidx.lifecycle.ViewModel

class ForthFragment : Fragment() {

    companion object {
        fun newInstance() = ForthFragment()
    }

    private val viewModel: ForthViewModel by activityViewModels<ForthViewModel>()

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        return inflater.inflate(R.layout.forth_fragment, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val button2: Button? = activity?.findViewById(R.id.button2)
        val text: TextView? = activity?.findViewById(R.id.textView2)
        viewModel.num.observe(viewLifecycleOwner) {
            text?.text = viewModel.num.value.toString()
            Toast.makeText(activity, "text changed", Toast.LENGTH_SHORT).show()
        }

        button2?.setOnClickListener {
            viewModel.setNum(viewModel.num.value?.let { it + 1 } ?: 0)
        }
    }

}