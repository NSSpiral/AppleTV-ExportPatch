/* Runtime dump - MPUtilities
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPUtilities : NSObject

+ (struct CGColor *)CGColorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (NSString *)slideForPath:(NSString *)arg0 inDocument:(char)arg1;
+ (struct CGColor *)CGColorFromString:(NSString *)arg0;
+ (NSObject *)idOfCombinedID:(NSObject *)arg0;
+ (NSObject *)presetIDOfCombinedID:(NSObject *)arg0;
+ (MPUtilities *)executeScript:(id)arg0 withHeader:(NSString *)arg1 andAttributes:(NSDictionary *)arg2;
+ (struct CGColor *)blackCGColor;
+ (MPUtilities *)stringWithNewUUID;
+ (UIColor *)stringFromCGColor:(struct CGColor *)arg0;
+ (struct CGColorSpace *)newColorSpaceForDevice;
+ (void)collectAllActionableLayers:(id)arg0 inDictionary:(NSDictionary *)arg1;
+ (NSObject *)createPlugInContainer:(NSObject *)arg0 forLayer:(CALayer *)arg1 key:(NSString *)arg2 inDocument:(char)arg3;
+ (char)pathIsRelative:(id)arg0;
+ (MPUtilities *)defaultAttributesForMPFilter:(NSObject *)arg0;
+ (NSObject *)createMCAction:(NSObject *)arg0 forPlug:(MCPlug *)arg1 withKey:(NSString *)arg2;
+ (MPUtilities *)layerForPlug:(id)arg0 inDocument:(char)arg1;
+ (NSObject *)effectForMCContainerEffect:(NSObject *)arg0 inDocument:(char)arg1;
+ (MPUtilities *)effectContainersForTime:(double)arg0 inDocument:(char)arg1;
+ (MPUtilities *)slideForSlide:(id)arg0 inDocument:(char)arg1;
+ (MPUtilities *)createPlugInSlide:(id)arg0 forLayer:(CALayer *)arg1 inDocument:(char)arg2;
+ (MPUtilities *)defaultAttributesForMPTransition:(NSObject *)arg0;
+ (double)transformTime:(double)arg0 forAnimationPath:(NSString *)arg1;
+ (NSObject *)attributesFromAnimationPathsInFilter:(NSObject *)arg0 atTime:(double)arg1;
+ (NSObject *)animationsPathsFromFilterID:(NSObject *)arg0 andPresetID:(NSObject *)arg1;
+ (float)computeScalarValueForAnimationPath:(NSString *)arg0 atTime:(double)arg1 defaultsTo:(float)arg2 context:(NSObject *)arg3;
+ (struct CGPoint)computePointValueForAnimationPath:(NSString *)arg0 atTime:(double)arg1 defaultsTo:(struct CGPoint)arg2;
+ (NSString *)computeVectorValueForAnimationPath:(NSString *)arg0 atTime:(double)arg1 defaultsTo:(SBFWallpaperDefaults *)arg2;
+ (float)scaledFilterPresetScalarValue:(float)arg0 withKey:(NSString *)arg1 forFilterID:(NSObject *)arg2 andPresetID:(NSObject *)arg3;
+ (unsigned int)timeOffSetFromString:(NSString *)arg0;
+ (struct CGPoint)scaledFilterPresetPointValue:(struct CGPoint)arg0 withKey:(NSString *)arg1 forFilterID:(NSObject *)arg2 andPresetID:(NSObject *)arg3;
+ (struct ?)scaledFilterPresetVectorValue:(struct ?)arg0 withKey:(NSString *)arg1 forFilterID:(NSObject *)arg2 andPresetID:(NSObject *)arg3;
+ (NSObject *)createPlugPathToContainer:(NSObject *)arg0 inDocument:(char)arg1;
+ (NSObject *)parentsOfObject:(NSObject *)arg0;
+ (NSObject *)attributesFormMPFilter:(NSObject *)arg0 atTime:(double)arg1;
+ (void)syncAnimationPaths:(NSArray *)arg0;
+ (NSObject *)textForIndex:(int)arg0 inMCContainerWithObjectID:(NSString *)arg1 inDocument:(char)arg2;
+ (NSObject *)effectForMCContainerWithObjectID:(NSString *)arg0 inDocument:(char)arg1;
+ (MPUtilities *)textsDisplayedAtTime:(double)arg0 inDocument:(char)arg1;
+ (NSObject *)textForElementID:(NSObject *)arg0 withMCContainerEffect:(NSObject *)arg1 inDocument:(char)arg2;
+ (NSObject *)slideForElementID:(NSObject *)arg0 withMCContainerEffect:(NSObject *)arg1 inDocument:(char)arg2;
+ (NSString *)placesPinLabelForSlideAssetPath:(NSString *)arg0 inDocument:(char)arg1;
+ (float)aspectRatioOfLayerable:(id)arg0 relativeToAspectRatio:(float)arg1;
+ (double)displayTimeForText:(NSString *)arg0;
+ (void)registerUndoForDocument:(NSObject *)arg0 toReceiver:(NSObject *)arg1 withSelector:(SEL)arg2 object:(NSObject *)arg3;
+ (NSObject *)createPlugPathToObject:(NSObject *)arg0 inDocument:(char)arg1;

@end
