public class Email implements strategy{
    public Email_format_strategy format;

    public Email(Email_format_strategy format) {
        this.format = format;
    }

    public Email_format_strategy getFormat() {
        return format;
    }

    public void send(user user, String message){
format.setbody();
       System.out.println(message+" send (Email)to "+user);
    }
}
