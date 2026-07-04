/* Runtime dump - NSSubrangeData
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubrangeData : NSData
{
    id _reserved;
    id _retainCount;
    struct _NSRange _range;
    NSData * _data;
}

- (char)_isCompact;
- (NSSubrangeData *)initWithData:(NSData *)arg0 range:(struct _NSRange)arg1;
- (void)getBytes:(void *)arg0;
- (void)dealloc;
- (NSSubrangeData *)init;
- (unsigned int)length;
- (void *)bytes;
- (NSSubrangeData *)copyWithZone:(struct _NSZone *)arg0;
- (void)getBytes:(void *)arg0 length:(unsigned int)arg1;
- (void)getBytes:(void *)arg0 range:(struct _NSRange)arg1;

@end
