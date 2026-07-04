/* Runtime dump - TSWPCommentInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCommentInfo : TSWPShapeInfo <TSDAnnotationHosting>
{
    TSDCommentStorage * _commentStorage;
}

@property (readonly, nonatomic) TSDCommentStorage * commentStorage;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int annotationType;
@property (readonly, nonatomic) TSKAnnotationAuthor * author;
@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) NSDate * date;
@property (nonatomic) <TSKModel> * hostingModel;
@property (readonly, nonatomic) NSString * changeTrackingTitleString;
@property (readonly, nonatomic) NSString * changeTrackingContentString;
@property (readonly, nonatomic) NSString * changeTrackingContentFormatString;
@property (copy, nonatomic) TSDCommentStorage * storage;

+ (void)upgradeCommentInfoStorage:(id)arg0;
+ (void)upgradeCommentInfoStyle:(NSObject *)arg0;
+ (TSWPCommentInfo *)bezierPathForExportCommentOutline;
+ (NSString *)commentStyleIdentifier;
+ (NSObject *)p_commentParagraphStyleForStylesheet:(NSObject *)arg0;
+ (TSWPCommentInfo *)p_defaultPadding;
+ (TSWPCommentInfo *)p_defaultFill;
+ (TSWPCommentInfo *)p_defaultStroke;
+ (TSWPCommentInfo *)p_defaultShadow;
+ (NSObject *)p_defaultCommentInfoStyleInStylesheet:(NSObject *)arg0;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg0;
+ (NSString *)commentInfoWithContext:(NSObject *)arg0 size:(struct CGSize)arg1 storage:(TSDCommentStorage *)arg2;

- (TSWPCommentInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct CommentInfoArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct CommentInfoArchive *)arg0 unarchiver:(struct CommentInfoArchive)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (char)supportsHyperlinks;
- (char)isLockable;
- (void)commentWillBeAddedToDocumentRoot;
- (char)supportsAttachedComments;
- (NSString *)creationDateString;
- (<TSKModel> *)hostingModel;
- (void)commitText:(NSString *)arg0;
- (char)wantsAnnotationPopover;
- (void)setHostingModel:(<TSKModel> *)arg0;
- (int)annotationDisplayStringType;
- (TSDCommentStorage *)commentStorage;
- (TSWPCommentInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 pathSource:(TSDPathSource *)arg3 commentStorage:(TSDCommentStorage *)arg4;
- (TSWPCommentInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 pathSource:(TSDPathSource *)arg3 wpStorage:(TSPObject *)arg4;
- (id)pathSourceForExportCommentOutline;
- (TSWPCommentInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 pathSource:(TSDPathSource *)arg3 wpStorage:(TSPObject *)arg4 commentStorage:(TSDCommentStorage *)arg5;
- (NSDate *)date;
- (TSDCommentStorage *)storage;
- (void)setAuthor:(TSKAnnotationAuthor *)arg0;
- (TSKAnnotationAuthor *)author;
- (int)annotationType;

@end
