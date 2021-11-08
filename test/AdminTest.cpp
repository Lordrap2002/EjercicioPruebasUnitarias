//
// Created by lufe0 on 3/11/2021.
//
#include "gtest/gtest.h"
#include "../src/Model/Admin.h"

TEST(AdminTest, recaudarAdmin){
    Admin prueba;
    EXPECT_EQ(22610,prueba.recaudarAdmin());
}

TEST(AdminTest, mostrarPagoAdmin){
    Propiedad propiedadPrueba(1,  8, 160,  false);
    Fundador fundadorPrueba("Santiago", 1,propiedadPrueba);
    EXPECT_EQ(16105,fundadorPrueba.calcularPagoAdmin(100));
}

TEST(AdminTest, mostrarBeneficios){
    Admin prueba;
    string texto = "1. Descuento el 0,05 en la mensualidad del gimnasio.\n";
    EXPECT_EQ(texto,prueba.mostrarBeneficios(3));
}

TEST(AdminTest, mostrarPropParqueadero){
    Admin prueba;
    string texto = "nombre\njuana\njuanito\njuanpa\n";
    EXPECT_EQ(texto, prueba.mostrarPropParqueadero());
}

TEST(AdminTest, cambiarTipoPropietario){
    Admin prueba;
    prueba.cambiarTipoPropietario(5, 7, "Santiago");
    EXPECT_EQ(7, prueba.getPropietarios()[5]->getId());
}

TEST(AdminTest, mostrarBeneficiosExcep){
    Admin prueba;
    EXPECT_THROW(prueba.mostrarBeneficios(10), std::domain_error);
}

TEST(AdminTest, cambiarTipoPropietarioExcep){
    Admin prueba;
    EXPECT_THROW(prueba.cambiarTipoPropietario(10, 7, "Santiago"), std::domain_error);
}