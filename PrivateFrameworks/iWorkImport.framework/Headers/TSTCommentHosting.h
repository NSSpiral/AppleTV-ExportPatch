/* Runtime dump - TSTCommentHosting
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCommentHosting : NSObject <TSDAnnotationHosting>
{
    TSDCommentStorage * mStorage;
    TSTTableInfo * mTableInfo;
    struct TSTCellUID mCellUID;
}

@property (readonly, nonatomic) TSTTableInfo * tableInfo;
@property (readonly, nonatomic) struct ? cellID;
@property (readonly, nonatomic) struct TSTCellUID cellUID;
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
- (TSTCommentHosting *)initWithStorage:(TSDCommentStorage *)arg0 forTableInfo:(NSDictionary *)arg1 cellID:(struct ?)arg2;
- (void)commentWillBeAddedToDocumentRoot;
- (<TSKModel> *)hostingModel;
- (void)commitText:(NSString *)arg0;
- (void)setHostingModel:(<TSKModel> *)arg0;
- (int)annotationDisplayStringType;
- (TSTCommentHosting *)initWithStorage:(TSDCommentStorage *)arg0 forTableInfo:(NSDictionary *)arg1 cellUID:(struct TSTCellUID)arg2;
- (Class)editorClass;
- (TSTTableInfo *)tableInfo;
- (struct TSTCellUID)cellUID;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)date;
- (TSTCommentHosting *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (TSDCommentStorage *)storage;
- (void)setAuthor:(TSKAnnotationAuthor *)arg0;
- (TSKAnnotationAuthor *)author;
- (int)annotationType;
- (struct ?)cellID;

@end
