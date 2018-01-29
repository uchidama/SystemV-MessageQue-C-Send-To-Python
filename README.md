# C code send to python on SystemV message queue

[![https://gyazo.com/13b925b8b30119ebc2233afa607f111d](https://i.gyazo.com/13b925b8b30119ebc2233afa607f111d.png)](https://gyazo.com/13b925b8b30119ebc2233afa607f111d)

This codes were checked on Ubuntu 14.04.  

## How to use

1. clone this repository using `git`:

```sh
git clone
```

2. compile msg_send.c and run:
```sh
cd SystemV-MessageQue-C-Send-To-Python   
gcc msg_send.c
./a.out
```

3. run msg_receive.py
```sh
python msg_receive.py
```

## Installation

```sh
pip install -r requirements.txt
```

## License

[MIT](LICENSE.md)
