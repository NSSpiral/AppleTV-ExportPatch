/* Runtime dump - PHAssetCollectionDeleteRequest
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCollectionDeleteRequest : PHObjectDeleteRequest

- (char)validateForDeleteManagedObject:(NSManagedObject *)arg0 error:(id *)arg1;
- (void)deleteManagedObject:(NSManagedObject *)arg0 photoLibrary:(PLPhotoLibrary *)arg1;

@end
