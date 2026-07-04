/* Runtime dump - TSWPSpecSetParagraphStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetParagraphStyle : TSWPSpecParagraphStyle
{
    TSWPParagraphStyle * _paragraphStyle;
    char _unset;
}

- (TSWPSpecSetParagraphStyle *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetParagraphStyle *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
