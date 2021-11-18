import os

os.chdir(r"C:\Users\test\NodeProjects\PowerWeb-RS-electron\py")
# os.system(r"C:\Users\test\anaconda3\envs\nuitka\python.exe -m nuitka --standalone --onefile "
#           r"--windows-product-name=GridVerse --windows-product-version=1.0.0.0 --windows-company-name=GridVerse "
#           r"--windows-onefile-tempdir-spec=%TEMP%\GridVerse ds_mp.py")

os.system(r"C:\Users\test\anaconda3\envs\nuitka\python.exe -m PyInstaller --noconfirm --onefile "
          r"--console --hidden-import engineio.async_drivers.aiohttp --hidden-import engineio.async_aiohttp ds_mp.py")
