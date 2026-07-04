/* Runtime dump - ConfigParser
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BuiltinConfig;
@interface ConfigParser : NSObject
{
    struct XML_ParserStruct * parser_;
    int parserDepth_;
    int tagListDepth_;
    char * * currentTag_;
    BuiltinConfig * builtinConfig_;
    NSDictionary * builtinConfigParsableItems_;
    Class customNetflixConfigClass_;
    <NetflixConfigProtocol><NSObject> * customNetflixConfig_;
    NSDictionary * customNetflixConfigParsableItems_;
}

@property (retain) BuiltinConfig * builtinConfig;
@property (retain) <NetflixConfigProtocol><NSObject> * customNetflixConfig;
@property struct XML_ParserStruct * parser;
@property int parserDepth;
@property int tagListDepth;
@property char * * currentTag;
@property (retain) NSDictionary * builtinConfigParsableItems;
@property Class customNetflixConfigClass;
@property (retain) NSDictionary * customNetflixConfigParsableItems;

- (BuiltinConfig *)builtinConfig;
- (void)setBuiltinConfig:(BuiltinConfig *)arg0;
- (Class)customNetflixConfigClass;
- (void)setCustomNetflixConfigClass:(Class)arg0;
- (ConfigParser *)initWithCustomNetflixConfigClass:(Class)arg0;
- (<NetflixConfigProtocol><NSObject> *)customNetflixConfig;
- (void)setBuiltinConfigParsableItems:(NSDictionary *)arg0;
- (void)setCustomNetflixConfig:(<NetflixConfigProtocol><NSObject> *)arg0;
- (void)setCustomNetflixConfigParsableItems:(NSDictionary *)arg0;
- (int)parserDepth;
- (char * *)currentTag;
- (void)setParserDepth:(int)arg0;
- (int)tagListDepth;
- (void)setCurrentTag:(char * *)arg0;
- (void)setTagListDepth:(int)arg0;
- (NSDictionary *)builtinConfigParsableItems;
- (NSObject *)textToObject:(char *)arg0 cls:(Class)arg1;
- (NSDictionary *)customNetflixConfigParsableItems;
- (void)dumpTags;
- (void)startElement:(char *)arg0 withAttrs:(char * *)arg1;
- (void)endElement:(char *)arg0;
- (void)charData:(char *)arg0 withLength:(int)arg1;
- (void)setParser:(struct XML_ParserStruct *)arg0;
- (struct XML_ParserStruct *)parser;
- (void)dealloc;
- (ConfigParser *)init;
- (void).cxx_destruct;
- (BOOL)parse:(id)arg0;

@end
