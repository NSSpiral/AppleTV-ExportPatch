/* Runtime dump - MFProgressiveMimeParser
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFProgressiveMimeParser : NSObject
{
    NSMutableData * _data;
    NSArray * _preserveHeaders;
    id _delegate;
    id _context;
    unsigned int _cursor;
    unsigned int _lastLength;
    MFMimePart * _topLevelPart;
    MFMimePart * _currentPart;
    NSData * _currentBoundary;
    struct ? _parserFlags;
}

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSMutableData *)data;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)start;
- (void)_reportError:(NSError *)arg0;
- (MFMimePart *)topLevelPart;
- (void)_initializeTopLevelPartWithHeaders:(NSDictionary *)arg0;
- (void)_continueParsing;
- (NSData *)_currentBoundary;
- (void)_continueParsingStartOfPart;
- (void)_continueParsingHeaders;
- (void)_continueParsingBody;
- (MFProgressiveMimeParser *)initWithBodyData:(NSData *)arg0 topLevelHeaders:(NSDictionary *)arg1 headersToPreserve:(id)arg2;
- (void)noteDataLengthChanged:(unsigned int)arg0;
- (MFMimePart *)currentPart;

@end
