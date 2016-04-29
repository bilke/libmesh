#ifndef _INCLUDE_LIBMESH_CONFIG_H
#define _INCLUDE_LIBMESH_CONFIG_H 1

/* include/libmesh_config.h. Generated automatically at end of configure. */
/* include/libmesh_config.h.tmp.  Generated from libmesh_config.h.in by configure.  */
/* include/libmesh_config.h.in.  Generated from configure.ac by autoheader.  */

/* definition of the final detected hash type */
#ifndef LIBMESH_BEST_HASH
#define LIBMESH_BEST_HASH std::hash
#endif

/* definition of the final detected unordered_map type */
#ifndef LIBMESH_BEST_UNORDERED_MAP
#define LIBMESH_BEST_UNORDERED_MAP std::unordered_map
#endif

/* definition of the final detected unordered_multimap type */
#ifndef LIBMESH_BEST_UNORDERED_MULTIMAP
#define LIBMESH_BEST_UNORDERED_MULTIMAP std::unordered_multimap
#endif

/* definition of the final detected unordered_multiset type */
#ifndef LIBMESH_BEST_UNORDERED_MULTISET
#define LIBMESH_BEST_UNORDERED_MULTISET std::unordered_multiset
#endif

/* definition of the final detected unordered_set type */
#ifndef LIBMESH_BEST_UNORDERED_SET
#define LIBMESH_BEST_UNORDERED_SET std::unordered_set
#endif

/* size of boundary_id */
#ifndef LIBMESH_BOUNDARY_ID_BYTES
#define LIBMESH_BOUNDARY_ID_BYTES 2
#endif

/* This compiler is known not to support some iostream functionality */
/* #undef BROKEN_IOSTREAM */

/* Architecture of the build host */
#ifndef LIBMESH_BUILD_ARCH
#define LIBMESH_BUILD_ARCH "x86_64-apple-darwin15.4.0"
#endif

/* Build date */
#ifndef LIBMESH_BUILD_DATE
#define LIBMESH_BUILD_DATE __DATE__ " " __TIME__
#endif

/* Dev/Release build */
#ifndef LIBMESH_BUILD_DEVSTATUS
#define LIBMESH_BUILD_DEVSTATUS "Development Build"
#endif

/* Build host name */
#ifndef LIBMESH_BUILD_HOST
#define LIBMESH_BUILD_HOST "vismac03-2.intranet.ufz.de"
#endif

/* The fine user who built the package */
#ifndef LIBMESH_BUILD_USER
#define LIBMESH_BUILD_USER "bilke"
#endif

/* SVN revision */
#ifndef LIBMESH_BUILD_VERSION
#define LIBMESH_BUILD_VERSION "3c334ff7523fbb4f65fa6cc5e4acc57bff50a91a"
#endif

/* define if the compiler has a broken errno_t */
#ifndef LIBMESH_COMPILER_HAS_BROKEN_ERRNO_T
#define LIBMESH_COMPILER_HAS_BROKEN_ERRNO_T 1
#endif

/* Configuration information. */
#ifndef LIBMESH_CONFIGURE_INFO
#define LIBMESH_CONFIGURE_INFO "./configure "
#endif

/* C++ compiler */
#ifndef LIBMESH_CXX
#define LIBMESH_CXX "mpicxx"
#endif

/* Flag indicating if double-precision (double) should be used for most
   floating-point calculations */
#ifndef LIBMESH_DEFAULT_DOUBLE_PRECISION
#define LIBMESH_DEFAULT_DOUBLE_PRECISION 1
#endif

/* Flag indicating if quadruple-precision (__float128) should be used for most
   floating-point calculations */
/* #undef DEFAULT_QUADRUPLE_PRECISION */

/* Data type to be used for most floating-point calculations */
#ifndef LIBMESH_DEFAULT_SCALAR_TYPE
#define LIBMESH_DEFAULT_SCALAR_TYPE double
#endif

/* Flag indicating if single-precision (float) should be used for most
   floating-point calculations */
/* #undef DEFAULT_SINGLE_PRECISION */

/* Flag indicating if triple-precision (long double) should be used for most
   floating-point calculations */
/* #undef DEFAULT_TRIPLE_PRECISION */

/* workaround for potentially missing hash<T*> */
#ifndef LIBMESH_DEFINE_HASH_POINTERS
#define LIBMESH_DEFINE_HASH_POINTERS /**/
#endif

/* workaround for potentially missing hash<string> */
#ifndef LIBMESH_DEFINE_HASH_STRING
#define LIBMESH_DEFINE_HASH_STRING /**/
#endif

/* PETSc's major version number, as detected by petsc.m4 */
/* #undef DETECTED_PETSC_VERSION_MAJOR */

/* PETSc's minor version number, as detected by petsc.m4 */
/* #undef DETECTED_PETSC_VERSION_MINOR */

/* PETSc release (1) or petsc-dev (0), as detected by petsc.m4 */
/* #undef DETECTED_PETSC_VERSION_RELEASE */

/* PETSc's subminor version number, as detected by petsc.m4 */
/* #undef DETECTED_PETSC_VERSION_SUBMINOR */

/* TBB's major version number, as detected by tbb.m4 */
/* #undef DETECTED_TBB_VERSION_MAJOR */

/* TBB's minor version number, as detected by tbb.m4 */
/* #undef DETECTED_TBB_VERSION_MINOR */

