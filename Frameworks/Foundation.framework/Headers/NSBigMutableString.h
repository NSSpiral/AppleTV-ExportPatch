/* Runtime dump - NSBigMutableString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBigMutableString : NSMutableString
{
    struct ? flags;
    unsigned int length;
    id contents;
}

+ (void)initialize;

- (NSObject *)_newSubstringWithRange:(struct _NSRange)arg0 zone:(struct _NSZone *)arg1;
- (char)_isCString;
- (NSObject *)_createSubstringWithRange:(struct _NSRange)arg0;
- (void)_checkForInvalidMutationWithSelector:(SEL)arg0;
- (char)_getData:(id *)arg0 encoding:(unsigned int *)arg1;
- (char)_setData:(NSData *)arg0 encoding:(unsigned int)arg1;
- (char)_copyStorage:(struct __CFStorage * *)arg0 encoding:(struct __CFStorage)arg1;
- (char)_setStorage:(struct __CFStorage *)arg0 encoding:(unsigned int)arg1;
- (NSBigMutableString *)initWithStorage:(struct __CFStorage *)arg0 length:(unsigned int)arg1 isUnicode:(char)arg2;
- (void)_markAsImmutable;
- (NSObject *)_newSmallImmutableSubstringWithRange:(struct _NSRange)arg0 zone:(struct _NSZone *)arg1;
- (NSObject *)_newBigSubstringWithRange:(struct _NSRange)arg0 wantsMutable:(char)arg1 zone:(struct _NSZone *)arg2;
- (char)_isMarkedAsImmutable;
- (void)dealloc;
- (unsigned int)length;
- (NSBigMutableString *)copyWithZone:(struct _NSZone *)arg0;
- (NSBigMutableString *)initWithString:(NSString *)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (NSBigMutableString *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;

@end
