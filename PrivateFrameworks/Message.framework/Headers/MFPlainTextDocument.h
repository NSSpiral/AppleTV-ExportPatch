/* Runtime dump - MFPlainTextDocument
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPlainTextDocument : NSObject
{
    NSMutableString * _text;
    NSMutableArray * _fragments;
}

- (void)dealloc;
- (NSString *)string;
- (void)getFormatFlowedString:(id *)arg0 insertedTrailingSpaces:(char *)arg1 encoding:(unsigned long)arg2;
- (NSString *)quotedString:(unsigned long)arg0;
- (unsigned int)fragmentCount;
- (void)getString:(id *)arg0 quoteLevel:(unsigned int *)arg1 ofFragmentAtIndex:(unsigned int)arg2;
- (void)appendString:(NSString *)arg0 withQuoteLevel:(unsigned int)arg1;
- (NSDictionary *)archivedRepresentation;
- (void)appendArchivedRepresentation:(NSDictionary *)arg0;

@end
