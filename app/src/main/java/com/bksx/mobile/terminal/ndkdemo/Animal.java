package com.bksx.mobile.terminal.ndkdemo;

/**
 * @author :qlf
 */
public class Animal {
   protected String name;
   public static int num;

   public Animal(String name){
      this.name = name;
   }

   public String getName() {
      return name;
   }

   public void setName(String name) {
      this.name = name;
   }

   public static int getNum() {
      return num;
   }

   public static void setNum(int num) {
      Animal.num = num;
   }
   // c++ 调用java实例
   public void callInstanceMethod(int num){

   }
   // c++ 调用java类的方法
   public static String callStaticMethod(String str){
      if (str != null){

      }else {

      }
   }

   public static String callStaticMethod(String[] str,int num){

   }
}
