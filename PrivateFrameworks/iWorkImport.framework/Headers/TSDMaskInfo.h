/* Runtime dump - TSDMaskInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing, TSDInfoWithPathSource>
{
    TSDPathSource * mPathSource;
}

@property (copy, nonatomic) TSDPathSource * pathSource;
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

- (TSDMaskInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct MaskArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct MaskArchive *)arg0 unarchiver:(struct MaskArchive)arg1;
- (Class)repClass;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (Class)layoutClass;
- (TSDMaskInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1;
- (void)setPathSource:(TSDPathSource *)arg0;
- (TSDPathSource *)pathSource;
- (TSDMaskInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 pathSource:(TSDPathSource *)arg2;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSObject *)objectForProperty:(int)arg0;
- (void)setGeometry:(TSDInfoGeometry *)arg0;

@end
