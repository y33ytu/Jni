package com.example.jni;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

	static {
		System.loadLibrary("hello-jni");
	}

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		TextView text = (TextView) findViewById(R.id.text_id);
		text.setText(MyInterface.stringTestNdk());
	}

}
