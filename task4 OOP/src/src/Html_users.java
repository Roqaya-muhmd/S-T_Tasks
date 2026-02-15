public class Html_users implements Email_format_strategy {
    @Override
    public void setbody() {
        System.out.println("[Email] Sending HTML format");
    }
}
