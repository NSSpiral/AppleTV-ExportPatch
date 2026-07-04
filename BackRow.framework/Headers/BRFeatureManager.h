/* Runtime dump - BRFeatureManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface BRFeatureManager : BRSingleton
{
    NSMutableDictionary * _featureDatabase;
    NSMutableDictionary * _featureDatabaseOverrides;
    NSMutableDictionary * _featureCodeLookupTable;
}

+ (BRFeatureManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (void)initialize;

- (char)isFeatureEnabled:(id)arg0;
- (void)disableFeatureNamed:(id)arg0;
- (void)toggleSettingForCode:(id)arg0;
- (void)_buildFeatureCodeLookupTable;
- (void)_loadSavedCodes;
- (void)_markFeatureNamed:(id)arg0 enabled:(char)arg1 inTable:(struct __CFUUID *)arg2;
- (id)_featureNameForCode:(id)arg0;
- (void)_notifyEnabledStateChangedForFeatureNamed:(id)arg0;
- (void)_saveFeatureCodes:(id)arg0;
- (void)enableFeatureNamed:(id)arg0;
- (id)allFeatures;
- (id)availableFeatures;
- (void)resetFeatures;
- (id)_merchantWithFeatureCode:(id)arg0;
- (void)dealloc;
- (BRFeatureManager *)init;

@end
