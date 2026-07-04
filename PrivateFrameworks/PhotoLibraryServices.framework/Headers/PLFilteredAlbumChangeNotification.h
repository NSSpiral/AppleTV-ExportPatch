/* Runtime dump - PLFilteredAlbumChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification>
{
    PLFilteredAlbum * _album;
    NSIndexSet * _oldFilteredIndexes;
    NSIndexSet * _filteredIndexes;
    PLIndexMapper * _indexMapper;
    PLAssetContainerChangeNotification * _backingNotification;
}

@property (readonly, retain, nonatomic) NSIndexSet * updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet * filteredIndexes;
@property (readonly, retain, nonatomic) PLIndexMapper * indexMapper;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)notificationForDerivedObject:(NSObject *)arg0 priorChangeState:(NSObject *)arg1 forBackingObjectNotification:(NSNotification *)arg2;

- (void)dealloc;
- (PLFilteredAlbumChangeNotification *)init;
- (NSString *)description;
- (NSObject *)object;
- (NSIndexSet *)filteredIndexes;
- (char)shouldIncludeObjectAtIndex:(unsigned int)arg0;
- (PLIndexMapper *)indexMapper;
- (char)shouldReload;
- (NSString *)_diffDescription;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (NSArray *)_changedObjects;
- (PLFilteredAlbum *)album;
- (char)titleDidChange;
- (char)keyAssetDidChange;
- (PLFilteredAlbumChangeNotification *)initWithFilteredAlbum:(char)arg0 priorChangeState:(NSObject *)arg1 albumChangeNotification:(NSNotification *)arg2;
- (NSIndexSet *)updatedFilteredIndexes;
- (char)countDidChange;
- (void)setFilteredIndexes:(NSIndexSet *)arg0;

@end
