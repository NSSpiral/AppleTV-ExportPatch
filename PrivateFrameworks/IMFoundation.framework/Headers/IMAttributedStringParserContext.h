/* Runtime dump - IMAttributedStringParserContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMAttributedStringParserContext : NSObject
{
    NSAttributedString * _inString;
}

@property (readonly, retain) NSAttributedString * inString;
@property (readonly, retain) NSString * name;
@property (readonly, retain) NSArray * resultsForLogging;
@property (readonly) char shouldPreprocess;

- (void)dealloc;
- (NSString *)name;
- (IMAttributedStringParserContext *)initWithAttributedString:(NSAttributedString *)arg0;
- (NSArray *)resultsForLogging;
- (NSObject *)parser:(NSXMLParser *)arg0 preprocessedAttributesForAttributes:(NSDictionary *)arg1 range:(struct _NSRange)arg2;
- (NSAttributedString *)inString;
- (void)parserDidStart:(id)arg0;
- (char)shouldPreprocess;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2;
- (void)parserDidEnd:(id)arg0;

@end
