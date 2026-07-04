/* Runtime dump - NSMutableData
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableData : NSData

@property (readonly) void * mutableBytes;
@property unsigned int length;

+ (NSMutableData *)allocWithZone:(struct _NSZone *)arg0;
+ (NSMutableData *)dataWithLength:(unsigned int)arg0;
+ (NSMutableData *)dataWithCapacity:(unsigned int)arg0;

- (void)tsp_appendDispatchData:(NSData *)arg0;
- (void)appendLELong:(long)arg0;
- (void)replaceBytesInRange:(struct _NSRange)arg0 withLELong:(long)arg1;
- (void)appendLEShort:(short)arg0;
- (void)appendString:(NSString *)arg0 encoding:(unsigned int)arg1;
- (void)mf_convertNetworkLineEndingsToUnixInRange:(struct _NSRange)arg0;
- (void)mf_makeImmutable;
- (void)mf_appendCString:(char *)arg0;
- (void)mf_convertNetworkLineEndingsToUnix;
- (void)mf_appendRFC2231CompliantValue:(id)arg0 forKey:(NSString *)arg1;
- (void)abAppendString:(NSString *)arg0;
- (char)_isCompact;
- (void)resetBytesInRange:(struct _NSRange)arg0;
- (void)replaceBytesInRange:(struct _NSRange)arg0 withBytes:(void *)arg1;
- (NSMutableData *)initWithCapacity:(unsigned int)arg0;
- (void)appendBytes:(void *)arg0 length:(void)arg1;
- (Class)classForCoder;
- (void)setData:(NSData *)arg0;
- (void)setLength:(unsigned int)arg0;
- (void)appendData:(NSData *)arg0;
- (void *)mutableBytes;
- (NSMutableData *)initWithLength:(unsigned int)arg0;
- (void)replaceBytesInRange:(struct _NSRange)arg0 withBytes:(void *)arg1 length:(void)arg2;
- (void)increaseLengthBy:(unsigned int)arg0;

@end
