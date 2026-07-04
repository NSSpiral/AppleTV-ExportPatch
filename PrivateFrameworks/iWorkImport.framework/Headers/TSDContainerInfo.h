/* Runtime dump - TSDContainerInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDContainerInfo : TSPObject <TSDMutableContainerInfo, TSKDocumentObject>
{
    TSDInfoGeometry * mGeometry;
    NSObject<TSDContainerInfo> * mParentInfo;
    NSMutableArray * mChildInfos;
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

- (TSDContainerInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct ContainerArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ContainerArchive *)arg0 unarchiver:(struct ContainerArchive)arg1;
- (Class)repClass;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (Class)layoutClass;
- (NSArray *)childInfos;
- (TSDContainerInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (NSObject<TSDContainerInfo> *)parentInfo;
- (TSPObject<TSDOwningAttachment> *)owningAttachment;
- (TSPObject<TSDOwningAttachment> *)owningAttachmentNoRecurse;
- (char)isFloatingAboveText;
- (char)isAnchoredToText;
- (char)isAttachedToBodyText;
- (char)isThemeContent;
- (char)isInlineWithText;
- (void)setPrimitiveGeometry:(NSObject *)arg0;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg0;
- (void)setParentInfo:(NSObject<TSDContainerInfo> *)arg0;
- (void)setOwningAttachment:(TSPObject<TSDOwningAttachment> *)arg0;
- (void)setChildInfos:(NSArray *)arg0;
- (void)addChildInfo:(NSDictionary *)arg0;
- (void)insertChildInfo:(NSDictionary *)arg0 atIndex:(unsigned int)arg1;
- (void)insertChildInfo:(NSDictionary *)arg0 below:(char)arg1;
- (void)insertChildInfo:(NSDictionary *)arg0 above:(UITextEffectsWindowNoAbove *)arg1;
- (void)moveChildren:(NSArray *)arg0 toIndexes:(NSArray *)arg1;
- (void)removeChildInfo:(NSDictionary *)arg0;
- (void)replaceChildInfo:(NSDictionary *)arg0 with:(id)arg1;
- (NSString *)infoForSelectionPath:(NSString *)arg0;
- (void)dealloc;
- (TSDInfoGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;

@end
