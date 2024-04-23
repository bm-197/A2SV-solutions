class Solution(object):
    def interpret(self, command):
        """
        :type command: str
        :rtype: str
        """
        dict_command = {"G": "G", "()":"o", "(al)": "al"}
        out = ""

        for i in range(len(command)):
            if command[i] in dict_command:
                out+=dict_command[command[i]]
            elif command[i:i+2] in dict_command:
                out+=dict_command[command[i:i+2]]
            elif command[i:i+4] in dict_command:
                out+=dict_command[command[i:i+4]]
        return out
            

        