/* VTK's major version number, as detected by vtk.m4 */
/* #undef DETECTED_VTK_VERSION_MAJOR */

/* VTK's minor version number, as detected by vtk.m4 */
/* #undef DETECTED_VTK_VERSION_MINOR */

/* VTK's subminor version number, as detected by vtk.m4 */
/* #undef DETECTED_VTK_VERSION_SUBMINOR */

/* Integer indicating the highest spatial dimension supported by libMesh */
#ifndef LIBMESH_DIM
#define LIBMESH_DIM 3
#endif

/* Flag indicating if the library should disable libMesh::CommWorld */
#ifndef LIBMESH_DISABLE_COMMWORLD
#define LIBMESH_DISABLE_COMMWORLD 1
#endif

/* size of dof_id */
#ifndef LIBMESH_DOF_ID_BYTES
#define LIBMESH_DOF_ID_BYTES 4
#endif

/* Flag indicating if the library should be built with AMR support */
#ifndef LIBMESH_ENABLE_AMR
#define LIBMESH_ENABLE_AMR 1
#endif

/* Flag indicating if the library should use blocked matrix/vector storage */
/* #undef ENABLE_BLOCKED_STORAGE */

/* Flag indicating if the library should be built with Dirichlet boundary
   constraint support */
#ifndef LIBMESH_ENABLE_DIRICHLET
#define LIBMESH_ENABLE_DIRICHLET 1
#endif

/* Flag indicating if the library should be built to throw C++ exceptions on
   unexpected errors */
#ifndef LIBMESH_ENABLE_EXCEPTIONS
#define LIBMESH_ENABLE_EXCEPTIONS 1
#endif

/* Flag indicating if the library should use ghosted local vectors */
#ifndef LIBMESH_ENABLE_GHOSTED
#define LIBMESH_ENABLE_GHOSTED 1
#endif

/* Flag indicating if the library should offer higher order p-FEM shapes */
#ifndef LIBMESH_ENABLE_HIGHER_ORDER_SHAPES
#define LIBMESH_ENABLE_HIGHER_ORDER_SHAPES 1
#endif

/* Flag indicating if the library should be built with infinite elements */
/* #undef ENABLE_INFINITE_ELEMENTS */

/* Flag indicating if the library should be built with node constraints
   support */
/* #undef ENABLE_NODE_CONSTRAINTS */

/* Flag indicating if the library should compute and store node valence values
   */
#ifndef LIBMESH_ENABLE_NODE_VALENCE
#define LIBMESH_ENABLE_NODE_VALENCE 1
#endif

/* Flag indicating if the library should use the experimental ParallelMesh as
   its default Mesh type */
/* #undef ENABLE_PARMESH */

/* Flag indicating if the library should be built with performance logging
   support */
/* #undef ENABLE_PERFORMANCE_LOGGING */

/* Flag indicating if the library should be built with periodic boundary
   condition support */
#ifndef LIBMESH_ENABLE_PERIODIC
#define LIBMESH_ENABLE_PERIODIC 1
#endif

/* Flag indicating if the library should be built with reference counting
   support */
#ifndef LIBMESH_ENABLE_REFERENCE_COUNTING
#define LIBMESH_ENABLE_REFERENCE_COUNTING 1
#endif

/* Flag indicating if the library should be built with second derivatives */
#ifndef LIBMESH_ENABLE_SECOND_DERIVATIVES
#define LIBMESH_ENABLE_SECOND_DERIVATIVES 1
#endif

/* Flag indicating if the library should be built with compile time and date
   timestamps */
#ifndef LIBMESH_ENABLE_TIMESTAMPS
#define LIBMESH_ENABLE_TIMESTAMPS 1
#endif

/* Flag indicating if the library should be built to write stack trace files
   on unexpected errors */
/* #undef ENABLE_TRACEFILES */

/* Flag indicating if the library should be built with unique id support */
/* #undef ENABLE_UNIQUE_ID */

/* Flag indicating if the library should use a non-deprecated UniquePtr
   implementation */
#ifndef LIBMESH_ENABLE_UNIQUE_PTR
#define LIBMESH_ENABLE_UNIQUE_PTR 1
#endif

/* Flag indicating if the library should be built with variational smoother
   support */
#ifndef LIBMESH_ENABLE_VSMOOTHER
#define LIBMESH_ENABLE_VSMOOTHER 1
#endif

/* Flag indicating if the library should have warnings enabled */
#ifndef LIBMESH_ENABLE_WARNINGS
#define LIBMESH_ENABLE_WARNINGS 1
#endif

/* Enable fparser debugging functions */
/* #undef FPARSER_SUPPORT_DEBUGGING */

/* command to invoke gdb */
#ifndef LIBMESH_GDB_COMMAND
//#define LIBMESH_GDB_COMMAND "gdb"
#endif

/* define if the Boost library is available */
#ifndef LIBMESH_HAVE_BOOST
//#define LIBMESH_HAVE_BOOST /**/
#endif

/* Flag indicating bzip2/bunzip2 are available for handling compressed .bz2
   files */
#ifndef LIBMESH_HAVE_BZIP
//#define LIBMESH_HAVE_BZIP 1
#endif

/* Flag indicating whether the library will be compiled with CAPNPROTO support
   */
