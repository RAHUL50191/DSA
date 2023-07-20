import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

public class TCPClient {
    public static void main(String[] args) {
        try {
            Socket socket = new Socket("localhost", 1111);
            System.out.println("Connected to server: " + socket.getInetAddress());

            // Create input and output streams for communication
            DataInputStream dis = new DataInputStream(socket.getInputStream());
            DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

            // Send message to server
            String message = "Hello, server!";
            dos.writeUTF(message);
            dos.flush();
            System.out.println("Sent to server: " + message);

            // Receive response from server
            String serverResponse = dis.readUTF();
            System.out.println("Received from server: " + serverResponse);

            // Close the connections
            dis.close();
            dos.close();
            socket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
