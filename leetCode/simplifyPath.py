class Solution(object):
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str
        """
        directories = path.split("/")
        stack = []

        for directory in directories:
            if directory == '.':
                pass
            elif directory == '..':
                if stack:
                    stack.pop()
            elif directory != "":
                stack.append(directory)
        
        return "/" + "/".join(stack)
