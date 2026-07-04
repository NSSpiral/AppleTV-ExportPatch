/* Runtime dump - TSCH3DChartPlatformSettings
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPlatformSettings : NSObject
{
    NSDictionary * mSettings;
}

+ (NSDictionary *)p_defaultSettingsDictionary;
+ (NSDictionary *)p_platformSettingsDictionary;
+ (TSCH3DChartPlatformSettings *)sharedInstance;

- (unsigned int)highQualityShadowsSize;
- (unsigned int)resourceCacheMemoryLimitInBytes;
- (char)buildImageDefaultAntialias;
- (int)p_labelPickingSlackMethod;
- (float)p_labelPickingSlack;
- (char)skipFirstMipmapLevel;
- (unsigned int)buildImageTileSize;
- (unsigned int)buildMultisamples;
- (char)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (char)buildsUseLowDetailedGeometries;
- (char)buildsCanUseDynamicShadows;
- (char)buildTextureRendersAsSingleImage;
- (unsigned int)buildFramebufferMemoryLimitInBytes;
- (unsigned int)supersamplingTileSize;
- (unsigned int)supersamplingSamples;
- (unsigned int)insertionIconSupersamplingSamples;
- (double)printingDPI;
- (unsigned int)printingMaxImageSize;
- (unsigned int)labelMaxTextureSize;
- (char)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned int)interactiveCanvasMultisamples;
- (char)interactiveModeUsesFastPerformanceHint;
- (char)knobTrackingUsesRealTimePerformanceHint;
- (char)useInteractiveModeWhileSelected;
- (char)useLayoutInwardForInsertionIcons;
- (float)normalizedLabelPickingSlackForViewScale:(float)arg0 viewport:(struct tvec2<int> *)arg1;
- (float)rotationTrackerSpeed;
- (char)useHighQualityShadows;
- (char)useTiledFullSizeInteractiveLayer;
- (float)prefilteredLinesFilterRadius;
- (char)protectCachedShaders;
- (float)backgroundLayoutContentsScaleFactor;
- (char)backgroundLayoutUsesTiledRendering;
- (char)shouldHandleResourceCacheOutOfMemory;
- (void)dealloc;
- (NSString *)description;
- (TSCH3DChartPlatformSettings *)initWithDictionary:(NSDictionary *)arg0;

@end
