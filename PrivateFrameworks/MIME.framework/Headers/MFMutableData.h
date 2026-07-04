/* Runtime dump - MFMutableData
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying>
{
    void * _bytes;
    unsigned int _length;
    unsigned int _mappedLength;
    unsigned int _capacity;
    unsigned int _threshold;
    char * _path;
    int _fd;
    unsigned int _flushFrom;
    char _flush;
    char _immutable;
    char _vm;
}

- (MFMutableData *)initWithContentsOfMappedFile:(NSString *)arg0;
- (void)dealloc;
- (MFMutableData *)init;
- (unsigned int)length;
- (char)writeToFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)writeToFile:(NSString *)arg0 atomically:(char)arg1;
- (MFMutableData *)initWithCapacity:(unsigned int)arg0;
- (char)writeToURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)writeToURL:(NSURL *)arg0 atomically:(char)arg1;
- (void *)bytes;
- (MFMutableData *)copyWithZone:(struct _NSZone *)arg0;
- (void)appendBytes:(void *)arg0 length:(void)arg1;
- (MFMutableData *)initWithContentsOfFile:(NSString *)arg0;
- (MFMutableData *)initWithData:(NSData *)arg0;
- (void)setLength:(unsigned int)arg0;
- (MFMutableData *)initWithBytes:(void *)arg0 length:(void)arg1;
- (MFMutableData *)initWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1 freeWhenDone:(char)arg2;
- (MFMutableData *)initWithContentsOfFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (MFMutableData *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)appendData:(NSData *)arg0;
- (MFMutableData *)initWithContentsOfURL:(NSURL *)arg0;
- (void *)mutableBytes;
- (NSObject *)subdataWithRange:(struct _NSRange)arg0;
- (char)mf_immutable;
- (void)_mapMutableData:(char)arg0;
- (void)_flushToDisk:(unsigned int)arg0 capacity:(unsigned int)arg1;
- (MFMutableData *)_initWithFd:(int)arg0 path:(char *)arg1 mutable:(char)arg2;
- (void)setMappingThreshold:(unsigned int)arg0;
- (void)mf_makeImmutable;
- (MFMutableData *)initWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1;
- (MFMutableData *)initWithContentsOfURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (MFMutableData *)initWithLength:(unsigned int)arg0;

@end
