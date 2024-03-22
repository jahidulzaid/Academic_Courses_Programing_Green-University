import java.util.*;

public class PathDFS {
    static int[][] graph = new int[10][10];
    static int[] stack = new int[20];
    static int[] visit = new int[20];
    static int top = -1;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of nodes:");
        int node = sc.nextInt();

        for (int i = 0; i < node; i++)
            for (int j = 0; j < node; j++) {
                graph[i][j] = 0;
            }

        System.out.println("Enter number of edges:");
        int edge = sc.nextInt();
        System.out.println("Enter the " + edge + " edges: ");
        for (int i = 0; i < edge; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            graph[a][b] = graph[b][a] = 1;
        }

        System.out.println("Enter the source node: ");
        int src = sc.nextInt();
        System.out.println("Enter the destination node: ");
        int dest = sc.nextInt();

        // Implementing DFS to find the path
        List<Integer> path = findPathDFS(src, dest, node);

        if (path.isEmpty()) {
            System.out.println("No path found from source to destination.");
        } else {
            System.out.println("Path from source to destination using DFS:");
            for (int nodeInPath : path) {
                System.out.print(nodeInPath + " ");
            }
        }
        sc.close();
    }

    static List<Integer> findPathDFS(int src, int dest, int node) {
        List<Integer> path = new ArrayList<>();
        int flag = 0;

        for (int i = 0; i < node; i++)
            visit[i] = 0;

        push(src);
        while (top != -1) {
            int per = peak();
            boolean nodeVisited = false;

            for (int cd = 0; cd < node; cd++) {
                if (graph[per][cd] == 1 && visit[cd] == 0) {
                    push(cd);
                    nodeVisited = true;
                    visit[cd] = 1;
                    if (cd == dest) {
                        flag = 1;
                        break;
                    }
                    path.add(cd);
                    break;
                }
            }

            if (flag == 1) {
                break;
            }

            if (!nodeVisited) {
                pop();
            }
        }

        return path;
    }

    static void push(int n) {
        stack[++top] = n;
        visit[n] = 1;
    }

    static void pop() {
        --top;
    }

    static int peak() {
        return stack[top];
    }
    
}
