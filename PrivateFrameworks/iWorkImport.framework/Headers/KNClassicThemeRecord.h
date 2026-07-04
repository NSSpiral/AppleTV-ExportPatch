/* Runtime dump - KNClassicThemeRecord
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNClassicThemeRecord : TSPObject
{
    NSString * mUUID;
    KNClassicStylesheetRecord * mStylesheetRecord;
    NSMutableArray * mMasters;
}

@property (copy, nonatomic) NSString * UUID;
@property (retain, nonatomic) KNClassicStylesheetRecord * stylesheetRecord;
@property (readonly, nonatomic) NSArray * masters;

- (KNClassicThemeRecord *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ClassicThemeRecordArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ClassicThemeRecordArchive *)arg0 unarchiver:(struct ClassicThemeRecordArchive)arg1;
- (NSArray *)masters;
- (KNClassicStylesheetRecord *)stylesheetRecord;
- (void)setStylesheetRecord:(KNClassicStylesheetRecord *)arg0;
- (void)addMaster:(PDSlideMaster *)arg0;
- (void)dealloc;
- (NSString *)UUID;
- (KNClassicThemeRecord *)initWithContext:(TSPObjectContext *)arg0;
- (void)setUUID:(NSSet *)arg0;

@end
