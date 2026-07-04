/* Runtime dump - DCIMAVMetadataUtilities
 * Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface DCIMAVMetadataUtilities : NSObject

+ (DCIMAVMetadataUtilities *)metadataItemForTimelapse;
+ (NSSet *)_captureModeStringFromAsset:(NSSet *)arg0;
+ (NSObject *)_captureModeStringFromAssetTrack:(NSObject *)arg0;
+ (char)isTimelapseAsset:(NSSet *)arg0;

@end
