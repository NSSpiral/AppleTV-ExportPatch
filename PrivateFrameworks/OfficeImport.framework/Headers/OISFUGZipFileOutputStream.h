/* Runtime dump - OISFUGZipFileOutputStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream>
{
    void * _file;
    long long _offset;
    NSString * _path;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (OISFUGZipFileOutputStream *)gzipExtension;

- (void)dealloc;
- (NSString *)path;
- (long long)offset;
- (void)close;
- (OISFUGZipFileOutputStream *)initWithPath:(NSString *)arg0;
- (NSInputStream *)inputStream;
- (void)seekToOffset:(long long)arg0 whence:(int)arg1;
- (char)canCreateInputStream;
- (NSObject *)closeLocalStream;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (char)canSeek;

@end
