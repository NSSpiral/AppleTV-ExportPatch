/* Runtime dump - IMAttributedStringParser
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMAttributedStringParser : NSObject
{
    IMAttributedStringParserContext * _context;
}

+ (IMAttributedStringParser *)sharedInstance;

- (void)parseContext:(struct __MSSSPCChunkParsingContext *)arg0;
- (void)_preprocessWithContext:(IMAttributedStringParserContext *)arg0 string:(id *)arg1;

@end
