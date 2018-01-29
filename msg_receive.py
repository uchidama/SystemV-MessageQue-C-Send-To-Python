import sysv_ipc


def main():
    KEY = 81
    print("KEY:", KEY)
    mq = sysv_ipc.MessageQueue(KEY)
    print("id:", mq.id)
    print("ready to receive messages.")
    while True:
        mtext, mtype = mq.receive(type=1)
        print(mtext.decode("utf-8"))

if __name__ == '__main__':
    main()
