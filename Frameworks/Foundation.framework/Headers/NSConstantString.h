/* Runtime dump - NSConstantString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConstantString : NSSimpleCString

- (char *)cString;
- (char *)_fastCStringContents:(SEL)arg0;
- (unsigned int)cStringLength;
- (unsigned int)fastestEncoding;
- (unsigned int)smallestEncoding;
- (NSConstantString *)initWithCharactersNoCopy:(unsigned short *)arg0 length:(unsigned int)arg1;
- (char *)lossyCString;
- (NSConstantString *)retain;
- (void)release;
- (char)isEqualToString:(NSString *)arg0;
- (void)dealloc;
- (NSConstantString *)copy;
- (NSConstantString *)autorelease;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (unsigned int)length;
- (NSConstantString *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (int)compare:(NSObject *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (void)finalize;
- (char)canBeConvertedToEncoding:(unsigned int)arg0;

@end
