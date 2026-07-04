/* Runtime dump - PLSimpleAlbumList
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>
{
    NSOrderedSet * _containers;
}

@property (retain, nonatomic) NSOrderedSet * containers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int containersCount;

- (void)dealloc;
- (char)isEmpty;
- (NSString *)managedObjectContext;
- (PLPhotoLibrary *)photoLibrary;
- (PLSimpleAlbumList *)initWithAssetContainers:(id)arg0;
- (NSOrderedSet *)containers;
- (char)canEditContainers;
- (NSString *)containersRelationshipName;
- (unsigned int)containersCount;
- (PLSimpleAlbumList *)initWithAssetContainer:(NSObject *)arg0;
- (void)setContainers:(NSOrderedSet *)arg0;

@end
