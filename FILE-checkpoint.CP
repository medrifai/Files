{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 20,
   "id": "5783027d",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "What is Python language?                                                \n",
      "Python is a widely used high-level, general-purpose, interpreted, dynamic programming language.Its design philosophy emphasizes code readability, and its syntax allows programmers to express concepts in fewer lines of code than possible in \n",
      "languages such as C++ or Java. \n",
      "Python supports multiple programming paradigms, including object-oriented, imperative and functional programming or procedural styles. It features a dynamic type system and automatic memory management and has a large and comprehensive standard library.The best way we learn anything is by practice and exercise questions. We  have started this section for those (beginner to intermediate) who are familiar with Python.\n"
     ]
    }
   ],
   "source": [
    "with open ('python.txt') as f :\n",
    "    print(f.read())"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 21,
   "id": "3038c416",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "What is Python language?                                                \n",
      "Python is a widely used high-level, general-purpose, interpreted, dynamic programming language.Its design philosophy emphasizes code readability, and its syntax allows programmers to express concepts in fewer lines of code than possible in \n",
      "languages such as C++ or Java. \n",
      "\n"
     ]
    }
   ],
   "source": [
    "n = 3\n",
    "with open ('python.txt') as f :\n",
    "    print(''.join(f.readlines()[:n]))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 22,
   "id": "f7354df3",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "What is Python language?                                                \n",
      "Python is a widely used high-level, general-purpose, interpreted, dynamic programming language.Its design philosophy emphasizes code readability, and its syntax allows programmers to express concepts in fewer lines of code than possible in \n",
      "languages such as C++ or Java. \n"
     ]
    }
   ],
   "source": [
    "n = 3\n",
    "with open ('python.txt') as f :\n",
    "    for i in range (n) :\n",
    "        print(f.readline(),end = '')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 23,
   "id": "2e8b1796",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Python is a widely used high-level, general-purpose, interpreted, dynamic programming language.Its design philosophy emphasizes code readability, and its syntax allows programmers to express concepts in fewer lines of code than possible in \n",
      "languages such as C++ or Java. \n",
      "Python supports multiple programming paradigms, including object-oriented, imperative and functional programming or procedural styles. It features a dynamic type system and automatic memory management and has a large and comprehensive standard library.The best way we learn anything is by practice and exercise questions. We  have started this section for those (beginner to intermediate) who are familiar with Python.\n"
     ]
    }
   ],
   "source": [
    "n = 3\n",
    "with open ('python.txt') as f :\n",
    "    print(''.join(f.readlines()[-n :]))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 27,
   "id": "da2540a4",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "100"
      ]
     },
     "execution_count": 27,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "f = open ('python.txt')\n",
    "text = f.read()\n",
    "text = text.split()\n",
    "f.close()\n",
    "len(text)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "149b9ced",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.9.7"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
