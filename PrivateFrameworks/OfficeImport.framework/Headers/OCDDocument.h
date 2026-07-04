/* Runtime dump - OCDDocument
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDDocument : NSObject
{
    OCDReader * mReader;
    OCDWriter * mWriter;
    OCDSummary * mSummary;
    OADBlipCollection * mBlips;
    NSMutableArray * mCharts;
    OITSUPointerKeyDictionary * mDualDrawableMap;
    OADTextListStyle * mDefaultTextStyle;
    OADGraphicStyleCache * mGraphicStyleCache;
    NSData * mEncryptionInfo;
}

@property (retain, nonatomic) OCDReader * reader;
@property (retain, nonatomic) OCDWriter * writer;
@property (readonly, nonatomic) OCDSummary * summary;
@property (readonly, nonatomic) OADBlipCollection * blips;
@property (readonly, nonatomic) NSMutableArray * charts;
@property (readonly, nonatomic) OITSUPointerKeyDictionary * dualDrawableMap;
@property (readonly, nonatomic) OADTextListStyle * defaultTextStyle;
@property (retain, nonatomic) OADGraphicStyleCache * graphicStyleCache;

- (void)dealloc;
- (OCDDocument *)init;
- (OADBlipCollection *)blips;
- (BOOL)isFromBinaryFile;
- (NSDictionary *)encryptionInfo;
- (void)setEncryptionInfo:(NSDictionary *)arg0;
- (OCDReader *)reader;
- (void)setReader:(OCDReader *)arg0;
- (OCDWriter *)writer;
- (void)setWriter:(OCDWriter *)arg0;
- (NSMutableArray *)charts;
- (OITSUPointerKeyDictionary *)dualDrawableMap;
- (OADTextListStyle *)defaultTextStyle;
- (OADGraphicStyleCache *)graphicStyleCache;
- (void)setGraphicStyleCache:(OADGraphicStyleCache *)arg0;
- (OCDSummary *)summary;

@end
