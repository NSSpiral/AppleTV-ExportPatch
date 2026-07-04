/* Runtime dump - GQZArchiveMemoryInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream>
{
    NSData * mData;
    char * mBytes;
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
- (GQZArchiveMemoryInputStream *)initWithData:(NSData *)arg0;

@end
