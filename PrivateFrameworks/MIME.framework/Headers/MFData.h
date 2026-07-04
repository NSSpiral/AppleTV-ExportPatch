/* Runtime dump - MFData
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFData : NSData <NSCopying, NSMutableCopying>
{
    NSData * _internal;
    NSString * _path;
    NSData * _parent;
    char _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned int)arg0;

- (MFData *)initWithContentsOfMappedFile:(NSString *)arg0;
- (void)dealloc;
- (MFData *)init;
- (unsigned int)length;
- (char)writeToFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)writeToFile:(NSString *)arg0 atomically:(char)arg1;
- (char)writeToURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)writeToURL:(NSURL *)arg0 atomically:(char)arg1;
- (void *)bytes;
- (MFData *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (MFData *)initWithContentsOfFile:(NSString *)arg0;
- (MFData *)initWithData:(NSData *)arg0;
- (MFData *)initWithBytes:(void *)arg0 length:(void)arg1;
- (MFData *)initWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1 freeWhenDone:(char)arg2;
- (MFData *)initWithContentsOfFile:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (MFData *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (MFData *)initWithContentsOfURL:(NSURL *)arg0;
- (NSObject *)subdataWithRange:(struct _NSRange)arg0;
- (NSObject *)_initWithRange:(struct _NSRange)arg0 from:(NSObject *)arg1 retainingParent:(char)arg2;
- (char)mf_immutable;
- (NSData *)_initWithData:(NSData *)arg0 maybeMutable:(char)arg1;
- (NSString *)_initWithFile:(NSString *)arg0;
- (MFData *)initWithImmutableData:(NSData *)arg0;
- (MFData *)initWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1;
- (MFData *)initWithContentsOfURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;

@end
