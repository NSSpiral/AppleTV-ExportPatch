/* Runtime dump - TSWPTOCEntryStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCEntryStyle : TSWPParagraphStyle

+ (TSWPTOCEntryStyle *)defaultValueForProperty:(int)arg0;
+ (int)defaultIntValueForProperty:(int)arg0;
+ (TSWPTOCEntryStyle *)propertiesAllowingNSNull;
+ (NSDictionary *)properties;

- (TSWPTOCEntryStyle *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct TOCEntryStyleArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPTOCEntryStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 overridePropertyMap:(TSSPropertyMap *)arg2 isVariation:(char)arg3;
- (NSString *)presetKind;
- (struct ParagraphStyleArchive *)paragraphStyleArchiveFromUnarchiver:(id)arg0;
- (TSWPTOCEntryStyle *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 basedOnParagraphStyle:(NSObject *)arg2;
- (void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(NSObject *)arg0 fromArchive:(struct TOCEntryStylePropertiesArchive *)arg1 unarchiver:(struct TOCEntryStylePropertiesArchive)arg2;
- (void)p_saveTOCEntryStylePropertiesToArchive:(struct TOCEntryStylePropertiesArchive *)arg0 archiver:(NSObject *)arg1;

@end
