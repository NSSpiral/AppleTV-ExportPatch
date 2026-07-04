/* Runtime dump - NSPlaceholderString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPlaceholderString : NSString

- (NSPlaceholderString *)initWithCString:(char *)arg0 length:(unsigned int)arg1;
- (NSPlaceholderString *)initWithFormat:(NSString *)arg0 locale:(NSObject *)arg1 arguments:(void *)arg2;
- (NSPlaceholderString *)initWithCStringNoCopy:(char *)arg0 length:(unsigned int)arg1 freeWhenDone:(char)arg2;
- (NSPlaceholderString *)retain;
- (void)release;
- (void)dealloc;
- (NSPlaceholderString *)init;
- (NSPlaceholderString *)autorelease;
- (unsigned int)retainCount;
- (NSPlaceholderString *)initWithBytes:(void *)arg0 length:(void)arg1 encoding:(unsigned int)arg2;
- (unsigned int)length;
- (char)_tryRetain;
- (char)_isDeallocating;
- (NSPlaceholderString *)initWithString:(NSString *)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (NSPlaceholderString *)initWithData:(NSData *)arg0 encoding:(unsigned int)arg1;
- (NSPlaceholderString *)initWithCString:(char *)arg0 encoding:(unsigned int)arg1;
- (NSPlaceholderString *)initWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1 encoding:(unsigned int)arg2 freeWhenDone:(char)arg3;
- (NSPlaceholderString *)initWithCharactersNoCopy:(unsigned short *)arg0 length:(unsigned int)arg1 freeWhenDone:(char)arg2;
- (NSPlaceholderString *)initWithCharacters:(unsigned short *)arg0 length:(unsigned short)arg1;
- (NSPlaceholderString *)initWithCString:(char *)arg0;

@end
