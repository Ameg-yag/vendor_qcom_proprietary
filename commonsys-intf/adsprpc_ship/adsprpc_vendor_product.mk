ADSPRPC_VENDOR := libadsprpc
ADSPRPC_VENDOR += libmdsprpc
ADSPRPC_VENDOR += libsdsprpc
ADSPRPC_VENDOR += libcdsprpc
ADSPRPC_VENDOR += libadsp_default_listener
ADSPRPC_VENDOR += libcdsp_default_listener
ADSPRPC_VENDOR += libssc_default_listener
ADSPRPC_VENDOR += adsprpcd
ADSPRPC_VENDOR += cdsprpcd
ADSPRPC_VENDOR += libsysmon_cdsp_skel
ADSPRPC_VENDOR += vendor.qti.adsprpc-service.rc
ADSPRPC_VENDOR += vendor.qti.adsprpc-sscrpc-service.rc
ADSPRPC_VENDOR += libloadalgo_stub
ADSPRPC_VENDOR += loadalgo
PRODUCT_PACKAGES += $(ADSPRPC_VENDOR)

#ADSPRPC_DBG
ADSPRPC_DBG := fastrpc_tests_apps
ADSPRPC_DBG += fastrpc_tests_apps32
ADSPRPC_DBG += libreverse_rpc_tests_skel
ADSPRPC_DBG += libfastrpc_tests_skel
ADSPRPC_DBG += libhap_power_test_skel
ADSPRPC_DBG += libtest_dl_skel
ADSPRPC_DBG += libtest_dl_perf_skel
ADSPRPC_DBG += librpcperf_skel
ADSPRPC_DBG += libfastrpc_tests1_skel
ADSPRPC_DBG += libtest_dl1_skel
ADSPRPC_DBG += libtest_dl_perf1_skel
ADSPRPC_DBG += librpcperf1_skel
ADSPRPC_DBG += libunsigned_pd_test_skel
ADSPRPC_DBG += libbenchmark_skel
ADSPRPC_DBG += test_elf_size_16k
ADSPRPC_DBG += test_elf_size_32k
ADSPRPC_DBG += test_elf_size_64k
ADSPRPC_DBG += test_elf_size_128k
ADSPRPC_DBG += test_elf_size_256k
ADSPRPC_DBG += test_elf_size_512k
ADSPRPC_DBG += test_elf_size_768k
ADSPRPC_DBG += test_elf_size_1MB
ADSPRPC_DBG += test_elf_nop
ADSPRPC_DBG += test_elf_dep1
ADSPRPC_DBG += test_elf_dep2
PRODUCT_PACKAGES_DEBUG += $(ADSPRPC_DBG)
