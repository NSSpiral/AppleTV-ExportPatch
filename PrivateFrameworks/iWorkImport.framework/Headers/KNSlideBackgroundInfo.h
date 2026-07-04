/* Runtime dump - KNSlideBackgroundInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject>
{
    NSObject<TSDContainerInfo> * mParentInfo;
    TSDInfoGeometry * mGeometry;
    TSSPropertySetChangeDetails * mChanges;
    TSSStylesheet * mStylesheet;
    KNAbstractSlide * mSlide;
}

@property (copy, nonatomic) TSDInfoGeometry * geometry;
@property (readonly, nonatomic) TSDFill * fill;
@property (readonly, nonatomic) KNAbstractSlide * slide;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char matchesObjectPlaceholderGeometry;
@property (nonatomic) NSObject<TSDContainerInfo> * parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property (readonly, nonatomic) char floatingAboveText;
@property (readonly, nonatomic) char anchoredToText;
@property (readonly, nonatomic) char inlineWithText;
@property (readonly, nonatomic) char attachedToBodyText;
@property (readonly, nonatomic) char isUserModifiable;

+ (KNSlideBackgroundInfo *)backgroundWithSlide:(KNAbstractSlide *)arg0 andGeometry:(NSObject *)arg1;

- (NSString *)copyWithContext:(NSObject *)arg0;
- (Class)repClass;
- (Class)layoutClass;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (NSObject<TSDContainerInfo> *)parentInfo;
- (TSPObject<TSDOwningAttachment> *)owningAttachment;
- (void)willChangeProperty:(int)arg0;
- (TSPObject<TSDOwningAttachment> *)owningAttachmentNoRecurse;
- (char)isFloatingAboveText;
- (char)isAnchoredToText;
- (char)isAttachedToBodyText;
- (char)isThemeContent;
- (char)isInlineWithText;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (char)isUserModifiable;
- (void)setPrimitiveGeometry:(NSObject *)arg0;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg0;
- (void)setParentInfo:(NSObject<TSDContainerInfo> *)arg0;
- (void)setOwningAttachment:(TSPObject<TSDOwningAttachment> *)arg0;
- (KNSlideBackgroundInfo *)initWithSlide:(KNAbstractSlide *)arg0 andGeometry:(NSObject *)arg1;
- (NSString *)commandForTransformingByTransform:(struct CGAffineTransform)arg0 context:(NSObject *)arg1 transformedObjects:(NSArray *)arg2 inBounds:(struct CGRect)arg3;
- (void)dealloc;
- (TSDFill *)fill;
- (struct CGSize)minimumSize;
- (TSDInfoGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (KNAbstractSlide *)slide;

@end
