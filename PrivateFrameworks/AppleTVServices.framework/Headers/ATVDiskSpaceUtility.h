/* Runtime dump - ATVDiskSpaceUtility
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDiskSpaceUtility : NSObject

+ (void)setMode:(int)arg0;
+ (unsigned long long)mediaCapacity;
+ (unsigned long long)primaryStreamedMediaRepositorySize;
+ (unsigned long long)shortContentStreamedMediaRepositorySize;
+ (NSObject *)_volumeSizeStringForSize:(unsigned long long)arg0;
+ (unsigned long long)mediaFreeSpace;
+ (unsigned long long)primaryStreamedMediaRespositoryMaxFileSize;
+ (unsigned long long)shortContentStreamedMediaRespositoryMaxFileSize;
+ (NSString *)mediaCapacityString;
+ (NSString *)mediaFreeSpaceString;

@end
