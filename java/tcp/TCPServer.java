import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class TCPServer {
    public static void main(String[] args) {
        try {
            ServerSocket serverSocket = new ServerSocket(1111);
            System.out.println("Server listening on port 1111...");

            // Accept client connection
            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected: " + clientSocket.getInetAddress());

            // Create input and output streams for communication
            DataInputStream dis = new DataInputStream(clientSocket.getInputStream());
            DataOutputStream dos = new DataOutputStream(clientSocket.getOutputStream());

            // Read client message
            String clientMessage = dis.readUTF();
            System.out.println("Received from client: " + clientMessage);

            // Send response back to client
            String serverResponse = "Hello, client!";
            dos.writeUTF(serverResponse);
            dos.flush();
            System.out.println("Sent to client: " + serverResponse);

            // Close the connections
            dis.close();
            dos.close();
            clientSocket.close();
            serverSocket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
