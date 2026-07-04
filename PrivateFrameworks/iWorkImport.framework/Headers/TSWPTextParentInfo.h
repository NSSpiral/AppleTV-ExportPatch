/* Runtime dump - TSWPTextParentInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextParentInfo : NSObject <TSDInfo>

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
- (TSDInfoGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;

@end
