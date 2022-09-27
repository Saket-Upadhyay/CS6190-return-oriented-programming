FROM downunderctf/nsjail
COPY ./publish/vulnerablecode /home/ctf/chal/
COPY challenge/flag.txt /home/ctf/chal/
EXPOSE 1337/tcp
CMD ["/chal/vulnerablecode"]
