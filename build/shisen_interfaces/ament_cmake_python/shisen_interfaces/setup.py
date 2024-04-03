from setuptools import find_packages
from setuptools import setup

setup(
    name='shisen_interfaces',
    version='0.2.0',
    packages=find_packages(
        include=('shisen_interfaces', 'shisen_interfaces.*')),
)
