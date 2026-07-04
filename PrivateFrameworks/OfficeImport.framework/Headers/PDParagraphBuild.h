/* Runtime dump - PDParagraphBuild
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDParagraphBuild : PDBuild
{
    NSMutableArray * mTimeNodeDataList;
    double mAutoAdvanceTime;
    char mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (void)dealloc;
- (PDParagraphBuild *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (double)autoAdvanceTime;
- (char)isReversedParagraphOrder;
- (int)buildLevel;
- (NSArray *)timeNodeDataList;
- (unsigned int)timeNodeDataListCount;
- (NSObject *)timeNodeDataAtIndex:(unsigned int)arg0;
- (NSData *)addTimeNodeData;
- (void)setAutoAdvanceTime:(double)arg0;
- (void)setIsReversedParagraphOrder:(char)arg0;
- (void)setBuildLevel:(int)arg0;

@end
