/* Runtime dump - MPShuffleController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPShuffleController : NSObject <NSSecureCoding>
{
    NSMutableIndexSet * _availableShuffleIndexSet;
    char _isPendingFineGrainedInvalidation;
    char _isPendingGlobalInvalidation;
    unsigned int _itemCount;
    NSMapTable * _itemIdentifierToKnownCount;
    MPSparseArray * _originalIndexToItemIdentifier;
    MPSparseArray * _originalIndexToShuffledIndex;
    NSMutableArray * _pendingInvalidationRemovedIdentifiers;
    <MPShuffleControllerDataSource> * _dataSource;
}

@property (weak, nonatomic) <MPShuffleControllerDataSource> * dataSource;

+ (char)supportsSecureCoding;

- (void)shuffle;
- (void)_commitPendingInvalidations;
- (void)_replaceItemIdentifierAtOriginalIndex:(unsigned int)arg0 withItemIdentifier:(NSString *)arg1;
- (void)_loadItemCountIfPendingInvalidation;
- (void)_clearPendingInvalidationInformation;
- (void)_removeAllItemIdentifiers;
- (unsigned int)_generateShuffleIndexFromAvailableIndexSet;
- (void)_removeItemIdentifierAtOriginalIndex:(unsigned int)arg0;
- (void)_loadItemCount;
- (void)invalidateWithRemovedIdentifiers:(id)arg0;
- (unsigned int)itemIndexForShuffledIndex:(unsigned int)arg0;
- (void)shuffleWithStartingIndex:(unsigned int)arg0;
- (unsigned int)shuffledIndexForItemIndex:(unsigned int)arg0;
- (MPShuffleController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDataSource:(<MPShuffleControllerDataSource> *)arg0;
- (MPShuffleController *)init;
- (<MPShuffleControllerDataSource> *)dataSource;
- (void)invalidate;
- (void).cxx_destruct;

@end
