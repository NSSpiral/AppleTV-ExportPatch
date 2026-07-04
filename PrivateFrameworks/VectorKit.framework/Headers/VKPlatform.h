/* Runtime dump - VKPlatform
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPlatform : NSObject
{
    unsigned int _memSize;
    int _numCPUs;
    char _proceduralRoadAlpha;
    char _useCheapTrafficShader;
    char _shouldUseTrafficAlphaHack;
    char _supportsBuildingStrokes;
    char _supports3DBuildingStrokes;
    char _lowPerformanceDevice;
}

@property (readonly, nonatomic) char roadsWithSimpleLineMeshesAvailable;
@property (readonly, nonatomic) char shouldUseTrafficAlphaHack;
@property (readonly, nonatomic) unsigned int tileMaximumLimit;
@property (readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
@property (readonly, nonatomic) char supportsHiResRTT;
@property (readonly, nonatomic) char isPad;
@property (readonly, nonatomic) char shouldDrawWhenReady;
@property (readonly, nonatomic) char shouldStyleLabelsInParallel;
@property (readonly, nonatomic) char shouldPregenerateLabelGlyphs;
@property (readonly, nonatomic) char canMakeSharingThumbnails;
@property (readonly, nonatomic) float mainScreenScale;
@property (readonly, nonatomic) float mainScreenPPI;
@property (readonly, nonatomic) float maxContentScaleForRendering;
@property (readonly, nonatomic) char supportsBuildingShadows;
@property (readonly, nonatomic) char supportsBuildingStrokes;
@property (readonly, nonatomic) char supports3DBuildingStrokes;
@property (readonly, nonatomic) char supportsHiResBuildings;
@property (readonly, nonatomic) char supports3DBuildings;
@property (readonly, nonatomic) char proceduralRoadAlpha;
@property (readonly, nonatomic) char useCheapTrafficShader;
@property (readonly, nonatomic) unsigned int memorySize;
@property (readonly, nonatomic) unsigned int tileDecodeQueueWidth;
@property (readonly, nonatomic) char lowPerformanceDevice;
@property (readonly, nonatomic) double routeLineSimplificationEpsilon;

+ (VKPlatform *)sharedPlatform;

- (void)dealloc;
- (VKPlatform *)init;
- (char)lowPerformanceDevice;
- (float)mainScreenScale;
- (float)mainScreenPPI;
- (char)supportsHiResRTT;
- (char)isPad;
- (char)supportsBuildingStrokes;
- (char)supports3DBuildingStrokes;
- (char)supportsBuildingShadows;
- (char)supports3DBuildings;
- (unsigned int)tileDecodeQueueWidth;
- (char)shouldPregenerateLabelGlyphs;
- (void)_determineHardware;
- (unsigned int)_calculateMemSize;
- (char)roadsWithSimpleLineMeshesAvailable;
- (unsigned int)tileReserveLimit:(char)arg0;
- (unsigned int)tileMaximumLimit;
- (unsigned int)tilePrefetchNumberOfScreens;
- (char)canMakeSharingThumbnails;
- (char)shouldDrawWhenReady;
- (float)maxContentScaleForRendering;
- (char)supportsHiResBuildings;
- (char)shouldStyleLabelsInParallel;
- (double)routeLineSimplificationEpsilon;
- (unsigned int)memorySize;
- (char)proceduralRoadAlpha;
- (char)useCheapTrafficShader;
- (char)shouldUseTrafficAlphaHack;

@end
