package com.example.tanujrohilla.login;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View.*;
import android.view.*;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import java.util.Random;


public class MainActivity extends AppCompatActivity implements OnClickListener {

    Button b=null;
    Random r=new Random();
    EditText e1=null;
    EditText e2=null;
    TextView t=null;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        b=(Button)findViewById(R.id.button);
        e1=(EditText)findViewById(R.id.editText1);
        e2=(EditText)findViewById(R.id.editText2);
        t=(TextView)findViewById(R.id.edit);
        b.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {

        String temp1=e1.getText().toString();
        String temp2=e2.getText().toString();
        e1.setText("");
        e2.setText("");
        t.setText("");
        if(r.nextBoolean()==true && !temp1.equals("")  && !temp2.equals(""))
        {
            startActivity(new Intent(MainActivity.this,activity2.class));

        }

        else
        {
            t.setText("Invalid username and password");
            e1.setText("");
            e2.setText("");
        }


    }
}
