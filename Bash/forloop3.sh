#!/usr/bin/env bash
# this method/syntax is very similar to its parent language C. and has been depricated.
for i in `seq 0 10`; do
  printf "$i\n"
done
# this is the new syntax for a sequence in #!/usr/bin/env bash {start..end..increment}
for i in {0..10..1} ; do
  printf "$i\n"
done
