 import java.util.*;
 class Employee{
    String name,designation,department;
     int salary;
     Employee(){
         name=designation=department="";
         salary=0;
     }
     Employee(String namee,String designationn,String departmentt){
         name=namee;
         designation=designationn;
         department=departmentt;
         if(designation=="a"){
             salary=1;
         }
        else if(designation=="b"){
             salary=2;
         }else
         salary=3;
     }
     Employee(String namee,String designationn,String departmentt, int salaryy){
         name=namee;
        designation=designationn;
         department=departmentt;
         salary=salaryy;
     }
     void display(){
         System.out.println("Employee name= "+name+"\nDepartment= "+department+"\ndesignation= "+designation+"\nsalary= "+salary);
     }
 }
 class class1{
     public static void main(String[] args){
         Scanner sc=new Scanner(System.in);
         Employee obj[] = {new Employee(),new Employee("b","b","b"), new Employee("a","a","a",10)};
         obj[0].display();
         obj[1].display();
         obj[2].display();
     }
 }