/* #undef HAVE_CAPNPROTO */

/* Define to 1 if you have the <csignal> header file. */
#ifndef LIBMESH_HAVE_CSIGNAL
//#define LIBMESH_HAVE_CSIGNAL 1
#endif

/* Flag indicating whether the library will be compiled with CURL support */
/* #undef HAVE_CURL */

/* define if the compiler supports basic C++11 syntax */
#ifndef LIBMESH_HAVE_CXX11
////#define LIBMESH_HAVE_CXX11 1
#endif

/* Flag indicating whether compiler supports alias declarations */
#ifndef LIBMESH_HAVE_CXX11_ALIAS_DECLARATIONS
////#define LIBMESH_HAVE_CXX11_ALIAS_DECLARATIONS 1
#endif

/* Compiler supports alias declarations, but they are disabled in libmesh */
/* #undef HAVE_CXX11_ALIAS_DECLARATIONS_BUT_DISABLED */

/* Flag indicating whether compiler supports the auto keyword */
#ifndef LIBMESH_HAVE_CXX11_AUTO
////#define LIBMESH_HAVE_CXX11_AUTO 1
#endif

/* Compiler supports auto keyword, but it is disabled in libmesh */
/* #undef HAVE_CXX11_AUTO_BUT_DISABLED */

/* Flag indicating whether compiler supports constexpr */
#ifndef LIBMESH_HAVE_CXX11_CONSTEXPR
////#define LIBMESH_HAVE_CXX11_CONSTEXPR 1
#endif

/* Compiler supports constexper, but it is disabled in libmesh */
/* #undef HAVE_CXX11_CONSTEXPR_BUT_DISABLED */

/* Flag indicating whether compiler supports decltype */
#ifndef LIBMESH_HAVE_CXX11_DECLTYPE
////#define LIBMESH_HAVE_CXX11_DECLTYPE 1
#endif

/* Compiler supports decltype, but it is disabled in libmesh */
/* #undef HAVE_CXX11_DECLTYPE_BUT_DISABLED */

/* Flag indicating whether compiler supports f() = delete; */
#ifndef LIBMESH_HAVE_CXX11_DELETED_FUNCTIONS
////#define LIBMESH_HAVE_CXX11_DELETED_FUNCTIONS 1
#endif

/* Compiler supports deleted functions, but they are disabled in libmesh */
/* #undef HAVE_CXX11_DELETED_FUNCTIONS_BUT_DISABLED */

/* Flag indicating whether compiler supports f() final; */
#ifndef LIBMESH_HAVE_CXX11_FINAL
////#define LIBMESH_HAVE_CXX11_FINAL 1
#endif

/* Compiler supports final keyword, but it is disabled in libmesh */
/* #undef HAVE_CXX11_FINAL_BUT_DISABLED */

/* Flag indicating whether compiler supports initializer lists */
#ifndef LIBMESH_HAVE_CXX11_INITIALIZER_LIST
////#define LIBMESH_HAVE_CXX11_INITIALIZER_LIST 1
#endif

/* Compiler supports initializer lists, but it is disabled in libmesh */
/* #undef HAVE_CXX11_INITIALIZER_LIST_BUT_DISABLED */

/* Flag indicating whether compiler supports std::acosh */
#ifndef LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_COSINE
////#define LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_COSINE 1
#endif

/* Compiler supports std::acosh, but it is disabled in libmesh */
/* #undef HAVE_CXX11_INVERSE_HYPERBOLIC_COSINE_BUT_DISABLED */

/* Flag indicating whether compiler supports std::acosh(complex) */
#ifndef LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_COSINE_COMPLEX
////#define LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_COSINE_COMPLEX 1
#endif

/* Compiler supports std::acosh(complex), but it is disabled in libmesh */
/* #undef HAVE_CXX11_INVERSE_HYPERBOLIC_COSINE_COMPLEX_BUT_DISABLED */

/* Flag indicating whether compiler supports std::asinh */
#ifndef LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_SINE
////#define LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_SINE 1
#endif

/* Compiler supports std::asinh, but it is disabled in libmesh */
/* #undef HAVE_CXX11_INVERSE_HYPERBOLIC_SINE_BUT_DISABLED */

/* Flag indicating whether compiler supports std::asinh(complex) */
#ifndef LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_SINE_COMPLEX
////#define LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_SINE_COMPLEX 1
#endif

/* Compiler supports std::asinh(complex), but it is disabled in libmesh */
/* #undef HAVE_CXX11_IN//VERSE_HYPERBOLIC_SINE_COMPLEX_BUT_DISABLED */

/* Flag indicating whether compiler supports std::atanh */
#ifndef LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_TANGENT
//#define LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_TANGENT 1
#endif

/* Compiler supports std::atanh, but it is disabled in libmesh */
/* #undef HAVE_CXX11_INVERSE_HYPERBOLIC_TANGENT_BUT_DISABLED */

/* Flag indicating whether compiler supports std::atanh(complex) */
#ifndef LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_TANGENT_COMPLEX
//#define LIBMESH_HAVE_CXX11_INVERSE_HYPERBOLIC_TANGENT_COMPLEX 1
#endif

/* Compiler supports std::atanh(complex), but it is disabled in libmesh */
/* #undef HAVE_CXX11_INVERSE_HYPERBOLIC_TANGENT_COMPLEX_BUT_DISABLED */

