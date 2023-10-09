from flask import Flask, render_template, request
import os
import subprocess

app = Flask(__name__)

# Global filename (without extension) for all uploaded files
global_filename = "original"

@app.route('/')
def main():
    return render_template("Index.html")

@app.route('/success', methods=['POST'])
def success():
    if request.method == 'POST':
        f = request.files['file']
        if f:
            file_extension = os.path.splitext(f.filename)[-1]
            desired_filename = global_filename + file_extension
            f.save(desired_filename)
            # Call the py2.py script using subprocess with the full path
            script_directory = "/mnt/Coding/Visual Studio/projectSHM/"
            os.chdir(script_directory) #change directory
            script_path = "word_group.py"
            subprocess.run(["python", script_path])

            # Change the working directory to the script directory
            os.chdir(script_directory)
            script_path = "/mnt/Coding/Visual Studio/projectSHM/word_group.py"
            subprocess.run(["python", script_path])

            # return render_template("Acknowledgement.html", name=desired_filename)

            return "File uploaded successfully and py2.py was executed."

if __name__ == '__main__':
    app.run(debug=True)
