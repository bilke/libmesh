if(USE_METIS)
	add_definitions(-DLIBMESH_HAVE_METIS)
endif()

SET(SOURCES
	mesh/abaqus_io.C
	mesh/boundary_info.C
	mesh/boundary_mesh.C
	mesh/checkpoint_io.C
	mesh/diva_io.C
	mesh/ensight_io.C
	# mesh/exodusII_io.C
	# mesh/exodusII_io_helper.C
	mesh/fro_io.C
	mesh/gmsh_io.C
	# mesh/gmv_io.C
	mesh/gnuplot_io.C
	mesh/inf_elem_builder.C
	mesh/legacy_xdr_io.C
	mesh/matlab_io.C
	mesh/medit_io.C
	mesh/mesh_base.C
	mesh/mesh_communication.C
	mesh/mesh_communication_global_indices.C
	mesh/mesh_data.C
	mesh/mesh_data_tetgen_support.C
	mesh/mesh_data_unv_support.C
	mesh/mesh_data_xdr_support.C
	mesh/mesh_function.C
	mesh/mesh_generation.C
	mesh/mesh_iterators.C
	mesh/mesh_modification.C
	mesh/mesh_output.C
	mesh/mesh_refinement.C
	mesh/mesh_refinement_flagging.C
	mesh/mesh_refinement_smoothing.C
	mesh/mesh_serializer.C
	mesh/mesh_smoother.C
	mesh/mesh_smoother_laplace.C
	mesh/mesh_smoother_vsmoother.C
	mesh/mesh_subdivision_support.C
	mesh/mesh_tetgen_interface.C
	mesh/mesh_tetgen_wrapper.C
	mesh/mesh_tools.C
	mesh/mesh_triangle_holes.C
	mesh/mesh_triangle_interface.C
	mesh/mesh_triangle_wrapper.C
	mesh/namebased_io.C
	# mesh/nemesis_io.C
	# mesh/nemesis_io_helper.C
	mesh/off_io.C
	mesh/parallel_mesh.C
	mesh/patch.C
	mesh/postscript_io.C
	mesh/serial_mesh.C
	# mesh/tecplot_io.C
	mesh/tetgen_io.C
	mesh/ucd_io.C
	mesh/unstructured_mesh.C
	mesh/unv_io.C
	mesh/vtk_io.C
	mesh/xdr_head.C
	mesh/xdr_io.C
	mesh/xdr_mesh.C
	mesh/xdr_mgf.C
	mesh/xdr_soln.C
)

add_subdirectory(base)
add_subdirectory(error_estimation)
add_subdirectory(fe)
add_subdirectory(geom)
add_subdirectory(numerics)
add_subdirectory(parallel)
add_subdirectory(partitioning)
add_subdirectory(physics)
add_subdirectory(quadrature)
add_subdirectory(reduced_basis)
add_subdirectory(solution_transfer)
add_subdirectory(solvers)
add_subdirectory(systems)
add_subdirectory(utils)

add_library(libmesh ${SOURCES})
target_link_libraries(libmesh
	base error_estimation fe geom numerics parallel partitioning physics quadrature reduced_basis solution_transfer solvers systems utils)
