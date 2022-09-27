# CS6190-return-oriented-programming
Presentation and Resources for ROP exploit presentation for 'CS6190 Computer Science Prespectives'

### Project Tree

```
.
├── Dockerfile
├── LICENSE
├── README.md
├── Video
│   └── ROP Experiment.mp4
├── docker-compose.yml
├── exploit
│   ├── GadgetList.txt
│   ├── Official Solution.py
│   ├── Saket's Solution.py
│   ├── libc6_2.27-3ubuntu1_amd64.so
│   └── requirements.txt
├── publish
│   └── vulnerablecode
└── source_code
    ├── Makefile
    ├── VulnerableProgram.c
    └── flag.txt

4 directories, 14 files
```

## Prerequisites
1. Docker [https://www.docker.com]
2. Python3 [https://www.python.org/downloads/]
3. virtualenv (suggested, not required) [https://pypi.org/project/virtualenv/] [https://virtualenv.pypa.io/en/latest/]


## How to install
1. Clone the repository with
```sh
git clone https://github.com/Saket-Upadhyay/CS6190-return-oriented-programming.git
```

2. cd to the repo
```sh
cd CS6190-return-oriented-programming
```

3. Setup docker container AND run it
```sh
docker compose up
```

4. Open new terminal and cd to exploit folder
5. install python requirements
```sh
python3 -m pip install -r requirements.txt
```

6. Run the exploit
```sh
python3 Saket\'s\ Solution.py
```

OR 

```sh
python3 Official\ Solution.py
```

---

> Note: These materials were used to present the paper [The geometry of innocent flesh on the bone: return-into-libc without function calls (on the x86)](https://dl.acm.org/doi/10.1145/1315245.1315313)
> by the group "Seurity and Privacy 1" (Fitzgerald (Fiji) Marcelin, Joseph Remines, Saket Upadhyay, Wei Qi, Yu-Sheng Wang) @ University of Virginia.
> Feel free to use them for your presentation under this [LICENSE](./LICENSE)

> This project is build over the DownUnderCTF's 2020 challenge 'return-to-what' under 'pwn' category.
