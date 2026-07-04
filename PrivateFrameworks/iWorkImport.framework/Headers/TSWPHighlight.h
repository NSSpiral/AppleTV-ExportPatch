/* Runtime dump - TSWPHighlight
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHighlight : TSPObject <TSDAnnotationHosting, TSPCopying, TSKDocumentObject>
{
    TSDCommentStorage * _commentStorage;
    TSWPStorage * _parentStorage;
}

@property (retain, nonatomic) TSDCommentStorage * commentStorage;
@property (retain, nonatomic) TSWPStorage * parentStorage;
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

+ (TSWPHighlight *)defaultHighlightWithContext:(NSObject *)arg0 includeCommentWithAuthor:(TSKAnnotationAuthor *)arg1;

- (TSWPHighlight *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)setStorage:(TSDCommentStorage *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)loadFromArchive:(struct HighlightArchive *)arg0 unarchiver:(struct HighlightArchive)arg1;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)commentWillBeAddedToDocumentRoot;
- (<TSKModel> *)hostingModel;
- (void)commitText:(NSString *)arg0;
- (void)setHostingModel:(<TSKModel> *)arg0;
- (int)annotationDisplayStringType;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (TSWPStorage *)parentStorage;
- (TSDCommentStorage *)commentStorage;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(NSObject *)arg0 key:(NSString *)arg1;
- (char)isCommentEmpty;
- (TSWPHighlight *)initWithContext:(NSObject *)arg0 commentStorage:(TSDCommentStorage *)arg1;
- (void)setCommentStorage:(TSDCommentStorage *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSDate *)date;
- (TSWPHighlight *)copyWithZone:(struct _NSZone *)arg0;
- (TSDCommentStorage *)storage;
- (void)setAuthor:(TSKAnnotationAuthor *)arg0;
- (TSKAnnotationAuthor *)author;
- (int)annotationType;

@end
