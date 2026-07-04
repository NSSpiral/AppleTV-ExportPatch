/* Runtime dump - TSWPSpecSetCharacterStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetCharacterStyle : TSWPSpecCharacterStyle
{
    TSWPCharacterStyle * _characterStyle;
    char _unset;
}

- (TSWPSpecSetCharacterStyle *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetCharacterStyle *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
