package com.mirakulo.astrotv_dtv_connector;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'libAstroTV_DTV_Connector.so' library on application startup.
    static {
        System.loadLibrary("native-lib");
        // 1
        //System.loadLibrary("AstroTV_DTV_Connector");
        // 2
        //System.load("/data/app/com.mirakulo.astrotv_dtv_connector/lib/x86_64/libAstroTV_DTV_.so");
        // 3
        //System.load("/home/mirakulo/Projects/Android-NDK-Projects/AstroTV_DTV_Connector/obj/local/x86_64/libAstroTV_DTV_Connector.so");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Calling
        android.util.Log.d("MIRAKULO", "CALLING onCreate()");

        // Example of a call to a native method
        TextView tv = findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());
        android.util.Log.d("MIRAKULO", "stringFromJNI() returned : " + tv.getText());

        // Return
        android.util.Log.d("MIRAKULO", "RETURN onCreate()");
    }

    /**
     * A native method that is implemented by the 'libAstroTV_DTV_Connector.so' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}