/* Flag indicating whether compiler supports lambdas */
#ifndef LIBMESH_HAVE_CXX11_LAMBDA
//#define LIBMESH_HAVE_CXX11_LAMBDA 1
#endif

/* Compiler supports lambdas, but they are disabled in libmesh */
/* #undef HAVE_CXX11_LAMBDA_BUT_DISABLED */

/* Flag indicating whether compiler supports std::move */
#ifndef LIBMESH_HAVE_CXX11_MOVE
//#define LIBMESH_HAVE_CXX11_MOVE 1
#endif

/* Compiler supports std::move, but it is disabled in libmesh */
/* #undef HAVE_CXX11_MOVE_BUT_DISABLED */

/* Flag indicating whether compiler supports nullptr */
#ifndef LIBMESH_HAVE_CXX11_NULLPTR
//#define LIBMESH_HAVE_CXX11_NULLPTR 1
#endif

/* Compiler supports nullptr, but it is disabled in libmesh */
/* #undef HAVE_CXX11_NULLPTR_BUT_DISABLED */

/* Flag indicating whether C++03 compatible nullptr workaround works */
/* #undef HAVE_CXX11_NULLPTR_WORKAROUND */

/* Flag indicating whether compiler supports the override keyword */
#ifndef LIBMESH_HAVE_CXX11_OVERRIDE
//#define LIBMESH_HAVE_CXX11_OVERRIDE 1
#endif

/* Compiler supports the override keyword, but it is disabled in libmesh */
/* #undef HAVE_CXX11_OVERRIDE_BUT_DISABLED */

/* Flag indicating whether compiler supports range-based for loops */
#ifndef LIBMESH_HAVE_CXX11_RANGEFOR
//#define LIBMESH_HAVE_CXX11_RANGEFOR 1
#endif

/* Compiler supports range-based for loops, but it is disabled in libmesh */
/* #undef HAVE_CXX11_RANGEFOR_BUT_DISABLED */

/* Flag indicating whether compiler supports std::regex */
#ifndef LIBMESH_HAVE_CXX11_REGEX
//#define LIBMESH_HAVE_CXX11_REGEX 1
#endif

/* Compiler supports std::regex, but it is disabled in libmesh */
/* #undef HAVE_CXX11_REGEX_BUT_DISABLED */

/* Flag indicating whether compiler supports rvalue references */
#ifndef LIBMESH_HAVE_CXX11_RVALUE_REFERENCES
//#define LIBMESH_HAVE_CXX11_RVALUE_REFERENCES 1
#endif

/* Compiler supports rvalue references, but they are disabled in libmesh */
/* #undef HAVE_CXX11_RVALUE_REFERENCES_BUT_DISABLED */

/* Flag indicating whether compiler supports std::shared_ptr */
#ifndef LIBMESH_HAVE_CXX11_SHARED_PTR
//#define LIBMESH_HAVE_CXX11_SHARED_PTR 1
#endif

/* Compiler supports std::shared_ptr, but it is disabled in libmesh */
/* #undef HAVE_CXX11_SHARED_PTR_BUT_DISABLED */

/* Flag indicating whether compiler supports std::thread */
/* #undef HAVE_CXX11_THREAD */

/* Compiler supports std::thread, but it is disabled in libmesh */
/* #undef HAVE_CXX11_THREAD_BUT_DISABLED */

/* Flag indicating whether compiler supports std::to_string() */
#ifndef LIBMESH_HAVE_CXX11_TO_STRING
//#define LIBMESH_HAVE_CXX11_TO_STRING 1
#endif

/* Compiler supports std::to_string(), but it is disabled in libmesh */
/* #undef HAVE_CXX11_TO_STRING_BUT_DISABLED */

/* Flag indicating whether compiler supports <type_traits> */
#ifndef LIBMESH_HAVE_CXX11_TYPE_TRAITS
//#define LIBMESH_HAVE_CXX11_TYPE_TRAITS 1
#endif

/* Compiler supports <type_traits>, but it is disabled in libmesh */
/* #undef HAVE_CXX11_TYPE_TRAITS_BUT_DISABLED */

/* Flag indicating whether compiler supports std::unique_ptr */
#ifndef LIBMESH_HAVE_CXX11_UNIQUE_PTR
////#define LIBMESH_HAVE_CXX11_UNIQUE_PTR 1
#endif

/* Compiler supports std::unique_ptr, but it is disabled in libmesh */
/* #undef HAVE_CXX11_UNIQUE_PTR_BUT_DISABLED */

/* Flag indicating whether compiler supports variadic templates */
#ifndef LIBMESH_HAVE_CXX11_VARIADIC_TEMPLATES
//#define LIBMESH_HAVE_CXX11_VARIADIC_TEMPLATES 1
#endif

/* Compiler supports variadic templates, but it is disabled in libmesh */
/* #undef HAVE_CXX11_VARIADIC_TEMPLATES_BUT_DISABLED */

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef LIBMESH_HAVE_DLFCN_H
#define LIBMESH_HAVE_DLFCN_H 1
#endif

/* define if the compiler supports dlopen/dlsym/dlclose */
#ifndef LIBMESH_HAVE_DLOPEN
#define LIBMESH_HAVE_DLOPEN 1
#endif

