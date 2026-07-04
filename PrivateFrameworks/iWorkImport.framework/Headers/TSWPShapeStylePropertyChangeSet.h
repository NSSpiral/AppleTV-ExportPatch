/* Runtime dump - TSWPShapeStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeStylePropertyChangeSet : TSDShapeStylePropertyChangeSet
{
    TSWPSpecColumns * _columns;
    TSWPSpecPadding * _padding;
    TSSSpecBool * _shrinkTextToFit;
    TSSSpecInteger * _verticalAlignment;
    TSSSpecBool * _verticalText;
    TSWPSpecParagraphStyle * _defaultParagraphStyle;
    char _definedColumns;
    char _definedPadding;
    char _definedShrinkTextToFit;
    char _definedVerticalAlignment;
    char _definedVerticalText;
    char _definedDefaultParagraphStyle;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
