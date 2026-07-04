/* Runtime dump - TSWPSpecSetPadding
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetPadding : TSWPSpecPadding
{
    TSWPPadding * _padding;
    char _unset;
}

- (TSWPSpecSetPadding *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetPadding *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
