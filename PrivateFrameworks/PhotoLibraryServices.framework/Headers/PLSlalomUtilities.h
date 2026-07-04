/* Runtime dump - PLSlalomUtilities
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSlalomUtilities : NSObject

+ (NSSet *)synchronouslyFetchVideoAdjustmentsFromManagedAsset:(NSSet *)arg0;
+ (double)durationForBaseDuration:(double)arg0 videoAdjustments:(PFVideoAdjustments *)arg1;
+ (double)durationForManagedAsset:(NSSet *)arg0 applyVideoAdjustments:(char)arg1;
+ (NSSet *)videoAVObjectBuilderForManagedAsset:(NSSet *)arg0 applyVideoAdjustments:(char)arg1;

@end
