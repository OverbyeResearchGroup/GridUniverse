import os

os.chdir(r"C:\Users\test\NodeProjects\PowerWeb-RS-electron\py")
os.system(r"C:\Users\test\anaconda3\envs\nuitka\python.exe -m nuitka --standalone --onefile "
          r"--windows-product-name=GridVerse --windows-product-version=1.1.0.0 --windows-company-name=GridVerse "
          r"--windows-onefile-tempdir-spec=%TEMP%\GridVerse --plugin-enable=gevent ds_mp.py")

# os.system(r"C:\Users\test\anaconda3\envs\nuitka\python.exe -m PyInstaller --noconfirm --onefile "
#           r"--console --hidden-import engineio.async_drivers.aiohttp --hidden-import engineio.async_aiohttp ds_mp.py")

# os.system(r"C:\Users\test\anaconda3\envs\nuitka\python.exe -m PyInstaller --noconfirm --onefile "
#           r"--console --hidden-import=eventlet.hubs.epolls --hidden-import=eventlet.hubs.kqueue "
#           r"--hidden-import=eventlet.hubs.selects --hidden-import=eventlet --hidden-import=dns "
#           r"--hidden-import=dns.asyncbackend --hidden-import=dns.asyncquery --hidden-import=dns.asyncresolver "
#           r"--hidden-import=dns.e164 --hidden-import=dns.hash --hidden-import=dns.dnssec --hidden-import=dns.namedict "
#           r"--hidden-import=dns.tsigkeyring --hidden-import=dns.update --hidden-import=dns.version "
#           r"--hidden-import=dns.zone --hidden-import=dns.versioned --hidden-import=engineio.async_drivers.eventlet "
#           r"ds_mp.py")
