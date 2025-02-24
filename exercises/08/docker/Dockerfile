FROM silkeh/clang:19

## Additional packages
RUN apt-get upgrade -y
RUN apt-get update -y
RUN apt-get install gdb -y
RUN apt-get install cmake -y
RUN apt-get install valgrind -y
RUN apt-get install vim -y
RUN apt-get install neovim -y
RUN apt-get install git -y
RUN apt-get install libc++-19-dev -y
RUN useradd -ms /bin/bash user # openmpi does not like to be executed as root

## Install MPI

## Install Eigen
RUN mkdir /opt/Eigen/
RUN cd /opt/Eigen && git clone https://gitlab.com/libeigen/eigen.git
RUN rm -rf /opt/Eigen/eigen/.git


# TODO: Install highfive and hdf5

RUN chown -R user:user /opt/*

## DanceQ
RUN chown -R user:user /home/user/