/* Flag indicating whether the library will be compiled with Eigen support */
#ifndef LIBMESH_HAVE_EIGEN
#define LIBMESH_HAVE_EIGEN 1
#endif

/* Define to 1 if you have the <Eigen/Dense> header file. */
#ifndef LIBMESH_HAVE_EIGEN_DENSE
//#define LIBMESH_HAVE_EIGEN_DENSE 1
#endif

/* Define to 1 if you have the <Eigen/Sparse> header file. */
#ifndef LIBMESH_HAVE_EIGEN_SPARSE
#define LIBMESH_HAVE_EIGEN_SPARSE 1
#endif

/* Flag indicating whether the library will be compiled with Exodus support */
#ifndef LIBMESH_HAVE_EXODUS_API
//#undef LIBMESH_HAVE_EXODUS_API // Bilke was 1
#endif

/* define if the compiler supports __gnu_cxx::hash */
/* #undef HAVE_EXT_HASH */

/* define if the compiler supports __gnu_cxx::hash_map */
/* #undef HAVE_EXT_HASH_MAP */

/* define if the compiler supports __gnu_cxx::hash_multimap */
/* #undef HAVE_EXT_HASH_MULTIMAP */

/* define if the compiler supports __gnu_cxx::hash_multiset */
/* #undef HAVE_EXT_HASH_MULTISET */

/* define if the compiler supports __gnu_cxx::hash_set */
/* #undef HAVE_EXT_HASH_SET */

/* define if the compiler supports fedisableexcept */
/* #undef HAVE_FEDISABLEEXCEPT */

/* define if the compiler supports feenableexcept */
/* #undef HAVE_FEENABLEEXCEPT */

/* Define to 1 if you have the <fenv.h> header file. */
#ifndef LIBMESH_HAVE_FENV_H
//#define LIBMESH_HAVE_FENV_H 1
#endif

/* Flag indicating whether the library will be compiled with FPARSER support
   */
#ifndef LIBMESH_HAVE_FPARSER
//#define LIBMESH_HAVE_FPARSER 1
#endif

/* Flag indicating whether FPARSER will build the full development version */
#ifndef LIBMESH_HAVE_FPARSER_DEVEL
//#define LIBMESH_HAVE_FPARSER_DEVEL 0
#endif

/* Flag indicating whether FPARSER will be built with JIT compilation enabled
   */
#ifndef LIBMESH_HAVE_FPARSER_JIT
//#define LIBMESH_HAVE_FPARSER_JIT 1
#endif

/* define if the compiler supports GCC C++ ABI name demangling */
#ifndef LIBMESH_HAVE_GCC_ABI_DEMANGLE
//#define LIBMESH_HAVE_GCC_ABI_DEMANGLE 1
#endif

/* Define to 1 if you have the <getopt.h> header file. */
#ifndef LIBMESH_HAVE_GETOPT_H
//#define LIBMESH_HAVE_GETOPT_H 1
#endif

/* Flag indicating if the library should be built with calls to getpwuid() */
#ifndef LIBMESH_HAVE_GETPWUID
//#define LIBMESH_HAVE_GETPWUID 1
#endif

/* define if the compiler supports glibc backtrace */
#ifndef LIBMESH_HAVE_GLIBC_BACKTRACE
//#define LIBMESH_HAVE_GLIBC_BACKTRACE 1
#endif

/* Flag indicating whether the library will be compiled with GLPK support */
/* #undef HAVE_GLPK */

/* Flag indicating whether the library will be compiled with GMV support */
#ifndef LIBMESH_HAVE_GMV
#undef LIBMESH_HAVE_GMV // BILKE was 1
#endif

/* Flag indicating whether or not gzstreams are available */
#ifndef LIBMESH_HAVE_GZSTREAM
#undef LIBMESH_HAVE_GZSTREAM // BILKE was 1
#endif

/* define if the compiler supports std::hash_map */
/* #undef HAVE_HASH_MAP */

/* define if the compiler supports std::hash_multimap */
/* #undef HAVE_HASH_MULTIMAP */

/* define if the compiler supports std::hash_multiset */
/* #undef HAVE_HASH_MULTISET */

/* define if the compiler supports std::hash_set */
/* #undef HAVE_HASH_SET */

/* Define if HDF5 is available */
/* #undef HAVE_HDF5 */

/* Flag indicating whether the library will be compiled with Howard Hinnant's
   C++03 unique_ptr implementation */
#ifndef LIBMESH_HAVE_HINNANT_UNIQUE_PTR
//#define LIBMESH_HAVE_HINNANT_UNIQUE_PTR 1
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef LIBMESH_HAVE_INTTYPES_H
#define LIBMESH_HAVE_INTTYPES_H 1
#endif

/* Flag indicating whether the library will be compiled with LASPACK support
   */
/* #undef HAVE_LASPACK */

/* Flag indicating whether the library will be compiled with libHilbert
   support */
#ifndef LIBMESH_HAVE_LIBHILBERT
#undef LIBMESH_HAVE_LIBHILBERT // BILKE was define 1
#endif

/* define if the compiler has locale */
#ifndef LIBMESH_HAVE_LOCALE
#define LIBMESH_HAVE_LOCALE /**/
#endif

/* Define to 1 if you have the <memory.h> header file. */
#ifndef LIBMESH_HAVE_MEMORY_H
#define LIBMESH_HAVE_MEMORY_H 1
#endif

