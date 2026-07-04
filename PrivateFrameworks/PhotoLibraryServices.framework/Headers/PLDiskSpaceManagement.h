/* Runtime dump - PLDiskSpaceManagement
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiskSpaceManagement : NSObject

+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg0 shouldFreeSpace:(char)arg1 bytesToPurge:(unsigned long long)arg2;
+ (long long)_processCloudSharedAsset:(NSSet *)arg0 shouldFreeSpace:(char)arg1;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg0 shouldFreeSpace:(char)arg1 fromPhotoLibrary:(NSObject *)arg2;

@end
