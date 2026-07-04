/* Runtime dump - MPAssetManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAssetManager : NSObject

+ (void)releaseSharedManager;
+ (void)cleanFaceCore;
+ (MPAssetManager *)faceCoreAPI;
+ (NSObject *)convertCGImageToBuffer:(struct CGImage *)arg0;
+ (NSObject *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg0;
+ (NSObject *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg0;
+ (MPAssetManager *)sharedManager;

- (void)dealloc;
- (MPAssetManager *)init;
- (char)isAssetAtPathASupportedImage:(UIImage *)arg0;
- (char)isAssetAtPathASupportedMovie:(id)arg0;
- (char)isAssetAtPathASupportedAudio:(id)arg0;
- (NSSet *)regionsOfInterestForAsset:(struct CGImage *)arg0;
- (void)setSavesToDisk:(char)arg0;
- (void)gatherMetadataForAssetAtPath:(NSString *)arg0;
- (double)durationForAssetAtPath:(NSString *)arg0;
- (double)startTimeForAssetAtPath:(NSString *)arg0;
- (double)stopTimeForAssetAtPath:(NSString *)arg0;
- (struct CGSize)resolutionForAssetAtPath:(NSString *)arg0;
- (NSString *)creationDateForAssetAtPath:(NSString *)arg0;
- (NSString *)keywordsForAssetAtPath:(NSString *)arg0;
- (NSString *)latitudeForAssetAtPath:(NSString *)arg0;
- (NSString *)longitudeForAssetAtPath:(NSString *)arg0;
- (NSString *)altitudeForAssetAtPath:(NSString *)arg0;
- (NSString *)locationHierarchyForAssetAtPath:(NSString *)arg0;
- (unsigned int)mediaTypeForAssetAtPath:(NSString *)arg0;
- (NSString *)regionsOfInterestForAssetAtPath:(NSString *)arg0;
- (NSString *)absolutePathFromPath:(NSString *)arg0;
- (double)posterTimeForAssetAtPath:(NSString *)arg0;
- (void)tryToSaveCache;
- (NSObject *)roiInfoAtIndex:(int)arg0 forAssetAtPath:(NSString *)arg1;
- (struct CGRect)regionOfInterestAtIndex:(NSObject *)arg0 forAssetAtPath:(SEL)arg1;
- (void)addROIInfo:(NSDictionary *)arg0 forAssetAtPath:(NSString *)arg1 saveToCache:(char)arg2;
- (void)addRegionOfInterest:(struct CGRect)arg0 forAssetAtPath:(struct CGSize)arg1 saveToCache:(NSObject *)arg2;
- (void)setROIInfo:(NSDictionary *)arg0 atIndex:(int)arg1 forAssetAtPath:(NSString *)arg2 saveToCache:(char)arg3;
- (void)setRegionOfInterest:(struct CGRect)arg0 atIndex:(struct CGSize)arg1 forAssetAtPath:(NSString *)arg2 saveToCache:(int)arg3;
- (void)updateROIInfoAtIndex:(int)arg0 atPath:(NSString *)arg1 to:(NSObject *)arg2 saveToCache:(char)arg3;
- (void)updateRegionOfInterestAtIndex:(int)arg0 atPath:(NSString *)arg1 to:(struct CGRect)arg2 saveToCache:(struct CGSize)arg3;
- (void)moveRegionOfInterestWithPath:(NSString *)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 saveToCache:(char)arg3;
- (void)setForceOrderForRegionsOfInterest:(char)arg0 forPath:(NSString *)arg1 saveToCache:(char)arg2;
- (void)removeRegionOfInterestAtIndex:(int)arg0 forAssetAtPath:(NSString *)arg1 saveToCache:(char)arg2;
- (NSArray *)prepareInfoForAssetsAtPaths:(NSArray *)arg0;
- (void)cacheAttributes:(NSDictionary *)arg0 forPath:(NSString *)arg1;

@end