/* Flag indicating whether the library will be compiled with Metis support */
#ifndef LIBMESH_HAVE_METIS
#undef LIBMESH_HAVE_METIS // Bilke was 1
#endif

/* Flag indicating whether or not MPI is available */
#ifndef LIBMESH_HAVE_MPI
#undef LIBMESH_HAVE_MPI // Bilke was 1
#endif

/* define if the compiler implements namespaces */
#ifndef LIBMESH_HAVE_NAMESPACES
#define LIBMESH_HAVE_NAMESPACES /**/
#endif

/* Flag indicating whether the library will be compiled with nanoflann KD-Tree
   support */
#ifndef LIBMESH_HAVE_NANOFLANN
#undef LIBMESH_HAVE_NANOFLANN // Bilke was 1
#endif

/* Flag indicating whether the library will be compiled with Nemesis support
   */
#ifndef LIBMESH_HAVE_NEMESIS_API
#undef LIBMESH_HAVE_NEMESIS_API // Bilke was 1
#endif

/* Flag indicating whether the library will be compiled with Netcdf support */
#ifndef LIBMESH_HAVE_NETCDF
#define LIBMESH_HAVE_NETCDF 1
#endif

/* Flag indicating whether the library will be compiled with NLOPT support */
/* #undef HAVE_NLOPT */

/* Define if OpenMP is enabled */
/* #undef HAVE_OPENMP */

/* Flag indicating whether the library will be compiled with Parmetis support
   */
#ifndef LIBMESH_HAVE_PARMETIS
#undef LIBMESH_HAVE_PARMETIS // Bilke was 1
#endif

/* Flag indicating whether or not PETSc is available */
/* #undef HAVE_PETSC */

/* Flag indicating whether or not PETSc was compiled with Hypre support */
/* #undef HAVE_PETSC_HYPRE */

/* Flag indicating whether or not the Toolkit for Advanced Optimization (TAO)
   is available via PETSc */
/* #undef HAVE_PETSC_TAO */

/* Define if you have POSIX threads libraries and header files. */
#ifndef LIBMESH_HAVE_PTHREAD
//#define LIBMESH_HAVE_PTHREAD 1
#endif

/* Have PTHREAD_PRIO_INHERIT. */
#ifndef LIBMESH_HAVE_PTHREAD_PRIO_INHERIT
//#define LIBMESH_HAVE_PTHREAD_PRIO_INHERIT 1
#endif

/* Flag indicating whether the library will be compiled with Qhull support */
#ifndef LIBMESH_HAVE_QHULL_API
//#define LIBMESH_HAVE_QHULL_API 1
#endif

/* Define to 1 if you have the <rpc/rpc.h> header file. */
#ifndef LIBMESH_HAVE_RPC_RPC_H
//#define LIBMESH_HAVE_RPC_RPC_H 1
#endif

/* Define to 1 if you have the <rpc/xdr.h> header file. */
/* #undef HAVE_RPC_XDR_H */

/* define if the compiler supports Run-Time Type Identification */
#ifndef LIBMESH_HAVE_RTTI
//#define LIBMESH_HAVE_RTTI /**/
#endif

/* Flag indicating whether the library will be compiled with SFC support */
/* #undef HAVE_SFCURVES */

/* Flag indicating whether or not SLEPc is available */
/* #undef HAVE_SLEPC */

/* define if the compiler has the sstream header */
#ifndef LIBMESH_HAVE_SSTREAM
#define LIBMESH_HAVE_SSTREAM /**/
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef LIBMESH_HAVE_STDINT_H
#define LIBMESH_HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef LIBMESH_HAVE_STDLIB_H
#define LIBMESH_HAVE_STDLIB_H 1
#endif

/* define if the compiler supports std::hash */
#ifndef LIBMESH_HAVE_STD_HASH
#define LIBMESH_HAVE_STD_HASH 1
#endif

/* define if the compiler supports std::unordered_map */
#ifndef LIBMESH_HAVE_STD_UNORDERED_MAP
#define LIBMESH_HAVE_STD_UNORDERED_MAP 1
#endif

/* define if the compiler supports std::unordered_multimap */
#ifndef LIBMESH_HAVE_STD_UNORDERED_MULTIMAP
#define LIBMESH_HAVE_STD_UNORDERED_MULTIMAP 1
#endif

/* define if the compiler supports std::unordered_multiset */
#ifndef LIBMESH_HAVE_STD_UNORDERED_MULTISET
#define LIBMESH_HAVE_STD_UNORDERED_MULTISET 1
#endif

/* define if the compiler supports std::unordered_set */
#ifndef LIBMESH_HAVE_STD_UNORDERED_SET
#define LIBMESH_HAVE_STD_UNORDERED_SET 1
#endif

/* define if the compiler has stringstream functionality */
#ifndef LIBMESH_HAVE_STRINGSTREAM
#define LIBMESH_HAVE_STRINGSTREAM /**/
#endif

/* Define to 1 if you have the <strings.h> header file. */
#ifndef LIBMESH_HAVE_STRINGS_H
#define LIBMESH_HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef LIBMESH_HAVE_STRING_H
#define LIBMESH_HAVE_STRING_H 1
#endif

/* define if the compiler has the strstream header */
/* #undef HAVE_STRSTREAM */

