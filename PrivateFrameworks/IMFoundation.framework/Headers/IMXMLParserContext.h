/* Runtime dump - IMXMLParserContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMXMLParserContext : NSObject
{
    NSData * _inContentAsData;
}

@property (readonly, retain) NSData * inContentAsData;
@property (readonly, retain) NSString * name;
@property (readonly, retain) NSArray * resultsForLogging;

- (void)dealloc;
- (NSString *)name;
- (void)reset;
- (NSArray *)resultsForLogging;
- (NSData *)inContentAsData;
- (IMXMLParserContext *)initWithContentAsData:(NSData *)arg0;
- (IMXMLParserContext *)initWithContent:(NSObject *)arg0;
- (NSString *)inContent;

@end
