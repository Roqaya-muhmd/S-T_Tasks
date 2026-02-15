public class Notification {
    boolean isLowPriority;
    private String message;
    private strategy stratgy;
    private boolean isHighPriority;

    public Notification(String message, strategy stratgy, boolean isHighPriority) {
        this.message = message;
        this.stratgy = stratgy;
        this.isHighPriority = isHighPriority;
    }

    public void send(user user) {
        stratgy.send(user, message);
    }

    public boolean isLowPriority() {
        return !isHighPriority;
    }
}