/* Define to 1 if you have the <sys/resource.h> header file. */
#ifndef LIBMESH_HAVE_SYS_RESOURCE_H
#define LIBMESH_HAVE_SYS_RESOURCE_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef LIBMESH_HAVE_SYS_STAT_H
#define LIBMESH_HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef LIBMESH_HAVE_SYS_TYPES_H
#define LIBMESH_HAVE_SYS_TYPES_H 1
#endif

/* Flag indicating whether the library shall be compiled to use the Threading
   Building Blocks */
/* #undef HAVE_TBB_API */

/* Flag indicating whether the library shall be compiled to use the Tecplot
   interface */
#ifndef LIBMESH_HAVE_TECPLOT_API
#undef LIBMESH_HAVE_TECPLOT_API // Bilke was 1
#endif

/* Flag indicating tecplot API understands newer features */
#ifndef LIBMESH_HAVE_TECPLOT_API_112
#define LIBMESH_HAVE_TECPLOT_API_112 1
#endif

/* Flag indicating whether the library will be compiled with Tetgen support */
/* #undef HAVE_TETGEN */

/* define if the compiler supports std::tr1::hash */
/* #undef HAVE_TR1_HASH */

/* define if the compiler supports std::tr1::unordered_map */
/* #undef HAVE_TR1_UNORDERED_MAP */

/* define if the compiler supports std::tr1::unordered_multimap */
/* #undef HAVE_TR1_UNORDERED_MULTIMAP */

/* define if the compiler supports std::tr1::unordered_multiset */
/* #undef HAVE_TR1_UNORDERED_MULTISET */

/* define if the compiler supports std::tr1::unordered_set */
/* #undef HAVE_TR1_UNORDERED_SET */

/* Flag indicating whether the library will be compiled with Triangle support
   */
/* #undef HAVE_TRIANGLE */

/* Flag indicating whether the library shall be compiled to use the Trilinos
   solver collection */
/* #undef HAVE_TRILINOS */

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef LIBMESH_HAVE_UNISTD_H
#define LIBMESH_HAVE_UNISTD_H 1
#endif

/* Flag indicating whether the library will be compiled with VTK support */
/* #undef HAVE_VTK */

/* Flag indicating headers and libraries for XDR IO are available */
#ifndef LIBMESH_HAVE_XDR
//#define LIBMESH_HAVE_XDR 1
#endif

/* Define to 1 if you have the <xmmintrin.h> header file. */
#ifndef LIBMESH_HAVE_XMMINTRIN_H
//#define LIBMESH_HAVE_XMMINTRIN_H 1
#endif

/* Flag indicating xz is available for handling compressed .xz files */
#ifndef LIBMESH_HAVE_XZ
//#define LIBMESH_HAVE_XZ 1
#endif

/* Define to 1 if you have the <zlib.h> header file. */
#ifndef LIBMESH_HAVE_ZLIB_H
//#define LIBMESH_HAVE_ZLIB_H 1
#endif

/* header file for the final detected hash type */
#ifndef LIBMESH_INCLUDE_HASH
#define LIBMESH_INCLUDE_HASH <functional>
#endif

/* header file for the final detected unordered_map type */
#ifndef LIBMESH_INCLUDE_UNORDERED_MAP
#define LIBMESH_INCLUDE_UNORDERED_MAP <unordered_map>
#endif

/* header file for the final detected unordered_multimap type */
#ifndef LIBMESH_INCLUDE_UNORDERED_MULTIMAP
#define LIBMESH_INCLUDE_UNORDERED_MULTIMAP <unordered_map>
#endif

/* header file for the final detected unordered_multiset type */
#ifndef LIBMESH_INCLUDE_UNORDERED_MULTISET
#define LIBMESH_INCLUDE_UNORDERED_MULTISET <unordered_set>
#endif

/* header file for the final detected unordered_set type */
#ifndef LIBMESH_INCLUDE_UNORDERED_SET
#define LIBMESH_INCLUDE_UNORDERED_SET <unordered_set>
#endif

/* libMesh I/O file format compatiblity string */
#ifndef LIBMESH_IO_COMPATIBILITY_VERSION
#define LIBMESH_IO_COMPATIBILITY_VERSION "0.7.4"
#endif

/* libMesh source code version */
#ifndef LIBMESH_LIB_RELEASE
#define LIBMESH_LIB_RELEASE ""
#endif

/* libMesh version number */
#ifndef LIBMESH_LIB_VERSION
#define LIBMESH_LIB_VERSION "1.0.0-pre"
#endif

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#ifndef LIBMESH_LT_OBJDIR
#define LIBMESH_LT_OBJDIR ".libs/"
#endif

/* libMesh major version number */
#ifndef LIBMESH_MAJOR_VERSION
#define LIBMESH_MAJOR_VERSION 1
#endif

/* libMesh micro version number */
#ifndef LIBMESH_MICRO_VERSION
#define LIBMESH_MICRO_VERSION 0
#endif

/* libMesh minor version number */
#ifndef LIBMESH_MINOR_VERSION
#define LIBMESH_MINOR_VERSION 0
#endif

/* Name of package */
#ifndef LIBMESH_PACKAGE
#define LIBMESH_PACKAGE "libmesh"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef LIBMESH_PACKAGE_BUGREPORT
#define LIBMESH_PACKAGE_BUGREPORT "libmesh-users@lists.sourceforge.net"
#endif

