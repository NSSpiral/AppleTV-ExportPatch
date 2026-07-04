/* Runtime dump - KNNoteInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNNoteInfo : TSPObject <TSDContainerInfo, TSWPStorageParent, TSKDocumentObject, TSKTransformableObject>
{
    NSObject<TSDContainerInfo> * mParentInfo;
    TSWPStorage * mContainedStorage;
    struct CGRect mFrameForPrinting;
    char mShrinkTextForPrinting;
}

@property (retain, nonatomic) TSWPStorage * containedStorage;
@property (readonly, nonatomic) int verticalAlignment;
@property (nonatomic) struct CGRect frameForPrinting;
@property (nonatomic) char shrinkTextForPrinting;
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
@property (readonly, nonatomic) int contentWritingDirection;

+ (char)needsObjectUUID;

- (KNNoteInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (TSUUUIDPath *)objectUUIDPath;
- (void)saveToArchive:(struct NoteArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct NoteArchive *)arg0 unarchiver:(struct NoteArchive)arg1;
- (TSWPStorage *)containedStorage;
- (Class)repClass;
- (Class)layoutClass;
- (NSArray *)childInfos;
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
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (NSString *)infoForSelectionPath:(NSString *)arg0;
- (char)autoListRecognition;
- (char)autoListTermination;
- (char)textIsVertical;
- (int)contentWritingDirection;
- (char)shouldHideEmptyBullets;
- (void)setContainedStorage:(TSWPStorage *)arg0;
- (KNNoteInfo *)initWithContext:(NSObject *)arg0 containedStorage:(TSWPStorage *)arg1;
- (struct CGRect)frameForPrinting;
- (void)setFrameForPrinting:(struct CGRect)arg0;
- (char)shrinkTextForPrinting;
- (void)setShrinkTextForPrinting:(char)arg0;
- (void)dealloc;
- (KNNoteInfo *)initWithContext:(TSPObjectContext *)arg0;
- (TSDInfoGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (NSEnumerator *)childEnumerator;
- (int)verticalAlignment;

@end
