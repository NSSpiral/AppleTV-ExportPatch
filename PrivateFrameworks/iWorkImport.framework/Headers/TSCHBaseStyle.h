/* Runtime dump - TSCHBaseStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBaseStyle : TSSStyle <TSCHStyleActAlike>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSCHBaseStyle *)g_objectTypeForSpecific:(int)arg0;
+ (TSCHBaseStyle *)defaultPropertyMap;
+ (NSObject *)g_specificToGenericPropertyMap;
+ (TSCHBaseStyle *)g_specificPropertyToOperationNameBimap;
+ (void)g_splitProperty:(int)arg0 outStyleOwner:(id *)arg1 outSpecifier:(id *)arg2 outKeyName:(id *)arg3;
+ (NSObject *)g_gilliganPropertyStringFromProperty:(int)arg0;
+ (int)g_tangierPropertyFromGilliganPropertyString:(NSString *)arg0;
+ (NSObject *)g_genericToSpecificPropertySetMap;
+ (TSCHBaseStyle *)allSpecificsForGeneric:(int)arg0;

- (id)g_objectTypeForSpecific:(int)arg0;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)updateAfterPasteForDocumentRoot:(NSObject *)arg0 pasteboardCustomFormatList:(NSArray *)arg1;
- (TSCHBaseStyle *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (NSObject *)defaultValueForProperty:(int)arg0;
- (int)defaultIntValueForProperty:(int)arg0;
- (float)defaultFloatValueForProperty:(int)arg0;
- (NSObject *)boxedDefaultValueForProperty:(int)arg0;
- (void)updateAfterPasteForProperties:(NSDictionary *)arg0 documentRoot:(struct CGSize)arg1 pasteboardCustomFormatList:(NSArray *)arg2;
- (void)updateForCollaborationForProperties:(NSDictionary *)arg0 documentRoot:(struct CGSize)arg1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(NSObject *)arg0;
- (NSObject *)g_specificToGenericPropertyMap;
- (id)g_specificPropertyToOperationNameBimap;
- (void)g_splitProperty:(int)arg0 outStyleOwner:(id *)arg1 outSpecifier:(id *)arg2 outKeyName:(id *)arg3;
- (NSObject *)g_gilliganPropertyStringFromProperty:(int)arg0;
- (int)g_tangierPropertyFromGilliganPropertyString:(NSString *)arg0;
- (id)allSpecificsForGeneric:(int)arg0;
- (NSString *)shortDescription;
- (NSDictionary *)properties;

@end
