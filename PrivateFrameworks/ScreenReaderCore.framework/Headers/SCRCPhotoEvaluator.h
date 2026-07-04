/* Runtime dump - SCRCPhotoEvaluator
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluator : NSObject

+ (SCRCPhotoEvaluator *)sharedInstance;
+ (void)initialize;
+ (SCRCPhotoEvaluator *)allocWithZone:(struct _NSZone *)arg0;

- (SCRCPhotoEvaluator *)retain;
- (void)release;
- (void)dealloc;
- (SCRCPhotoEvaluator *)autorelease;
- (unsigned int)retainCount;
- (SCRCPhotoEvaluator *)copyWithZone:(struct _NSZone *)arg0;
- (UIImage *)evaluateImage:(struct CGImage *)arg0 forCriteria:(int)arg1 inRect:(struct CGRect)arg2;

@end
