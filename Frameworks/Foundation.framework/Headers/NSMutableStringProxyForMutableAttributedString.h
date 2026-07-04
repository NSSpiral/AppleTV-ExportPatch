/* Runtime dump - NSMutableStringProxyForMutableAttributedString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString
{
    NSMutableAttributedString * mutableAttributedString;
}

- (NSMutableStringProxyForMutableAttributedString *)initWithMutableAttributedString:(NSMutableAttributedString *)arg0;
- (void)dealloc;
- (unsigned int)length;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (void)finalize;

@end
