#include<iostream>
using namespace std;
double areaOfTriangle( double a,double b){
double area = 0.5 * a * b;
return area;
}
int main(){
    double a = 20 ;
    double b =30 ;
    double area_Of_triangle = areaOfTriangle(a,b);
    std::cout<<area_Of_triangle<<std::endl;
    return 0;
}
// python
def area_Of_triangle();
   area = 0.5 * a * b
   print(area)
   return area

area_Of_triangle(20,30);

//js
function area_Of_triangle(a,b){
    let area = 0.5 * a * b;
    return area;
}

let a = 20;
let b = 30;
let area_Of_triangle = area_Of_triangle(a,b);
console.log(area_Of_triangle);

// rust 
fn area_Of_triangle(a: f64, b: f64) -> f64 {
   return 0.5 * a * b;
}

fn main() {
   let a = 20.0;
   let b = 30.0;
   let area_Of_triangle = area_Of_triangle(a,b);
   println!("Area of triangle: {}", area_Of_triangle);
}
//c
#include<stdio.h>

float area_Of_triangle(float a,float b){
    return 0.5 * a * b;
}

int main(){
    float a = 20;
    float b = 30;
    float area_Of_triangle = area_Of_triangle(a,b);
    printf("Area of triangle: %f\n", area_Of_triangle);
}
//zig
fn area_Of_triangle(a: f32, b: f32) -> f32 {
   return 0.5 * a * b;
}

fn main() {
   let a = 20.0;
   let b = 30.0;
   let area_Of_triangle = area_Of_triangle(a,b);
   println!("Area of triangle: {}", area_Of_triangle);
}
// java
public class Main {
    public static double area_Of_triangle(double a, double b) {
        return 0.5 * a * b;
    }

    public static void main(String[] args) {
        double a = 20;
        double b = 30;
        double triangle_area = area_Of_triangle(a, b);
        System.out.println("Area of triangle: " + triangle_area);
    }
}
//c#
using System;

public class Main {
    public static double area_Of_triangle(double a, double b) {
        return 0.5 * a * b;
    }

    public static void Main(string[] args) {
        double a = 20;
        double b = 30;
        double triangle_area = area_Of_triangle(a, b);
        Console.WriteLine("Area of triangle: " + triangle_area);
    }
}
//gleam
import gleam/float

pub fn area_Of_triangle(a: Float, b: Float) -> Float {
   return 0.5 * a * b
}

pub fn main() {
    let a = 20.0
    let b = 30.0
    let triangle_area = area_Of_triangle(a, b)
    println("Area of triangle: {triangle_area}")
}

//go
package main

import (
	"fmt"
)

func area_Of_triangle(a, b float64) float64 {
    return 0.5 * a * b
}

func main() {
    a := 20.0
    b := 30.0
    triangle_area := area_Of_triangle(a, b)
    fmt.Println("Area of triangle:", triangle_area)
}
//swift
func area_Of_triangle(a: Double, b: Double) -> Double {
    return 0.5 * a * b
}

func main() {
    let a = 20.0
    let b = 30.0
    let triangle_area = area_Of_triangle(a, b)
    print("Area of triangle: \(triangle_area)")
}
//kotlin
fun area_Of_triangle(a: Double, b: Double): Double {
    return 0.5 * a * b
}

fun main() {
    val a = 20.0
    val b = 30.0
    val triangle_area = area_Of_triangle(a, b)
    println("Area of triangle: $triangle_area")
}
//c3 
import std::io;
fn double area_Of_triangle(double a, double b){
    return 0.5 * a * b;
}

fn  void main(){
    double triangle_area = area_Of_triangle(a:20,b:30);
   io::printfn("area of a triangle is, %.3f", triangle_area);
}