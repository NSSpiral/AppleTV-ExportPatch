/* Runtime dump - TPPageInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageInfo : NSObject <TSDContainerInfo>
{
    TPDocumentRoot * _documentRoot;
    unsigned int _pageIndex;
    TPBodyInfo * _bodyInfo;
    <TPPageLayoutInfoProvider> * _layoutInfoProvider;
}

@property (readonly, nonatomic) unsigned int pageIndex;
@property (readonly, retain, nonatomic) TPBodyInfo * bodyInfo;
@property (readonly, nonatomic) TPDocumentRoot * documentRoot;
@property (readonly, nonatomic) <TPPageLayoutInfoProvider> * layoutInfoProvider;
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

- (NSString *)copyWithContext:(NSObject *)arg0;
- (Class)repClass;
- (Class)layoutClass;
- (NSArray *)childInfos;
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
- (NSString *)infoForSelectionPath:(NSString *)arg0;
- (TPPageInfo *)initWithPageIndex:(unsigned int)arg0 documentRoot:(TPDocumentRoot *)arg1 layoutInfoProvider:(<TPPageLayoutInfoProvider> *)arg2;
- (TPBodyInfo *)bodyInfo;
- (<TPPageLayoutInfoProvider> *)layoutInfoProvider;
- (void)dealloc;
- (TSDInfoGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (unsigned int)pageIndex;
- (TPDocumentRoot *)documentRoot;

@end
