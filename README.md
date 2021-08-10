git is seample you just need to pratice
4、接下来在你要上传的目录上右键，点击 Git Bash Here 新打开一个窗口

1.然后对本地文件进行初始化，输入命令：git init,  执行之后目录中多出一个.git 文件夹

2.执行  git add .（注意后面有一个点）

3.执行 git commit -m "你的说明注释"

 5、连接GitHub仓库



1. 执行： git remote add origin 你的仓库地址

2.如果你的远程仓库有README.md文件，请执行命令：git pull --rebase origin master, 如没有跳过该步骤

3.执行：git push -u origin master

然后提示输入github账号密码即可

全部执行成功之后，刷新GitHub页面，本地文件成功上传至远程仓库。
