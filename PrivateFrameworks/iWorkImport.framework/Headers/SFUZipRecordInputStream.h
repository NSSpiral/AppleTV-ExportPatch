/* Runtime dump - SFUZipRecordInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipRecordInputStream : NSObject
{
    <SFUBufferedInputStream> * mInput;
    char * mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}

- (void)dealloc;
- (SFUZipRecordInputStream *)initWithDataRepresentation:(NSData *)arg0;
- (char *)dataAtOffset:(SEL)arg0 size:(long long)arg1 end:(unsigned long)arg2;

@end
