import subprocess

def Format_File(Path):
    Result = subprocess.run("clang-format -i " + Path, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

    if Result.returncode != 0:
        print("Can't format file : " + Result.stderr)
