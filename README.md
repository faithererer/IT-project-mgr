# IT项目管理实验3

# tasks:
- 6人每人创建一个新分支命名`sort_学号`来编写一个排序demo，编写完成后合并到主分支。
- 每个人的编写的代码应该在各自的`/sort_学号`文件夹中编写。


# steps(成员)
- 克隆仓库
  ```
  git clone https://github.com/faithererer/IT-project-mgr.git
  ```
- 拉取更改:
    ```
    git pull origin master
    ```
  
- 确保切换到`master`分支
  ```
  git checkout -b sort_你的学号
  ```
  这个命令会创建一个新的分支 feature-x 并切换到这个分支。这时候，你可以在这个分支上自由地开发新功能，而不会影响 main 分支。

 - 编写完成你的code后:
    ```
    git add .
    git commit -m "YOUR_NAME + 任何信息"
    ```

- 推送更改
  ```
  git push origin sort_你的学号
  ```

- 创建拉取请求 (Pull Request)
    每个成员在自己的分支开发完成并推送到远程仓库后，需要在 GitHub 上创建一个拉取请求，请求将他们的分支合并到 main 分支。具体步骤如下：

    登录到 GitHub 网站。
    进入你们的项目仓库页面。
    点击“Pull requests”选项卡，然后点击“New pull request”按钮。
    选择 base: main （基底分支，即你们想要合并进去的分支）和 compare: sort_你的学号 （比较分支，即你们希望从中拉取更改的分支）。
    填写一些描述信息，解释你的更改内容和目的，然后点击“Create pull request”。

