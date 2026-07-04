/* Runtime dump - NSPlaceholderMutableString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPlaceholderMutableString : NSMutableString

- (NSPlaceholderMutableString *)initWithFormat:(NSString *)arg0 locale:(NSObject *)arg1 arguments:(void *)arg2;
- (NSPlaceholderMutableString *)initWithCStringNoCopy:(char *)arg0 length:(unsigned int)arg1 freeWhenDone:(char)arg2;
- (NSPlaceholderMutableString *)retain;
- (void)release;
- (void)dealloc;
- (NSPlaceholderMutableString *)init;
- (NSPlaceholderMutableString *)autorelease;
- (unsigned int)retainCount;
- (NSPlaceholderMutableString *)initWithBytes:(void *)arg0 length:(void)arg1 encoding:(unsigned int)arg2;
- (unsigned int)length;
- (NSPlaceholderMutableString *)initWithCapacity:(unsigned int)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (NSPlaceholderMutableString *)initWithString:(NSString *)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (NSPlaceholderMutableString *)initWithUTF8String:(char *)arg0;
- (NSPlaceholderMutableString *)initWithCString:(char *)arg0 encoding:(unsigned int)arg1;
- (NSPlaceholderMutableString *)initWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1 encoding:(unsigned int)arg2 freeWhenDone:(char)arg3;
- (NSPlaceholderMutableString *)initWithCharactersNoCopy:(unsigned short *)arg0 length:(unsigned int)arg1 freeWhenDone:(char)arg2;

@end
