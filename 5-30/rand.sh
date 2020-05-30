rm -rf "data/$1"
mkdir "data/$1"
g++ "$1_std.cpp" -o "$1_std"
g++ "$1_rand.cpp" -o "$1_rand"
for((i=1;i<=$2;i++))
do
    ./"$1_rand" > "data/$1/t$i.in"
    ./"$1_std" < "data/$1/t$i.in" > "data/$1/t$i.out"
    sleep 1
done

