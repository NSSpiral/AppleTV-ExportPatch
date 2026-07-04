/* Runtime dump - TSWPTOCEntryStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCEntryStylePropertyChangeSet : TSWPParagraphStylePropertyChangeSet
{
    TSSSpecBool * _tocShowPageNumber;
    TSWPSpecCharacterStyle * _tocPageNumberStyle;
    char _definedTocShowPageNumber;
    char _definedTocPageNumberStyle;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
