/* Runtime dump - KNPasteboardNativeStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPasteboardNativeStorage : TSPObject
{
    NSArray * mDrawables;
    NSSet * mBuilds;
    NSArray * mBuildChunks;
    NSDictionary * mThemeCurves;
    NSArray * mSlideNodes;
    NSArray * mDisplayedSlideNodes;
    NSArray * mMasterSlideNodes;
    struct CGSize mOriginalShowSize;
    NSArray * mTextStorageTitleRanges;
    NSSet * mCollapsedSlideNodes;
    NSSet * mOutlineCollapsedSlideNodes;
    NSSet * mOutlineHasBodySlideNodes;
    NSArray * mGeometriesInRoot;
    NSString * mSlideNodeUUID;
    struct CGSize _originalShowSize;
}

@property (readonly, nonatomic) NSArray * drawables;
@property (readonly, nonatomic) NSArray * placeholderDrawables;
@property (readonly, nonatomic) NSArray * nonPlaceholderDrawables;
@property (readonly, nonatomic) NSSet * builds;
@property (readonly, nonatomic) NSArray * buildChunks;
@property (readonly, nonatomic) NSDictionary * themeCurves;
@property (readonly, nonatomic) NSArray * slideNodes;
@property (readonly, nonatomic) NSArray * displayedSlideNodes;
@property (nonatomic) struct CGSize originalShowSize;
@property (readonly, nonatomic) NSArray * textStorageTitleRanges;
@property (readonly, nonatomic) NSSet * collapsedSlideNodes;
@property (readonly, nonatomic) NSSet * outlineCollapsedSlideNodes;
@property (readonly, nonatomic) NSSet * outlineHasBodySlideNodes;
@property (readonly, nonatomic) NSArray * geometriesInRoot;
@property (readonly, nonatomic) NSString * slideNodeUUID;

- (KNPasteboardNativeStorage *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct PasteboardNativeStorageArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct PasteboardNativeStorageArchive *)arg0 unarchiver:(struct PasteboardNativeStorageArchive)arg1;
- (NSArray *)slideNodes;
- (NSSet *)builds;
- (NSArray *)buildChunks;
- (NSSet *)collapsedSlideNodes;
- (NSSet *)outlineCollapsedSlideNodes;
- (NSSet *)outlineHasBodySlideNodes;
- (KNPasteboardNativeStorage *)initWithContext:(NSObject *)arg0 slideNodes:(NSArray *)arg1 displayedSlideNodes:(NSArray *)arg2 textStorageTitleRanges:(NSArray *)arg3 drawables:(NSArray *)arg4 builds:(NSSet *)arg5 buildChunks:(NSArray *)arg6 themeCurves:(NSDictionary *)arg7 drawableGeometriesInRoot:(NSObject *)arg8 slideNodeUUID:(NSString *)arg9;
- (KNPasteboardNativeStorage *)initWithContext:(NSObject *)arg0 slideNodes:(NSArray *)arg1 displayedSlideNodes:(NSArray *)arg2 textStorageTitleRanges:(NSArray *)arg3 themeCurves:(NSDictionary *)arg4;
- (id)drawablesSubstitutingRootGeometries;
- (NSArray *)geometriesInRoot;
- (void)originalShowSize:(struct CGSize)arg0;
- (KNPasteboardNativeStorage *)initWithContext:(NSObject *)arg0 drawables:(NSArray *)arg1 builds:(NSSet *)arg2 buildChunks:(NSArray *)arg3 themeCurves:(NSDictionary *)arg4;
- (KNPasteboardNativeStorage *)initWithContext:(NSObject *)arg0 slideNodes:(NSArray *)arg1 displayedSlideNodes:(NSArray *)arg2 themeCurves:(NSDictionary *)arg3;
- (NSArray *)placeholderDrawables;
- (NSArray *)nonPlaceholderDrawables;
- (id)slideNodesSubstitutingDepthsBasedOnMinimumDepth:(unsigned int)arg0;
- (NSDictionary *)themeCurves;
- (NSArray *)displayedSlideNodes;
- (NSArray *)textStorageTitleRanges;
- (NSString *)slideNodeUUID;
- (struct CGSize)originalShowSize;
- (void)setOriginalShowSize:(struct CGSize)arg0;
- (void)dealloc;
- (NSArray *)drawables;

@end
