package lab3;

public class Tree {
	static int height;

	Tree() {
		height = 1;
	}

	public static int currentHeight(int n) {
		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0)
				height += 2;
			else
				height *= 3;
		}
		return height;
	}

	public static int getHeight() {
		return height;
	}
}
