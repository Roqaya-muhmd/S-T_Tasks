import java.util.ArrayList;
import java.util.List;

public class NotificationManager {
    private List<strategy> strategies = new ArrayList<>();

    public void addStrategy(strategy strategy) {
        strategies.add(strategy);
    }

    public void notifyUser(user user, String message) {
        for (strategy strategy : strategies) {
            strategy.send(user, message);
        }
    }
}
