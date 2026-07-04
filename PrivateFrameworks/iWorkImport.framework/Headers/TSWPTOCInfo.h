/* Runtime dump - TSWPTOCInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCInfo : TSWPShapeInfo
{
    TSWPTOCPartitioner * _partitioner;
    NSArray * _tocEntries;
    <TSWPTOCController> * _tocController;
    TSWPTOCSettings * _tocSettings;
    NSArray * _pageNumberRanges;
}

@property (retain, nonatomic) NSArray * tocEntries;
@property (nonatomic) <TSWPTOCController> * tocController;
@property (retain, nonatomic) TSWPTOCSettings * tocSettings;
@property (retain, nonatomic) NSArray * pageNumberRanges;
@property (readonly, nonatomic) NSSet * paragraphStylesShownInTOC;

+ (char)canPartition;

- (TSWPTOCInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (Class)repClass;
- (TSWPTOCPartitioner *)partitioner;
- (char)supportsAttachedComments;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (NSSet *)paragraphStylesShownInTOC;
- (void)p_regenerateStorageContent;
- (TSWPTOCSettings *)tocSettings;
- (char)p_startingTOCIsRTLForEntries:(NSArray *)arg0;
- (void)setPageNumberRanges:(NSArray *)arg0;
- (NSArray *)tocEntries;
- (void)loadTOCInfoMessage:(struct TOCInfoArchive *)arg0 unarchiver:(struct TOCInfoArchive)arg1;
- (void)saveTOCInfoMessage:(struct TOCInfoArchive *)arg0 archiver:(NSObject *)arg1;
- (NSArray *)pageNumberRanges;
- (void)setTOCEntries:(NSArray *)arg0;
- (void)setTOCSettings:(NSDictionary *)arg0;
- (NSObject *)containedStorageFormattedUsingParagraphStyle:(NSObject *)arg0;
- (<TSWPTOCController> *)tocController;
- (void)setTocController:(<TSWPTOCController> *)arg0;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;

@end
