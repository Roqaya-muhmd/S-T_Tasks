public abstract class templete_post_answer {
   public String answerText;
    public final void post_answer(Answer answer){
        Save(answer);
        Notify(answer.getQuestionAsker(), answer.getText());
    }
    public void Save(Answer answer){
        System.out.println("[DB] Answer saved: " + this.answerText);
    }


    public void Notify(user questionAsker ,String answerText){
        NotificationManager manager = new NotificationManager();

        if (questionAsker.ispro) {
            manager.addStrategy(new Email(new Html_users()));
        } else {
            manager.addStrategy(new Email(new free_users()));
        }
    }
public abstract void validation();
}
