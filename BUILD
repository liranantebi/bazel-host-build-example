load(":execute.bzl", "execute_bin")

# compile 'generate_hello' executable
cc_binary(
    name = "generate_hello",
    srcs = ["generate_hello.cc"],
)

# execute generate_hello on the host to generate hello (see execute.bzl)
execute_bin(
    name = "host_generate_hello",
    out = "hello_generated.cc",
    merge_tool = "//:generate_hello"
)

# compile hello
cc_binary(
    name = "hello",
    srcs = [":hello_generated.cc"],
)

