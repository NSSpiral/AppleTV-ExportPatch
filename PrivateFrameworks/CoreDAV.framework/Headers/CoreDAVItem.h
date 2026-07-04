/* Runtime dump - CoreDAVItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVItem : NSObject <CoreDAVItem>
{
    NSString * _name;
    NSString * _nameSpace;
    NSMutableSet * _attributes;
    NSMutableArray * _extraChildItems;
    NSData * _payload;
    char _useCDATA;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * nameSpace;
@property (retain, nonatomic) NSMutableSet * attributes;
@property (retain, nonatomic) NSMutableArray * extraChildItems;
@property (retain, nonatomic) NSData * payload;
@property (nonatomic) char useCDATA;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)copyParseRules;
+ (NSCache *)parseRuleCache;

- (void)dealloc;
- (CoreDAVItem *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSData *)payload;
- (char)validate;
- (NSMutableSet *)attributes;
- (NSString *)hashString;
- (void)setAttributes:(NSMutableSet *)arg0;
- (void)setPayload:(NSData *)arg0;
- (NSString *)nameSpace;
- (void)write:(char *)arg0;
- (NSString *)payloadAsString;
- (NSMutableArray *)extraChildItems;
- (void)setNameSpace:(NSString *)arg0;
- (CoreDAVItem *)initWithNameSpace:(NSString *)arg0 andName:(id *)arg1;
- (NSArray *)copyParseRules;
- (id)childrenToWrite;
- (void)parserFoundAttributes:(NSDictionary *)arg0;
- (void)parserFoundPayload:(NSData *)arg0;
- (void)parserFoundUnrecognizedElement:(NSObject *)arg0;
- (void)parserSuggestsBaseURL:(NSURL *)arg0;
- (void)setPayloadAsString:(NSString *)arg0;
- (NSString *)generateXMLString;
- (void)setExtraChildItems:(NSMutableArray *)arg0;
- (char)useCDATA;
- (void)setUseCDATA:(char)arg0;

@end
