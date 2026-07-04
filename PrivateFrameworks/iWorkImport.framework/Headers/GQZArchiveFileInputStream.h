/* Runtime dump - GQZArchiveFileInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZArchiveFileInputStream : NSObject <GQZArchiveInputStream>
{
    struct __sFILE * mFile;
    char * mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
    long long mSize;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char *)dataAtOffset:(SEL)arg0 size:(long long)arg1 end:(unsigned long)arg2 readSize:(long long)arg3;
- (void)readFromOffset:(long long)arg0 size:(unsigned long)arg1 buffer:(char *)arg2;
- (void)dealloc;
- (long long)size;
- (GQZArchiveFileInputStream *)initWithPath:(NSString *)arg0;

@end
