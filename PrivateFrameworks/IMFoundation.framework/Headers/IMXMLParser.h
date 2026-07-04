/* Runtime dump - IMXMLParser
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMXMLParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser * _parser;
    IMXMLParserContext * _context;
    IMXMLParserFrame * _topFrame;
    NSMutableArray * _otherFrames;
    struct _TidyDoc * _tidyDoc;
    struct __CFDictionary * _framespace;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (IMXMLParser *)sharedInstance;

- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)parser:(NSXMLParser *)arg0 foundIgnorableWhitespace:(id)arg1;
- (void)parser:(NSXMLParser *)arg0 parseErrorOccurred:(NSError *)arg1;
- (void)_teardownTidy;
- (void)_setupTidy;
- (NSData *)_newDataByTidyingData:(NSData *)arg0;
- (char)parseContext:(struct __MSSSPCChunkParsingContext *)arg0;

@end
