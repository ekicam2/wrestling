DEBUG		?= 0
NAME		:= game
CXX			:= g++
CXXFLAGS	:= -std=c++14 -Wall -Wextra -Wpedantic -Wno-unused-parameter
LDFLAGS   	:= 
REQLIBS		:= sfml-window sfml-graphics
LIBS		:= $(shell pkg-config --libs $(REQLIBS))
DEPFLAGS	:= $(shell pkg-config --cflags $(REQLIBS))
BUILDDIR 	:= build
SOURCEDIR	:= src
INCLUDEDIR 	:= include/$(NAME)
OUT_EXE		:= $(NAME)

SOURCES		:= $(shell find $(SOURCEDIR) -name '*.cpp')
OBJECTS		:= $(addprefix $(BUILDDIR)/,$(SOURCES:%.cpp=%.o))

ifeq ($(DEBUG), 1)
	CXXFLAGS += #todo some debug shit
else
	#do nothin'
endif

all: $(OUT_EXE)

$(OUT_EXE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) $(OBJECTS) -o build/$(OUT_EXE) $(LDFLAGS) $(LIBS)

$(BUILDDIR)/%.o: %.cpp
	@echo 'Building ${notdir $@} ...'
	$(shell mkdir -p "${dir $@}")
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -I$(INCLUDEDIR) -c $< -o $@
