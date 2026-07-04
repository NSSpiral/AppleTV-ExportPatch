/* Runtime dump - TDThemeSchema
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDThemeSchema : NSObject
{
    CoreThemeDocument * _doc;
}

+ (char)loadThemeConstantsForEntity:(NSObject *)arg0 inContext:(NSObject *)arg1;

- (void)dealloc;
- (TDThemeSchema *)initWithThemeDocument:(NSObject *)arg0;
- (void)loadZeroCodeArtworkInfo;
- (void)loadArtworkDraftTypes;
- (void)resetThemeConstants;
- (void)sanityCheckAndUpdateDocumentIfNecessary;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(struct ? *)arg0 withElement:(struct ?)arg1;
- (void)_addSchemaPartDefinitionsForStandardElement:(struct ? *)arg0 withElement:(struct ?)arg1;
- (char)_renditionKey:(struct _renditionkeytoken *)arg0 isEqualToKeyIgnoringLook:(struct _renditionkeytoken)arg1;
- (void)_sanityCheckObjectsWithEntityName:(NSString *)arg0 globalDescriptor:(void *)arg1 matchIdentifierOnly:(char)arg2;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaAssets;
- (void)_sanityCheckColorNamesAndUpdateIfNecessary;
- (void)loadThemeSizes;
- (void)loadThemeValues;
- (void)loadThemeElements;
- (void)loadThemeParts;
- (void)loadThemeStates;
- (void)loadThemePresentationStates;
- (void)loadThemeDirections;
- (void)loadThemeDrawingLayers;
- (void)loadThemeIdioms;
- (void)loadThemeUISizeClasses;
- (void)loadIterationTypes;
- (void)loadThemeLooks;
- (void)loadRenditionTypes;
- (void)loadRenditionSubtypes;
- (void)loadColorStatuses;
- (void)loadMetafontSelectors;
- (void)loadMetafontSizes;
- (void)loadColorNames;
- (void)loadSchemaCategories;
- (void)loadSchemaDefinitions;
- (void)loadEffectConstants;
- (void)loadTemplateRenderingModeConstants;
- (void)loadBasicThemePart;
- (void)loadThemeDefaultLook;
- (void)loadDefaultFontCustomizations;
- (void)loadStandardEffectDefinitions;

@end
