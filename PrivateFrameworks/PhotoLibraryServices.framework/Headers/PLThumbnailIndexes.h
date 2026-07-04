/* Runtime dump - PLThumbnailIndexes
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailIndexes : NSObject
{
    NSObject<OS_dispatch_queue> * isolation;
    NSMutableIndexSet * unusedIndexes;
    int usedMax;
    unsigned long long _fetchTimestamp;
}

+ (PLThumbnailIndexes *)sharedInstance;
+ (unsigned int)nextAvailableThumbnailIndex;
+ (void)recycleThumbnailIndexes:(NSArray *)arg0;
+ (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg0 handler:(id /* block */)arg1;
+ (void)getAvailableThumbnailIndexWithHandler:(id /* block */)arg0;
+ (void)recycleThumbnailIndexes:(NSArray *)arg0 timestamp:(unsigned long long)arg1;

- (PLThumbnailIndexes *)init;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg0 handler:(id /* block */)arg1;
- (void)recycleThumbnailIndexes:(NSArray *)arg0 timestamp:(unsigned long long)arg1;
- (void)getAvailableThumbnailIndexesFromDatabase;
- (NSObject *)fetchOccupiedThumbnailIndexesWithLibrary:(NSObject *)arg0;

@end
