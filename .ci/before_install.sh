#!/bin/sh

die() {
    echo " *** ERROR: " $*
    exit 1
}

if [ $TRAVIS == true ] ; then
    [ $TRAVIS_OS_NAME != linux ] || {
        sudo apt-get update || die
        sudo apt-get install lib32z1 || die
        sudo apt-get install dos2unix || die
        sudo apt-get install doxygen || die
    }
fi

{
    pip install --upgrade pip || die
    [ $TRAVIS == true ] && {
        pip install git+https://github.com/sphinx-doc/sphinx || die
        pip install breathe || die
        pip install recommonmark || die
        pip install sphinx_rtd_theme || die   
    }
    pip install PrettyTable || die
    pip install colorama || die
    pip install configparser || die
}