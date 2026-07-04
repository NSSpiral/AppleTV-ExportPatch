/* Runtime dump - VKStyleManager
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKStyleManager : NSObject
{
    unsigned int _updateStamp;
    unsigned int _mapDisplayStyle;
    unsigned int _mapDisplayStyleVariant;
    VKSharedResources * _sharedResources;
    VKStylesheet * _stylesheet;
    int _mapMode;
    char _canSelectIcons;
    float _blendingFactor;
    unsigned int _connectedVariant;
    VKGenericShieldDrawStyle * _defaultGenericShieldStyle;
    struct /* ? */ _styleQueries;
    struct _opaque_pthread_rwlock_t _styleQueryCreationLock;
    int _targetDisplay;
}

@property (readonly, nonatomic) NSString * sheetName;
@property (readonly, nonatomic) char isDevResource;
@property (readonly, nonatomic) VKPGlobalProperties * styleGlobalProperties;
@property (readonly, nonatomic) char supportsNightMode;
@property (readonly) unsigned int updateStamp;
@property (nonatomic) float blendingFactor;
@property (nonatomic) unsigned int mapDisplayStyle;
@property (nonatomic) unsigned int mapDisplayStyleVariant;
@property (readonly, nonatomic) unsigned int activeMapDisplayStyle;
@property (readonly, nonatomic) int targetDisplay;
@property (nonatomic) int mapMode;
@property (readonly, nonatomic) VKGenericShieldDrawStyle * defaultGenericShieldStyle;
@property (nonatomic) char canSelectIcons;
@property (readonly, nonatomic) char finishedDecoding;

- (void)dealloc;
- (VKStyleManager *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSString *)sheetName;
- (char)isDevResource;
- (int)targetDisplay;
- (char)supportsNightMode;
- (float)blendingFactor;
- (void)setBlendingFactor:(float)arg0;
- (unsigned int)mapDisplayStyle;
- (char)supportsMapDisplayStyle:(unsigned int)arg0;
- (void)setMapDisplayStyle:(unsigned int)arg0;
- (VKStyleManager *)initWithName:(NSString *)arg0 scale:(float)arg1 ppi:(float)arg2 targetDisplay:(int)arg3 sharedResources:(VKSharedResources *)arg4;
- (VKPGlobalProperties *)styleGlobalProperties;
- (void)setMapDisplayStyleVariant:(unsigned int)arg0;
- (void)setMapMode:(int)arg0;
- (void)setCanSelectIcons:(char)arg0;
- (char)isFinishedDecoding;
- (void)addFinishedDecodingCallback:(id /* block */)arg0;
- (unsigned int)mapDisplayStyleVariant;
- (void)clearCaches;
- (struct shared_ptr<md::StyleQuery>)styleQueryForFeatureAttributes:(NSDictionary *)arg0 vectorType:(SEL)arg1;
- (struct shared_ptr<md::StyleQuery>)styleQueryForFeatureAttributes:(NSDictionary *)arg0 vectorType:(SEL)arg1 locale:(NSObject *)arg2 selectionState:(int *)arg3;
- (float)_nightShieldBrightnessForVectorType:(int)arg0;
- (int)rasterPolygonChangeoverZ;
- (void)prepareStyleVariantsForMapDisplayStyle:(unsigned int)arg0;
- (VKStylesheet *)stylesheet;
- (struct shared_ptr<md::StyleQuery>)styleQueryForFeatureAttributes:(NSDictionary *)arg0;
- (float)shieldBrightnessForVectorType:(int)arg0;
- (float)shieldBrightnessForDisplayStyle:(unsigned int)arg0;
- (float *)blendingFactorPointer;
- (VKGenericShieldDrawStyle *)defaultGenericShieldStyle;
- (unsigned int)activeMapDisplayStyle;
- (int)mapMode;
- (unsigned int)updateStamp;
- (char)canSelectIcons;

@end
