/* Runtime dump - PSIGroupResult
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupResult : NSObject
{
    PSIDatabase * _idx;
    PSIDatabase * _heldIdx;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _owningContentString;
    NSMutableArray * _assetUUIDs;
    char _didFetchOwningContentString;
    NSArray * _contentStrings;
    NSArray * _matchRanges;
    struct __CFArray * _categories;
    float _score;
    struct __CFArray * _owningGroupIds;
    struct __CFArray * _assetIds;
}

@property (retain, nonatomic) NSArray * contentStrings;
@property (retain, nonatomic) NSArray * matchRanges;
@property (retain, nonatomic) struct __CFArray * categories;
@property (readonly, nonatomic) unsigned int matchCount;
@property (nonatomic) float score;
@property (readonly) NSString * owningContentString;
@property (readonly) NSArray * assetUUIDs;
@property (retain, nonatomic) struct __CFArray * owningGroupIds;
@property (retain, nonatomic) struct __CFArray * assetIds;
@property (weak, nonatomic) PSIDatabase * idx;

- (void)dealloc;
- (PSIGroupResult *)init;
- (NSString *)description;
- (struct __CFArray *)categories;
- (NSArray *)contentStrings;
- (void)setCategories:(struct __CFArray *)arg0;
- (void)setContentStrings:(NSArray *)arg0;
- (NSString *)unitTestDescription;
- (struct __CFArray *)assetIds;
- (void)setAssetIds:(struct __CFArray *)arg0;
- (NSArray *)assetUUIDs;
- (struct __CFArray *)owningGroupIds;
- (void)setIdx:(PSIDatabase *)arg0;
- (void)setOwningGroupIds:(struct __CFArray *)arg0;
- (void)setMatchRanges:(NSArray *)arg0;
- (unsigned int)matchCount;
- (NSNumber *)_prepareForFetchWithCount:(unsigned int)arg0 outRange:(struct _NSRange *)arg1 outFetchOwningContentString:(char *)arg2;
- (NSString *)owningContentString;
- (void)fetchNextAssetUUIDs:(unsigned int)arg0 completionHandler:(id /* block */)arg1;
- (NSArray *)matchRanges;
- (PSIDatabase *)idx;
- (float)score;
- (void)setScore:(float)arg0;

@end
