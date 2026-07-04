/* Runtime dump - TSWPListStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPListStylePropertyChangeSet : TSSStylePropertyChangeSet
{
    TSSSpecColor * _fontColor;
    TSSSpecString * _fontName;
    TSWPSpecListStyleFloatArray * _listClassicTextIndentArray;
    TSWPSpecListStyleListLabelGeometryArray * _listLabelGeometryArray;
    TSWPSpecListStyleImageDataArray * _listLabelImageDataArray;
    TSWPSpecListStyleFloatArray * _listLabelIndentArray;
    TSWPSpecListStyleListNumberTypeArray * _listLabelNumberArray;
    TSWPSpecListStyleBoolArray * _listLabelTieredNumberArray;
    TSDSpecShadow * _textShadow;
    TSWPSpecListStyleStringArray * _listLabelStringArray;
    TSWPSpecListStyleFloatArray * _listTextIndentArray;
    TSWPSpecListStyleListLabelTypeArray * _listLabelTypeArray;
    TSSSpecInteger * _writingDirection;
    char _definedFontColor;
    char _definedFontName;
    char _definedListClassicTextIndentArray;
    char _definedListLabelGeometryArray;
    char _definedListLabelImageDataArray;
    char _definedListLabelIndentArray;
    char _definedListLabelNumberArray;
    char _definedListLabelTieredNumberArray;
    char _definedTextShadow;
    char _definedListLabelStringArray;
    char _definedListTextIndentArray;
    char _definedListLabelTypeArray;
    char _definedWritingDirection;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
