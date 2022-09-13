# C-SGX Demonstration: Protecting the Kernel against Container Escapes 

## Building and Running

```sh
docker-compose up
```

## Observe that c-nosgx has access to the host kernel, but within c-sgx it does not

```sh
c-nosgx    | going to look at your hosts kernel commandline:
c-nosgx    |
c-nosgx    | BOOT_IMAGE=/vmlinuz-5.15.0-46-generic root=/dev/mapper/ubuntu--vg-ubuntu--lv ro

c-sgx      | going to look at your hosts kernel commandline:
c-sgx      |
c-sgx exited with code 0

```
