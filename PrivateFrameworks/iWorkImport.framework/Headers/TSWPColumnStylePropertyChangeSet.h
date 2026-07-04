/* Runtime dump - TSWPColumnStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumnStylePropertyChangeSet : TSSStylePropertyChangeSet
{
    TSWPSpecColumns * _columns;
    TSSSpecBool * _continuous;
    TSWPSpecPadding * _margins;
    TSSSpecDouble * _minHorizontalInset;
    TSWPSpecPadding * _padding;
    TSSSpecBool * _shrinkToFit;
    TSSSpecInteger * _verticalAlignment;
    TSSSpecBool * _verticalText;
    TSSSpecInteger * _writingDirection;
    char _definedColumns;
    char _definedContinuous;
    char _definedMargins;
    char _definedMinHorizontalInset;
    char _definedPadding;
    char _definedShrinkToFit;
    char _definedVerticalAlignment;
    char _definedVerticalText;
    char _definedWritingDirection;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
