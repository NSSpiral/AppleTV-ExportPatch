/* Runtime dump - MPMediaQueryShuffledItems
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryShuffledItems : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _activeShuffleType;
    char _dirty;
    NSMutableArray * _orderedArray;
    MPMediaQuery * _sourceMediaQuery;
    NSArray * _sourceMediaQueryItems;
    struct _NSRange _focusedRange;
}

@property (readonly, nonatomic) MPMediaQuery * sourceMediaQuery;
@property (nonatomic) struct _NSRange focusedRange;
@property (readonly, copy, nonatomic) NSArray * items;
@property (readonly, nonatomic) unsigned int realShuffleType;

+ (char)supportsSecureCoding;

- (void)_resetCaches;
- (unsigned int)realShuffleType;
- (MPMediaQueryShuffledItems *)initWithSourceMediaQuery:(MPMediaQuery *)arg0 orderedItems:(NSArray *)arg1 shuffleType:(unsigned int)arg2;
- (void)_rebuildCaches;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg0 greaterThanOrEqualToIndex:(unsigned int)arg1;
- (unsigned int)indexOfObject:(struct objc_method *)arg0 greaterThanOrEqualToIndex:(unsigned int)arg1;
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned int)arg0;
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned int)arg0;
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned int)arg0;
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned int)arg0;
- (NSObject *)_includeInShuffleItemsForQuery:(NSObject *)arg0;
- (MPMediaQueryShuffledItems *)initWithSourceMediaQuery:(MPMediaQuery *)arg0;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg0;
- (void)invalidateSourceMediaQueryAndLoadItems;
- (void)shuffleAlbumsWithInitialIndex:(unsigned int)arg0;
- (void)shuffleItemsWithInitialIndex:(unsigned int)arg0;
- (void)unshuffle;
- (MPMediaQuery *)sourceMediaQuery;
- (struct _NSRange)focusedRange;
- (void)setFocusedRange:(struct _NSRange)arg0;
- (MPMediaQueryShuffledItems *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (unsigned int)indexOfObject:(struct objc_method *)arg0;
- (MPMediaQueryShuffledItems *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)items;
- (void).cxx_destruct;

@end
