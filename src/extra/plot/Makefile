#! /usr/bin/make -f

################################################################################

################################################################################
# dependencies

MK_DEPS	=								\
	$(SRC_DIR)/extra/plot/Makefile				\
	$(SRC_DIR)/tmp.mk						\
	$(LIBALX_DIR)/Makefile

MODULES	=								\
	extra/plot/core							\
	extra/plot/multi						\
	extra/plot/plot							\
	extra/plot/setup

SRC	= $(MODULES:%=$(SRC_DIR)/%.c)
DEP	= $(MODULES:%=$(BUILD_TMP_DIR)/%.d)
OBJ	= $(MODULES:%=$(BUILD_TMP_DIR)/%.o)

BOTH_OBJ	= $(subst .a.o,.a.o ,$(join $(OBJ:.o=.a.o),$(OBJ:.o=.so.o)))

################################################################################
# cflags
CFLAGS_A	+=
CFLAGS_SO	+=

################################################################################
# target: dependencies
#	action

PHONY := all
all: $(BOTH_OBJ)
	@:


$(BUILD_TMP_DIR)/%.d: $(SRC_DIR)/%.c $(MK_DEPS)
	$(Q)mkdir -p		$(@D)/
	@echo	"	CC -M	build/tmp/$*.d"
	$(Q)$(CC) $(CFLAGS_A) -MG -MT"$@"				\
			-MT"$(BUILD_TMP_DIR)/$*.a.s"			\
			-MT"$(BUILD_TMP_DIR)/$*.so.s"			\
			-M $< -MF $@
$(BUILD_TMP_DIR)/%.a.s: $(SRC_DIR)/%.c $(BUILD_TMP_DIR)/%.d
	$(Q)mkdir -p		$(@D)/
	@echo	"	CC	build/tmp/$*.a.s"
	$(Q)$(CC) $(CFLAGS_A) -S $< -o $@
$(BUILD_TMP_DIR)/%.so.s: $(SRC_DIR)/%.c $(BUILD_TMP_DIR)/%.d
	$(Q)mkdir -p		$(@D)/
	@echo	"	CC	build/tmp/$*.so.s"
	$(Q)$(CC) $(CFLAGS_SO) -S $< -o $@
$(BUILD_TMP_DIR)/%.o: $(BUILD_TMP_DIR)/%.s
	@echo	"	AS	build/tmp/$*.o"
	$(Q)$(AS) $< -o $@

include $(DEP)


PHONY += clean
clean:
	$(Q)rm -f *.o *.s

################################################################################
# Declare the contents of the .PHONY variable as phony.
.PHONY: $(PHONY)


################################################################################
######## End of file ###########################################################
################################################################################

