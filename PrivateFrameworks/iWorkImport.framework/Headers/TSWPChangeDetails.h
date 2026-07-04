/* Runtime dump - TSWPChangeDetails
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting>
{
    NSString * mChangeTrackingContentString;
    NSString * mChangeTrackingTitleString;
    TSWPChange * _change;
}

@property (retain, nonatomic) TSWPChange * change;
@property (readonly, nonatomic) NSString * changeTrackingContentString;
@property (readonly, nonatomic) NSString * changeTrackingTitleString;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int annotationType;
@property (readonly, nonatomic) TSKAnnotationAuthor * author;
@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) NSDate * date;
@property (nonatomic) <TSKModel> * hostingModel;
@property (readonly, nonatomic) NSString * changeTrackingContentFormatString;
@property (copy, nonatomic) TSDCommentStorage * storage;

- (TSWPChangeDetails *)initWithChange:(TSWPChange *)arg0;
- (void)commentWillBeAddedToDocumentRoot;
- (<TSKModel> *)hostingModel;
- (void)commitText:(NSString *)arg0;
- (void)setHostingModel:(<TSKModel> *)arg0;
- (NSString *)changeTrackingTitleString;
- (NSString *)changeTrackingContentString;
- (NSString *)changeTrackingContentFormatString;
- (int)annotationDisplayStringType;
- (void)p_updateChangeStrings;
- (char)isEqualToChangeDetails:(id)arg0;
- (struct _NSRange)p_rangeInStorage;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)date;
- (TSWPChangeDetails *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAuthor:(TSKAnnotationAuthor *)arg0;
- (TSKAnnotationAuthor *)author;
- (int)annotationType;
- (TSWPChange *)change;
- (void)setChange:(TSWPChange *)arg0;

@end
