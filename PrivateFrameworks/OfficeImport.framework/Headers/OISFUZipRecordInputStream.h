/* Runtime dump - OISFUZipRecordInputStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipRecordInputStream : NSObject
{
    <OISFUBufferedInputStream> * mInput;
    char * mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}

- (void)dealloc;
- (OISFUZipRecordInputStream *)initWithDataRepresentation:(NSData *)arg0;
- (char *)dataAtOffset:(SEL)arg0 size:(long long)arg1 end:(unsigned long)arg2;

@end
