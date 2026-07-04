/* Runtime dump - NSDebugString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDebugString : NSString
{
    NSString * string;
}

- (void)dealloc;
- (unsigned int)length;
- (NSDebugString *)copyWithZone:(struct _NSZone *)arg0;
- (NSDebugString *)initWithString:(NSString *)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (void)finalize;

@end
