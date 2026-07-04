/* Runtime dump - KNCanvasSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNCanvasSelection : TSDCanvasSelection
{
    TSUPointerKeyDictionary * mDrawableToSelectedActionGhostIndexesMap;
    NSSet * mBuildChunks;
}

@property (readonly, nonatomic) NSSet * unlockedDrawableInfos;
@property (readonly, nonatomic) NSSet * buildChunks;

+ (Class)archivedSelectionClass;

- (void)saveToArchive:(struct CanvasSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (KNCanvasSelection *)initWithArchive:(struct CanvasSelectionArchive *)arg0 unarchiver:(struct CanvasSelectionArchive)arg1;
- (KNCanvasSelection *)initWithInfos:(NSSet *)arg0;
- (NSArray *)infos;
- (NSSet *)unlockedInfos;
- (char)containsKindOfClass:(Class)arg0;
- (NSObject *)infosOfClass:(Class)arg0;
- (NSDictionary *)copyIncludingInfo:(NSDictionary *)arg0;
- (NSDictionary *)copyExcludingInfo:(NSDictionary *)arg0;
- (NSSet *)buildChunks;
- (id)p_actionGhostSelectionIndexesForDrawable:(id)arg0;
- (KNCanvasSelection *)initWithInfos:(NSSet *)arg0 buildChunks:(NSSet *)arg1;
- (NSObject *)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(NSObject *)arg0;
- (id)p_actionGhostSelectionInfosForDrawable:(id)arg0;
- (NSSet *)unlockedDrawableInfos;
- (id)unlockedInfosSupportingHyperlinkActions;
- (id)p_indexesOfGhostInfos:(id)arg0 inActionSequenceForDrawable:(id)arg1;
- (KNCanvasSelection *)initWithDrawable:(TSDDrawableInfo *)arg0 actionGhostIndexPromise:(id)arg1;
- (KNCanvasSelection *)initWithDrawableToActionGhostIndexPromiseMap:(NSObject *)arg0;
- (id)copyExcludingBuildChunks:(id)arg0;
- (char)containsBuildChunksOfAnimationType:(int)arg0;
- (char)containsOnlyUnlockedInfosSupportingHyperlinkActions;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (KNCanvasSelection *)copyWithZone:(struct _NSZone *)arg0;

@end
