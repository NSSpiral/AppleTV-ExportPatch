/* Runtime dump - TSDGroupInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor>
{
    NSMutableArray * mChildInfos;
    char mIsInDocument;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char matchesObjectPlaceholderGeometry;
@property (copy, nonatomic) TSDInfoGeometry * geometry;
@property (nonatomic) NSObject<TSDContainerInfo> * parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property (readonly, nonatomic) char floatingAboveText;
@property (readonly, nonatomic) char anchoredToText;
@property (readonly, nonatomic) char inlineWithText;
@property (readonly, nonatomic) char attachedToBodyText;

+ (TSDGroupInfo *)groupGeometryFromChildrenInfos:(id)arg0;
+ (NSObject *)p_drawablesToInsertForGroup:(NSObject *)arg0 filteredWithTarget:(NSObject *)arg1 action:(SEL)arg2 didUngroup:(char *)arg3;
+ (NSObject *)drawablesToInsertForGroup:(NSObject *)arg0 filteredWithTarget:(NSObject *)arg1 action:(SEL)arg2;

- (char)aspectRatioLocked;
- (TSDGroupInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)willCopyWithOtherDrawables:(id)arg0;
- (void)didCopy;
- (void)saveToArchive:(struct GroupArchive *)arg0 archiver:(NSObject *)arg1;
- (Class)repClass;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (Class)layoutClass;
- (NSArray *)childInfos;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (NSObject *)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1 chunkIndex:(unsigned int)arg2;
- (char)canAspectRatioLockBeChangedByUser;
- (TSDGroupInfo *)subclassInitFromUnarchiver:(NSObject *)arg0;
- (char)canAnchor;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)setChildInfos:(NSArray *)arg0;
- (void)addChildInfo:(NSDictionary *)arg0;
- (void)insertChildInfo:(NSDictionary *)arg0 atIndex:(unsigned int)arg1;
- (void)insertChildInfo:(NSDictionary *)arg0 below:(char)arg1;
- (void)insertChildInfo:(NSDictionary *)arg0 above:(UITextEffectsWindowNoAbove *)arg1;
- (void)moveChildren:(NSArray *)arg0 toIndexes:(NSArray *)arg1;
- (void)removeChildInfo:(NSDictionary *)arg0;
- (void)replaceChildInfo:(NSDictionary *)arg0 with:(id)arg1;
- (NSString *)infoForSelectionPath:(NSString *)arg0;
- (id)allNestedChildrenInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (NSDictionary *)groupedGeometryForChildInfo:(NSDictionary *)arg0;
- (void)removeAllChildrenInDocument:(char)arg0;
- (void)processSelectedStoragesWithStatisticsController:(BRController *)arg0;
- (NSDictionary *)ungroupedGeometryForChildInfo:(NSDictionary *)arg0;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (void)ensureGeometryFitsChildren;
- (void)loadFromArchive:(struct GroupArchive *)arg0 unarchiver:(struct GroupArchive)arg1 upgradeDOLC:(id)arg2;
- (char)containsDisallowedElementKind:(unsigned int)arg0;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;
- (TSDInfoGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (NSEnumerator *)childEnumerator;

@end
