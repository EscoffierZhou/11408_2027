from pathlib import Path
def generate_cmake(root: Path):
    dirs = [p for p in root.iterdir() if p.is_dir()]
    cpps = [p for p in root.iterdir() if p.is_file() and p.suffix == ".cpp"]
    others = [
        p for p in root.iterdir()
        if p.is_file()
           and p.name != "CMakeLists.txt"
           and p.suffix != ".cpp"
    ]
    cmake = root / "CMakeLists.txt"

    with cmake.open("w", encoding="utf-8") as f:
        if dirs and not cpps and not others:
            for d in dirs:
                f.write(f'message(STATUS "***  Exiting 2-level folder {d.name}")\n')
                f.write(f'add_subdirectory({d.name})\n')

        elif cpps and not dirs and not others:
            f.write('message(STATUS "====================================================")\n')
            for cpp in cpps:
                name = cpp.stem
                f.write(f'message(STATUS "&&&    found executable programme: {name}")\n')
                f.write(f'add_executable({name} {cpp.name})\n')

        else:
            raise RuntimeError("目录结构非法，无法生成 CMakeLists.txt")

    print(f"\n✔ 已生成: {cmake}\n")


def show_menu(root: Path):
    print(f"\n当前目录: {root}\n")

    dirs = [p for p in root.iterdir() if p.is_dir()]
    cpps = [p for p in root.iterdir() if p.is_file() and p.suffix == ".cpp"]

    if dirs:
        for i, d in enumerate(dirs, 1):
            print(f"({i}) {d.name}")
    else:
        for cpp in cpps:
            print(f"    {cpp.name}")

    print("\n[a] 上一级目录")
    print("[b] 生成 CMakeLists.txt")


def main():
    root = Path(r"F:\desktop\11408_2027\408 计算机基础\11408数据结构\Leetcode以及代码模板")
    while True:
        show_menu(root)
        choice = input("\n请输入选项: ").strip()

        if choice == "a":
            if root.parent != root:
                root = root.parent
            else:
                print("⚠ 已经是根目录")

        elif choice == "b":
            try:
                generate_cmake(root)
            except Exception as e:
                print(f"✘ 失败: {e}")

        elif choice.isdigit():
            dirs = [p for p in root.iterdir() if p.is_dir()]
            idx = int(choice) - 1
            if 0 <= idx < len(dirs):
                root = dirs[idx]
            else:
                print("✘ 无效编号")

        else:
            print("✘ 无效输入")


if __name__ == "__main__":
    main()
