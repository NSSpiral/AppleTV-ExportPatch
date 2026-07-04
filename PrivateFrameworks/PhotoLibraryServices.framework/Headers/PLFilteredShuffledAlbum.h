/* Runtime dump - PLFilteredShuffledAlbum
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredShuffledAlbum : PLShuffledAlbum
{
    int _filter;
    NSPredicate * _filterPredicate;
}

@property (readonly, nonatomic) int filter;
@property (readonly, retain, nonatomic) NSPredicate * filterPredicate;

+ (struct NSObject *)_shuffledAlbumWithAlbum:(struct NSObject *)arg0 filter:(int)arg1 startingAsset:(PLManagedAsset *)arg2;

- (void)dealloc;
- (unsigned int)count;
- (int)filter;
- (PLFilteredShuffledAlbum *)initWithBackingAlbum:(struct NSObject *)arg0 filter:(int)arg1 startingAsset:(PLManagedAsset *)arg2;
- (struct NSObject *)unshuffledAlbum;
- (NSPredicate *)filterPredicate;
- (void)createShuffledIndexesMaps;

@end
