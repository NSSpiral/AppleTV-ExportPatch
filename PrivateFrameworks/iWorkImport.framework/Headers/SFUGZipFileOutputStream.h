/* Runtime dump - SFUGZipFileOutputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUGZipFileOutputStream : NSObject <SFUOutputStream>
{
    void * _file;
    long long _offset;
    NSString * _path;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SFUGZipFileOutputStream *)gzipExtension;

- (void)dealloc;
- (NSString *)path;
- (long long)offset;
- (void)close;
- (SFUGZipFileOutputStream *)initWithPath:(NSString *)arg0;
- (NSInputStream *)inputStream;
- (void)seekToOffset:(long long)arg0 whence:(int)arg1;
- (char)canCreateInputStream;
- (NSObject *)closeLocalStream;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (char)canSeek;

@end
