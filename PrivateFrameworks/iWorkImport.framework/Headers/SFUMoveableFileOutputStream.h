/* Runtime dump - SFUMoveableFileOutputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream>
{
    int mFd;
    NSString * mPath;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)flush;
- (NSString *)path;
- (long long)offset;
- (void)close;
- (SFUMoveableFileOutputStream *)initWithPath:(NSString *)arg0;
- (NSInputStream *)inputStream;
- (void)seekToOffset:(long long)arg0 whence:(int)arg1;
- (char)canCreateInputStream;
- (SFUMoveableFileOutputStream *)initWithTemporaryFile:(NSString *)arg0;
- (char)moveToPath:(NSString *)arg0;
- (void)truncateToLength:(long long)arg0;
- (NSObject *)closeLocalStream;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (char)canSeek;

@end
