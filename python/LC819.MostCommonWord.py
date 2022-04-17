class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        tt = ""
        for i in range(len(paragraph)):
            if (paragraph[i]>= 'a' and paragraph[i] <='z') or (paragraph[i]>='A' and paragraph[i]<= 'Z'):
                tt = tt + paragraph[i]
            else:
                tt += " "
        print(tt)
        word1 = tt.split(' ')
        word = []
        for w in word1:
            temp = w.split()
            for i in temp:
                word.append(i.lower())
        print(word)
        b={}
        for i in word:
            if i not in b:
                b[i] = 1
            else:
                b[i] += 1

        for i in banned:
            if i in b:
                b.pop(i)
        
        cnt = 0
        res = ""
        for key in b:
            if b[key] > cnt:
                res = key
                cnt = b[key]
        return res

#定义一个变量
#str --> " ", dict --> {}, array --> []