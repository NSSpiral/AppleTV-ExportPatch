/* Runtime dump - TSDDrawableComment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableComment : NSObject <TSDAnnotationHosting>
{
    TSDCommentStorage * mStorage;
    TSDDrawableInfo * mParent;
}

@property (nonatomic) TSDDrawableInfo * parent;
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

- (void)setStorage:(TSDCommentStorage *)arg0;
- (TSDDrawableComment *)initWithParent:(TSDDrawableInfo *)arg0 storage:(TSDCommentStorage *)arg1;
- (void)commentWillBeAddedToDocumentRoot;
- (<TSKModel> *)hostingModel;
- (void)commitText:(NSString *)arg0;
- (void)setHostingModel:(<TSKModel> *)arg0;
- (int)annotationDisplayStringType;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSDate *)date;
- (TSDDrawableComment *)copyWithZone:(struct _NSZone *)arg0;
- (TSDCommentStorage *)storage;
- (void)setAuthor:(TSKAnnotationAuthor *)arg0;
- (TSKAnnotationAuthor *)author;
- (int)annotationType;
- (TSDDrawableInfo *)parent;
- (void)setParent:(TSDDrawableInfo *)arg0;

@end
