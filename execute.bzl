"""Execute a binary.
"""

def _impl(ctx):
    # The list of arguments we pass to the script.
    args = [ctx.outputs.out.path]

    # Action to call the script.
    ctx.actions.run(
        outputs = [ctx.outputs.out],
        arguments = [ctx.outputs.out.path],
        progress_message = "Running with %s" % [ctx.outputs.out],
        executable = ctx.executable.merge_tool,
    )

execute_bin = rule(
    implementation = _impl,
    attrs = {
        "out": attr.output(mandatory = True),
        "merge_tool": attr.label(
            executable = True,
            # this rule requires to be run on the host.
            cfg = "host",
            allow_files = True,
            default = Label("//actions_run:merge"),
        ),
    },
)

