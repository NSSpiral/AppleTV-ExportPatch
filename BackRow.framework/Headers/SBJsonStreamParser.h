/* Runtime dump - SBJsonStreamParser
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class SBJsonStreamParserState, SBJsonTokeniser;
@interface SBJsonStreamParser : NSObject
{
    char supportMultipleDocuments;
    <SBJsonStreamParserDelegate> * delegate;
    SBJsonTokeniser * tokeniser;
    NSMutableArray * stateStack;
    SBJsonStreamParserState * state;
    unsigned int maxDepth;
    NSString * error;
}

@property (nonatomic) SBJsonStreamParserState * state;
@property (readonly, retain, nonatomic) NSMutableArray * stateStack;
@property char supportMultipleDocuments;
@property <SBJsonStreamParserDelegate> * delegate;
@property unsigned int maxDepth;
@property (copy) NSString * error;

- (void)setMaxDepth:(unsigned int)arg0;
- (void)maxDepthError;
- (void)handleObjectStart;
- (void)handleArrayStart;
- (char)supportMultipleDocuments;
- (void)setSupportMultipleDocuments:(char)arg0;
- (NSString *)tokenName:(int)arg0;
- (void)dealloc;
- (void)setDelegate:(<SBJsonStreamParserDelegate> *)arg0;
- (SBJsonStreamParser *)init;
- (<SBJsonStreamParserDelegate> *)delegate;
- (SBJsonStreamParserState *)state;
- (void)setState:(SBJsonStreamParserState *)arg0;
- (void).cxx_destruct;
- (NSString *)error;
- (int)parse:(id)arg0;
- (void)setError:(NSString *)arg0;
- (NSMutableArray *)stateStack;
- (unsigned int)maxDepth;

@end
