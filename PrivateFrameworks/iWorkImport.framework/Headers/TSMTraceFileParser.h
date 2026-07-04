/* Runtime dump - TSMTraceFileParser
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSMTraceFileParser : NSObject
{
    NSData * mData;
    struct TSMTraceRecord_s * mRecordBuffer;
    unsigned int mOffset;
    unsigned int mDataLength;
}

+ (char)dataIsTraceFile:(NSString *)arg0;
+ (NSData *)parserWithData:(NSData *)arg0;

- (struct TSMTraceRecord_s *)nextTraceRecord;
- (void)dealloc;
- (TSMTraceFileParser *)initWithData:(NSData *)arg0;

@end
