/* Runtime dump - TSWPSpecSetFontFeatures
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetFontFeatures : TSWPSpecFontFeatures
{
    NSArray * _fontFeatures;
    char _unset;
}

- (TSWPSpecSetFontFeatures *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetFontFeatures *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
