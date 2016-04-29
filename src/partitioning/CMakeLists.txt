set(SOURCES
	centroid_partitioner.C
	linear_partitioner.C
	partitioner.C
	partitioner_factory.C
	sfc_partitioner.C
)

if(USE_METIS)
	list(APPEND SOURCES metis_partitioner.C parmetis_partitioner.C)
endif()

add_library(partitioning ${SOURCES})

if(USE_METIS)
	target_link_libraries(partitioning metis)
endif()
