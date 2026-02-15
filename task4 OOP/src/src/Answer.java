public class Answer {
    private String text;
    private user author;
    private user questionAsker;

    public Answer(String text, user author, user questionAsker) {
        this.text = text;
        this.author = author;
        this.questionAsker = questionAsker;
    }

    public String getText() { return text; }
    public user getAuthor() { return author; }
    public user getQuestionAsker() { return questionAsker; }
}
