/* Runtime dump - PLAssetDescription
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString * longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes * assetAttributes;

- (void)prepareForDeletion;
- (void)willSave;

@end
