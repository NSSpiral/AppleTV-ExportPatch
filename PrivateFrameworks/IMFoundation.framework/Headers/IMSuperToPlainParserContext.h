/* Runtime dump - IMSuperToPlainParserContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMSuperToPlainParserContext : IMFromSuperParserContext
{
    NSMutableString * _plainString;
    char _extractLinks;
}

@property (readonly, nonatomic) NSString * plainString;

- (void)dealloc;
- (NSString *)name;
- (IMSuperToPlainParserContext *)initWithAttributedString:(NSAttributedString *)arg0;
- (NSString *)plainString;
- (NSArray *)resultsForLogging;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2 characters:(NSString *)arg3;
- (IMSuperToPlainParserContext *)initWithAttributedString:(NSAttributedString *)arg0 extractLinks:(char)arg1;

@end
