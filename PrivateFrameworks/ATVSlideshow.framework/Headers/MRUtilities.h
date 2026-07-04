/* Runtime dump - MRUtilities
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRUtilities : NSObject

+ (void)initialize;
+ (MRUtilities *)executeScript:(id)arg0 withHeader:(NSString *)arg1 andAttributes:(NSDictionary *)arg2;
+ (struct CGColorSpace *)newColorSpaceForDevice;
+ (struct CGPoint)valueForPointAnimationPath:(NSString *)arg0 inPlug:(MCPlug *)arg1 atTime:(double)arg2 defaultsTo:(struct CGPoint)arg3 previousKeyPoint:(struct CGPoint *)arg4 nextKeyPoint:(struct CGPoint *)arg5;
+ (int)operationQueueConcurrentOperationCount;
+ (double)transformTime:(double)arg0 forAnimationPath:(NSString *)arg1 inPlug:(MCPlug *)arg2;
+ (float)valueForScalarAnimationPath:(NSString *)arg0 inPlug:(MCPlug *)arg1 atTime:(double)arg2 defaultsTo:(float)arg3 previousKeyValue:(float *)arg4 nextKeyValue:(float *)arg5;
+ (int)operatingSystemMinorVersion;
+ (int)operatingSystemMajorVersion;

@end
