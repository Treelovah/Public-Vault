import zipfile

with open("/usr/share/wordlists/rockyou.txt", "r") as passwd:
    for i in passwd:
        try:
            zipfile.ZipFile.extractall("./secret.zip", i)
        except UnicodeDecodeError:
            pass