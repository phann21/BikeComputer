set(requires 
    "esp_driver_i2c"

    )

idf_component_register(SRCS "BikeComputerSoftware.c"
                    INCLUDE_DIRS "."
                    REQUIRES "${requires}")
