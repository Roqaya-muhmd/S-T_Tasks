import java.util.Locale;

public class AnswerProcessorFactory {
public void CreateAnswerProcessor(String portal_type){
    switch (portal_type.toLowerCase()){
        case "standard":
              new StandardAnswerProcessor();
        case "kids":
             new KidsAnswerProcessor();

    }
}
}
