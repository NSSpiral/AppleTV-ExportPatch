/* Runtime dump - MPWeighter
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPWeighter : NSObject
{
    int _totalWeight;
    NSMutableArray * _weights;
    NSMutableArray * _items;
    NSMutableArray * _constraints;
    NSMutableArray * _usageCount;
    NSMutableIndexSet * _ignoreIndices;
    char _evenlyPickByID;
    char _ignoreBreaks;
}

- (void)dealloc;
- (int)count;
- (MPWeighter *)init;
- (void)clearAllItems;
- (void)addItem:(NSObject *)arg0 withWeight:(int)arg1 andContraints:(id)arg2;
- (int)getRandomIndex;
- (void)addIndexToIgnore:(int)arg0;
- (void)ignoreIndices:(NSMutableIndexSet *)arg0;
- (id)imageCounts;
- (void)setEvenlyPickByID:(char)arg0;
- (void)ignoreIndex:(int)arg0;
- (NSObject *)constraintsForItem:(NSObject *)arg0;
- (void)clearIgnoreIndices;
- (int)getRandomIndexMeetingContraints:(id)arg0;
- (int)getRandomIndexWithNoBreaksForImageCount:(int)arg0;
- (NSArray *)allConstraints;
- (id)ignoredIndices;
- (int)getRandomIndexInSubset:(NSSet *)arg0;
- (int)numberOfItemsWithImageCount:(int)arg0;
- (char)itemAtIndex:(int)arg0 meetsContraints:(id)arg1;
- (NSArray *)indicesMeetingConstraints:(NSArray *)arg0;
- (void)increaseUsageCountOfObjectAtIndex:(int)arg0;
- (NSArray *)indicesEqualingConstraints:(NSArray *)arg0;
- (void)setIgnoreBreaks:(char)arg0;
- (id)getRandomItemMeetingNumberOfFaceLandscapes:(int)arg0 facePortraits:(int)arg1 imageLandscapes:(int)arg2 imagePortraits:(int)arg3 vBreaks:(int)arg4 hBreaks:(int)arg5 movies:(int)arg6 fitsInExtraWide:(int)arg7 aspectRatios:(id)arg8 previousTags:(id)arg9;
- (int)getRandomIndexMeetingContraints:(id)arg0 oneMatch:(char)arg1;
- (id)allUsageCounts;
- (char)itemAtIndex:(int)arg0 meetsContraints:(id)arg1 oneMatch:(char)arg2;
- (int)getRandomIndexInSubset:(NSSet *)arg0 withPreviousTags:(id)arg1;
- (NSArray *)allItems;

@end
