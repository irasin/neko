def upround(x, y):
    return (x + y - 1) // y *y


def solve(size, M=384):
    dim = len(size)
    if dim == 3:
        A, B, C = size[0], size[1], size[2]
        minlist = [A * B * C, A * B * C, A * B * C]
        minnum = A * B * C
        minsize = [1, 1, 1]
        for i in range(1, M + 1):
            res_jk = M // i
            for j in range(1, res_jk + 1):
                res_k = res_jk // j
                for k in range(1, res_k + 1):
                    An = upround(A, i)
                    Bn = upround(B, j)
                    Cn = upround(C, k)
                    a = An // i
                    b = Bn // j
                    c = Cn // k
                    if a * b * c <= minnum:
                        minlist = [An, Bn, Cn]
                        minnum = a * b * c 
                        minsize = [i, j, k]
                        # print(An, Bn, Cn, i, j, k, minnum)              
        return minlist, minsize, minnum
    elif dim == 2:
        A, B = size[0], size[1]
        minlist = [A*B, A*B]
        minnum = A * B
        minsize = [1, 1]
        for i in range(1, M + 1):
            res_j = M // i
            for j in range(1, res_j + 1):
                An = upround(A, i)
                Bn = upround(B, j)
                a = An // i
                b = Bn // j
                if a * b  <= minnum:
                    minlist = [An, Bn]
                    minnum = a * b
                    minsize = [i, j]
                # print(An, Bn, Cn, i, j, k, minnum)
        return minlist, minsize, minnum
    elif dim == 1:
        A = size[0]
        An = upround(A, M)
        minlist = [An]
        minsize = M
        minnum = An // M
        return minlist, minsize, minnum
    else:
        raise
                
        


solve(123, 231, 51)
solve(50, 50, 16)      
solve([58, 81, 61])
