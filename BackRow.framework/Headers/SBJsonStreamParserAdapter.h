/* Runtime dump - SBJsonStreamParserAdapter
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol SBJsonStreamParserDelegate;

@class SBJsonStreamParser;
@interface SBJsonStreamParserAdapter : NSObject <SBJsonStreamParserDelegate>
{
    <SBJsonStreamParserAdapterDelegate> * delegate;
    unsigned int levelsToSkip;
    unsigned int depth;
    NSMutableArray * array;
    NSMutableDictionary * dict;
    NSMutableArray * keyStack;
    NSMutableArray * stack;
    int currentType;
}

@property unsigned int levelsToSkip;
@property <SBJsonStreamParserAdapterDelegate> * delegate;

- (void)parserFoundObjectStart:(SBJsonStreamParser *)arg0;
- (void)parserFoundArrayStart:(SBJsonStreamParser *)arg0;
- (void)parserFoundObjectEnd:(SBJsonStreamParser *)arg0;
- (void)parserFoundArrayEnd:(SBJsonStreamParser *)arg0;
- (void)parser:(SBJsonStreamParser *)arg0 foundBoolean:(char)arg1;
- (void)parserFoundNull:(SBJsonStreamParser *)arg0;
- (void)parser:(SBJsonStreamParser *)arg0 foundNumber:(NSNumber *)arg1;
- (void)parser:(SBJsonStreamParser *)arg0 foundObjectKey:(NSString *)arg1;
- (void)parser:(SBJsonStreamParser *)arg0 foundString:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 found:(SAAssistantNotFound *)arg1;
- (unsigned int)levelsToSkip;
- (void)setLevelsToSkip:(unsigned int)arg0;
- (void)setDelegate:(<SBJsonStreamParserAdapterDelegate> *)arg0;
- (SBJsonStreamParserAdapter *)init;
- (<SBJsonStreamParserAdapterDelegate> *)delegate;
- (void)pop;
- (void).cxx_destruct;

@end
