FROM ubuntu:xenial
WORKDIR /app
RUN apt-get update \
        && apt-get install -y \
            software-properties-common \
            wget \
        && add-apt-repository -y ppa:ubuntu-toolchain-r/test \
        && apt-get update \
        && apt-get install -y \
            make \
            git \
            curl \
            vim \
            vim-gnome \
            zlib1g-dev

RUN apt-get install -y autoconf
RUN apt-get install -y libtool-bin
RUN apt-get install -y libssl-dev

RUN apt-get install -y \
     doxygen \
     graphviz \
     binutils-dev \
     python3-pip \
     python3-setuptools \
     uuid-dev

RUN pip3 install gil

ADD https://github.com/Kitware/CMake/releases/download/v3.11.4/cmake-3.11.4-Linux-x86_64.sh /cmake-3.11.4-Linux-x86_64.sh
RUN mkdir /opt/cmake
RUN sh /cmake-3.11.4-Linux-x86_64.sh --prefix=/opt/cmake --skip-license
RUN ln -s /opt/cmake/bin/cmake /usr/local/bin/cmake
RUN ln -s /opt/cmake/bin/ctest /usr/local/bin/ctest
RUN ln -s /opt/cmake/bin/ccmake /usr/local/bin/ccmake
RUN ln -s /opt/cmake/bin/cpack /usr/local/bin/cpack
RUN ln -s /opt/cmake/bin/cmake-gui /usr/local/bin/cmake-gui
RUN cmake --version

COPY . /app

RUN gil update
RUN apt-get install -y gcc-8 g++-8 \
    && update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-8 100 \
    && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-8 100

CMD ["bash"]