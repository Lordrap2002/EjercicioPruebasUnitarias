if(EXISTS "C:/Santi/Jave/Semestre3/POO/Ejercicios/AltosNizaPruebasCompleto/cmake-build-debug/test/niza_full_test[1]_tests.cmake")
  include("C:/Santi/Jave/Semestre3/POO/Ejercicios/AltosNizaPruebasCompleto/cmake-build-debug/test/niza_full_test[1]_tests.cmake")
else()
  add_test(niza_full_test_NOT_BUILT niza_full_test_NOT_BUILT)
endif()