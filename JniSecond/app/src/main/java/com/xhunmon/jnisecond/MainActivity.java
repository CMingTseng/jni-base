package com.xhunmon.jnisecond;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.tv);
        tv.setText(stringHui()+intCal(5));
    }

    public native String stringHui();
    public native int intCal(int n);

    static {
        System.loadLibrary("hui");
//        System.loadLibrary("cal");
    }

}
