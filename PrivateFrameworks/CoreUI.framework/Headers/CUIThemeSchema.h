/* Runtime dump - CUIThemeSchema
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchema : NSObject

+ (NSString *)schemaForPlatform:(int)arg0;
+ (CUIThemeSchema *)defaultSchema;

- (int)schemaVersion;
- (struct ? *)elementCategoryAtIndex:(SEL)arg0;
- (unsigned int)elementCategoryCount;
- (struct ? *)elementDefinitionAtIndex:(int)arg0;
- (unsigned int)elementDefinitionCount;
- (struct ? *)sortedElementDefinitionAtIndex:(int)arg0;
- (unsigned int)partDefinitionCountForElementDefinition:(struct ? *)arg0;
- (unsigned int)dimensionDefinitionCountForPartDefinition:(struct ? *)arg0;
- (struct ? *)elementDefinitionWithName:(int)arg0;
- (struct ? *)partDefinitionWithName:(int)arg0 forElementDefinition:(int)arg1;
- (NSObject *)widgetNameForPartDefinition:(struct ? *)arg0;
- (struct ? *)partDefinitionForWidgetName:(int)arg0;
- (NSObject *)schemaRenditionsForPartDefinition:(struct ? *)arg0;
- (void)enumerateAvailableThemeAttributesInPartDefinition:(struct ? *)arg0 usingBlock:(struct ?)arg1;
- (void)enumerateAvailableValuesForThemeAttribute:(int)arg0 inPartDefinition:(struct ? *)arg1 usingBlock:(struct ?)arg2;
- (struct ? *)categoryForElementDefinition:(SEL)arg0;
- (struct ? *)effectDefinitionAtIndex:(int)arg0;
- (struct ? *)sortedEffectDefinitionAtIndex:(int)arg0;
- (struct ? *)effectDefinitionWithName:(int)arg0;
- (unsigned int)effectDefinitionCount;
- (unsigned int)partDefinitionCountForEffectDefinition:(struct ? *)arg0;
- (NSObject *)schemaEffectRenditionsForPartDefinition:(struct ? *)arg0;

@end
