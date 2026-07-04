/* Runtime dump - ICSTokenizer
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTokenizer : NSObject
{
    NSData * _data;
    char * _datastring;
    int _length;
    int _cursor;
    char * _token;
    int _tokenType;
    int _expectedNextTokenType;
    char _printedICS;
    int _logCount;
}

@property char printedICS;
@property int logCount;

- (void)dealloc;
- (NSString *)debugDescription;
- (ICSTokenizer *)initWithData:(NSData *)arg0;
- (int)tokenType;
- (char *)nextToken;
- (char *)currentToken;
- (char)printedICS;
- (void)setPrintedICS:(char)arg0;
- (int)logCount;
- (void)setLogCount:(int)arg0;
- (char)consumeFolding;
- (char)consumeEOL;
- (void)consumeWhiteSpace;
- (char)consumeEscaped:(char *)arg0;
- (void)consumePropName;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropValue;

@end
