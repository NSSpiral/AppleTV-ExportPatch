/* Runtime dump - NSSimpleCString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleCString : NSString
{
    char * bytes;
    int numBytes;
}

+ (NSSimpleCString *)allocWithZone:(struct _NSZone *)arg0;

- (char *)_fastCStringContents:(SEL)arg0;
- (unsigned int)cStringLength;
- (NSObject *)_newSubstringWithRange:(struct _NSRange)arg0 zone:(struct _NSZone *)arg1;
- (unsigned int)fastestEncoding;
- (unsigned int)smallestEncoding;
- (NSSimpleCString *)initWithCStringNoCopy:(char *)arg0 length:(unsigned int)arg1;
- (char)isEqualToString:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)hasPrefix:(NSString *)arg0;
- (unsigned int)length;
- (NSSimpleCString *)copyWithZone:(struct _NSZone *)arg0;
- (char)hasSuffix:(NSString *)arg0;
- (NSString *)stringByAppendingString:(NSString *)arg0;
- (int)compare:(NSObject *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (char)getBytes:(void *)arg0 maxLength:(unsigned int)arg1 usedLength:(unsigned int *)arg2 encoding:(unsigned int)arg3 options:(unsigned int)arg4 range:(struct _NSRange)arg5 remainingRange:(struct _NSRange *)arg6;
- (void)finalize;
- (char)canBeConvertedToEncoding:(unsigned int)arg0;

@end