/* Define to the full name of this package. */
#ifndef LIBMESH_PACKAGE_NAME
#define LIBMESH_PACKAGE_NAME "libmesh"
#endif

/* Define to the full name and version of this package. */
#ifndef LIBMESH_PACKAGE_STRING
#define LIBMESH_PACKAGE_STRING "libmesh 1.0.0-pre"
#endif

/* Define to the one symbol short name of this package. */
#ifndef LIBMESH_PACKAGE_TARNAME
#define LIBMESH_PACKAGE_TARNAME "libmesh"
#endif

/* Define to the home page for this package. */
#ifndef LIBMESH_PACKAGE_URL
#define LIBMESH_PACKAGE_URL "http://libmesh.github.io"
#endif

/* Define to the version of this package. */
#ifndef LIBMESH_PACKAGE_VERSION
#define LIBMESH_PACKAGE_VERSION "1.0.0-pre"
#endif

/* Flag indicating whether or not PETSc was configured with MUMPS support */
/* #undef PETSC_HAVE_MUMPS */

/* Flag indicating whether or not PETSc was configured with SuperLU_dist
   support */
/* #undef PETSC_HAVE_SUPERLU_DIST */

/* Flag indicating whether or not PETSc was configured with debugging enabled
   */
/* #undef PETSC_USE_DEBUG */

/* size of processor_id */
#ifndef LIBMESH_PROCESSOR_ID_BYTES
#define LIBMESH_PROCESSOR_ID_BYTES 2
#endif

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Flag indicating if the library should keep names in libMesh namespace */
#ifndef LIBMESH_REQUIRE_SEPARATE_NAMESPACE
#define LIBMESH_REQUIRE_SEPARATE_NAMESPACE 1
#endif

/* The size of `double', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_DOUBLE
#define LIBMESH_SIZEOF_DOUBLE 8
#endif

/* The size of `float', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_FLOAT
#define LIBMESH_SIZEOF_FLOAT 4
#endif

/* The size of `function_pointer', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_FUNCTION_POINTER
#define LIBMESH_SIZEOF_FUNCTION_POINTER 8
#endif

/* The size of `int', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_INT
#define LIBMESH_SIZEOF_INT 4
#endif

/* The size of `long int', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_LONG_INT
#define LIBMESH_SIZEOF_LONG_INT 8
#endif

/* The size of `short int', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_SHORT_INT
#define LIBMESH_SIZEOF_SHORT_INT 2
#endif

/* The size of `unsigned int', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_UNSIGNED_INT
#define LIBMESH_SIZEOF_UNSIGNED_INT 4
#endif

/* The size of `void *', as computed by sizeof. */
#ifndef LIBMESH_SIZEOF_VOID_P
#define LIBMESH_SIZEOF_VOID_P 8
#endif

/* Define to 1 if you have the ANSI C header files. */
#ifndef LIBMESH_STDC_HEADERS
#define LIBMESH_STDC_HEADERS 1
#endif

/* size of subdomain_id */
#ifndef LIBMESH_SUBDOMAIN_ID_BYTES
#define LIBMESH_SUBDOMAIN_ID_BYTES 2
#endif

/* If the compiler supports a TLS storage class define it to that here */
#ifndef LIBMESH_TLS
#define LIBMESH_TLS __thread
#endif

/* Flag indicating whether the library shall be compiled to use the Trilinos
   solver collection */
/* #undef TRILINOS_HAVE_AZTECOO */

/* Flag indicating whether the library shall be compiled to use the
   DataTransferKit */
/* #undef TRILINOS_HAVE_DTK */

/* Flag indicating whether the library shall be compiled to use the Trilinos
   EpetraExt interfaces */
/* #undef TRILINOS_HAVE_EPETRAEXT */

/* Flag indicating whether the library shall be compiled to use the Trilinos
   Ifpack interfaces */
/* #undef TRILINOS_HAVE_IFPACK */

/* Flag indicating whether the library shall be compiled to use the ML package
   */
/* #undef TRILINOS_HAVE_ML */

/* Flag indicating whether the library shall be compiled to use the Nox solver
   collection */
/* #undef TRILINOS_HAVE_NOX */

/* Flag indicating whether the library shall be compiled to use the Tpetra
   solver collection */
/* #undef TRILINOS_HAVE_TPETRA */

/* size of unique_id */
#ifndef LIBMESH_UNIQUE_ID_BYTES
#define LIBMESH_UNIQUE_ID_BYTES 8
#endif

/* Flag indicating if the library should be built using complxex numbers */
/* #undef USE_COMPLEX_NUMBERS */

/* Flag indicating if the library should be built using real numbers */
#ifndef LIBMESH_USE_REAL_NUMBERS
#define LIBMESH_USE_REAL_NUMBERS 1
#endif

/* Flag indicating whether the library shall be compiled to use any particular
   thread API. */
#ifndef LIBMESH_USING_THREADS
#define LIBMESH_USING_THREADS 1
#endif

/* Version number of package */
#ifndef LIBMESH_VERSION
#define LIBMESH_VERSION "1.0.0-pre"
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#ifndef _libmesh_restrict
#define _libmesh_restrict __restrict
#endif
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* once: _INCLUDE_LIBMESH_CONFIG_H */
#endif
