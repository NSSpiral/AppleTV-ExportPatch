/* Runtime dump - AFUserUtterance
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUserUtterance : NSObject
{
    NSMutableArray * _phrases;
    NSMutableArray * _tokens;
    NSString * _text;
    NSDictionary * _correctionIdentifier;
}

@property (readonly, nonatomic) NSDictionary * correctionIdentifier;
@property (readonly, nonatomic) NSArray * dictationResult;

- (NSString *)description;
- (void).cxx_destruct;
- (id)bestTextInterpretation;
- (AFUserUtterance *)initWithPhrases:(NSMutableArray *)arg0 correctionIdentifier:(NSDictionary *)arg1;
- (AFUserUtterance *)initWithTokens:(NSMutableArray *)arg0 correctionIdentifier:(NSDictionary *)arg1;
- (AFUserUtterance *)initWithString:(NSString *)arg0 correctionIdentifier:(NSDictionary *)arg1;
- (NSArray *)dictationResult;
- (id)streamingTokens;
- (NSDictionary *)correctionIdentifier;

@end
