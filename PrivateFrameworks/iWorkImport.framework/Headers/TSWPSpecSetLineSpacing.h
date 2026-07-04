/* Runtime dump - TSWPSpecSetLineSpacing
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetLineSpacing : TSWPSpecLineSpacing
{
    TSWPLineSpacing * _lineSpacing;
    char _unset;
}

- (TSWPSpecSetLineSpacing *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetLineSpacing *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
