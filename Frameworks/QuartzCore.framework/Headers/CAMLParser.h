/* Runtime dump - CAMLParser
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMLParser : NSObject
{
    struct _CAMLParserData * _data;
}

@property (retain) NSURL * baseURL;
@property (weak) id delegate;
@property (readonly) NSError * error;
@property (readonly) id result;

+ (MFMessageBodyParser *)parser;
+ (NSURL *)parseContentsOfURL:(NSURL *)arg0;

- (void)setElementValue:(id)arg0;
- (NSObject *)objectById:(NSObject *)arg0;
- (NSString *)attributeForKey:(NSString *)arg0 remove:(char)arg1;
- (void)parserError:(NSError *)arg0;
- (id)elementValue;
- (void)parserWarning:(id)arg0;
- (NSURL *)willLoadResourceFromURL:(NSURL *)arg0;
- (void)didLoadResource:(NSObject *)arg0 fromURL:(NSURL *)arg1;
- (BOOL)parseContentsOfURL:(NSURL *)arg0;
- (BOOL)parseBytes:(char *)arg0 length:(unsigned long)arg1;
- (BOOL)parseString:(NSString *)arg0;
- (NSURL *)didFailToLoadResourceFromURL:(NSURL *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (CAMLParser *)init;
- (NSObject *)delegate;
- (NSURL *)baseURL;
- (CKDPResponseOperationResult *)result;
- (NSError *)error;
- (void)setBaseURL:(NSURL *)arg0;
- (BOOL)parseData:(NSData *)arg0;

@end
