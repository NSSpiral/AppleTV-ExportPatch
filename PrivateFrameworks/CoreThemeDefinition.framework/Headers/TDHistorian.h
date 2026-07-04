/* Runtime dump - TDHistorian
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDHistorian : NSObject
{
    CoreThemeDocument * document;
}

- (TDHistorian *)initWithDocument:(CoreThemeDocument *)arg0;
- (void)updateEntriesForManagedObjects:(NSArray *)arg0;
- (void)_updateEntryForManagedObject:(NSObject *)arg0;
- (NSString *)_updateRecordsWithName:(NSString *)arg0 sinceDate:(NSDate *)arg1;
- (char)foundDataChangesSinceDate:(NSDate *)arg0;
- (NSArray *)productionsWithModifiedAssets;
- (NSDate *)productionsChangedSinceDate:(NSDate *)arg0 uuidNeedsReset:(char *)arg1;
- (NSDate *)colorsChangedSinceDate:(NSDate *)arg0;
- (NSDate *)fontsChangedSinceDate:(NSDate *)arg0;
- (NSDate *)fontSizesChangedSinceDate:(NSDate *)arg0;
- (NSDate *)namedElementsChangedSinceDate:(NSDate *)arg0;
- (NSDate *)facetDefinitionsChangedSinceDate:(NSDate *)arg0;
- (NSDate *)keySpecsForRenditionsRemovedSinceDate:(NSDate *)arg0;

@end
