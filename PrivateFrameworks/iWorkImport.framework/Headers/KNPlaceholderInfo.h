/* Runtime dump - KNPlaceholderInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPlaceholderInfo : TSWPShapeInfo

+ (KNPlaceholderInfo *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0;

- (KNPlaceholderInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct PlaceholderArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct PlaceholderArchive *)arg0 unarchiver:(struct PlaceholderArchive)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (char)autoListRecognition;
- (char)autoListTermination;
- (char)shouldHideEmptyBullets;
- (char)displaysInstructionalText;
- (NSString *)instructionalText;
- (NSString *)copyAsShapeInfoWithContext:(NSObject *)arg0;
- (int)kind;

@end
