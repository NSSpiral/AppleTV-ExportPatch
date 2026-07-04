/* Runtime dump - PLSharedPhotoLibrary
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedPhotoLibrary : PLPhotoLibrary

+ (PLSharedPhotoLibrary *)allocWithZone:(struct _NSZone *)arg0;
+ (PLSharedPhotoLibrary *)sharedPhotoLibrary;

- (PLSharedPhotoLibrary *)retain;
- (void)release;
- (PLSharedPhotoLibrary *)autorelease;
- (unsigned int)retainCount;
- (PLSharedPhotoLibrary *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)concurrencyType;
- (void)_updateWithInsertedAssetsCount:(unsigned int)arg0 deletedCount:(unsigned int)arg1 updatedAssets:(NSSet *)arg2;

@end
