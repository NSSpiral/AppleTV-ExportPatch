/* Runtime dump - PLCloudPruneOperation
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPruneOperation : PLCloudOperation
{
    char _cancelled;
}

- (unsigned int)cost;
- (char)keepOriginalsEnabled;
- (NSObject *)_cloudResourceForCPLResource:(NSObject *)arg0 inPhotoLibrary:(NSObject *)arg1 outAssetsAffected:(id)arg2;
- (void)_resetCloudPlaceholderKindForAsset:(NSSet *)arg0;
- (char)canPruneResource;
- (void)markAsNotLocallyAvailable;
- (void)requestCancel;
- (void)runOperationWithCompletionHandler:(id /* block */)arg0;

@end
