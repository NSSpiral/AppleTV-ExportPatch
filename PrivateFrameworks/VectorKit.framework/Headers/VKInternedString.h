/* Runtime dump - VKInternedString
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKInternedString : NSString
{
    NSString * original;
}

+ (void)initialize;
+ (NSString *)stringWithString:(NSString *)arg0;

- (char)isEqualToString:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)hash;
- (NSObject *)substringFromIndex:(unsigned int)arg0;
- (unsigned int)length;
- (VKInternedString *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)substringWithRange:(struct _NSRange)arg0;
- (VKInternedString *)initWithString:(NSString *)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (NSObject *)substringToIndex:(unsigned int)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (int)compare:(NSObject *)arg0 options:(unsigned int)arg1 range:(struct _NSRange)arg2 locale:(NSObject *)arg3;

@end
