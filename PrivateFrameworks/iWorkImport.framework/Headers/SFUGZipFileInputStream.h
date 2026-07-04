/* Runtime dump - SFUGZipFileInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUGZipFileInputStream : NSObject <SFUInputStream>
{
    int _fd;
    void * _file;
    char _isCachingDisabled;
    long long _offset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)offset;
- (void)close;
- (SFUGZipFileInputStream *)initWithPath:(NSString *)arg0;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (char)canSeek;

@end
