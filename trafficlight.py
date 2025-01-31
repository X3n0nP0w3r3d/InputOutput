def main2(x, n, p):
    # --------
    # --x----- longest 5
    # --x--x--
    gap = left = 0
    right = x
    res = []
    for i, t in enumerate(p):
        # print(f"{left=} {right=} {gap=} {t}")
        if t > right or t < left:
            # print("outside longest gap")
            res.append(gap)
            continue
        if (t - left) > (right - t):
            gap = t - left
            right = t
        elif (t - left) <= (right - t):
            gap = right - t
            left = t
        res.append(gap)
    print(" ".join(map(str, res)))


def main():
    x, n = [int(x) for x in input().split()]
    ps = [int(x) for x in input().split()]
    main2(x, n, ps)
main()