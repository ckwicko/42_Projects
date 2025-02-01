if [ ! -d .git ]; then
	echo "Error: This is not a Git repository."
	exit 1
fi

git log --pretty=format:"%H" -n 5
