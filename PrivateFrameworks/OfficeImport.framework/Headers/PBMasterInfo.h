/* Runtime dump - PBMasterInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBMasterInfo : NSObject
{
    PDSlideMaster * mSlideMaster;
    NSMutableArray * mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary * mLayoutMap;
    struct ChVector<PBReaderMasterStyleInfo> * mSrcTextStyling;
}

- (void)dealloc;
- (PBMasterInfo *)init;
- (PDSlideMaster *)slideMaster;
- (void)setSlideMaster:(PDSlideMaster *)arg0;
- (void)setMainPbRef:(unsigned int)arg0;
- (unsigned int)mainPbRef;
- (void)setTitlePbRef:(unsigned int)arg0;
- (unsigned int)titlePbRef;
- (void)cacheTargetLayoutType:(int)arg0;
- (NSArray *)allTargetLayoutTypes;
- (void)cacheSlideLayouts;
- (id)slideLayoutForSlideHolder:(id)arg0;
- (struct ChVector<PBReaderMasterStyleInfo> *)sourceTextStyling;

@end
