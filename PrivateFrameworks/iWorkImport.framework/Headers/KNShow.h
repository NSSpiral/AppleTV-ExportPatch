/* Runtime dump - KNShow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNShow : TSPObject
{
    KNUIState * mUIState;
    KNTheme * mTheme;
    KNSlideTree * mSlideTree;
    TSSStylesheet * mStylesheet;
    KNRecording * mRecording;
    struct CGSize mSize;
    double mAutoplayTransitionDelay;
    double mAutoplayBuildDelay;
    double mIdleTimerDelay;
    int mMode;
    char mLoopPresentation;
    char mIdleTimerActive;
    char mAutomaticallyPlaysUponOpen;
    char mNeedsToUpdateThumbnails;
    char mWasImportedAsPreUFF;
    char mLocalizeDocument;
    KNSoundtrack * mSoundtrack;
}

@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) KNUIState * uiState;
@property (retain, nonatomic) KNTheme * theme;
@property (retain, nonatomic) KNSlideTree * slideTree;
@property (readonly, nonatomic) TSSStylesheet * stylesheet;
@property (nonatomic) double autoplayTransitionDelay;
@property (nonatomic) double autoplayBuildDelay;
@property (nonatomic) double idleTimerDelay;
@property (nonatomic) int mode;
@property (retain, nonatomic) KNSoundtrack * soundtrack;
@property (retain, nonatomic) KNRecording * recording;
@property (nonatomic) char loopPresentation;
@property (nonatomic) char idleTimerActive;
@property (nonatomic) char automaticallyPlaysUponOpen;
@property (readonly, nonatomic) char slideNumbersVisible;
@property (readonly, nonatomic) char needsToUpdateThumbnails;
@property (readonly, nonatomic) char wasImportedAsPreUFF;
@property (nonatomic) char localizeDocument;
@property (readonly, nonatomic) char allSlidesSkipped;

+ (NSObject *)showWithSize:(struct CGSize)arg0 context:(NSObject *)arg1;
+ (unsigned int)maximumWidthForExport;
+ (unsigned int)maximumHeightForExport;
+ (unsigned int)minimumHeight;
+ (unsigned int)minimumWidth;
+ (unsigned int)maximumWidth;
+ (unsigned int)maximumHeight;

- (KNShow *)initFromUnarchiver:(NSObject *)arg0;
- (void)willModify;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ShowArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ShowArchive *)arg0 unarchiver:(struct ShowArchive)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(NSObject *)arg0;
- (KNSlideTree *)slideTree;
- (char)loopPresentation;
- (void)setLocalizeDocument:(char)arg0;
- (KNUIState *)uiState;
- (KNShow *)initWithSize:(struct CGSize)arg0 context:(NSObject *)arg1;
- (unsigned int)indexOfSlideNode:(NSObject *)arg0;
- (void)setSlideTree:(KNSlideTree *)arg0;
- (double)autoplayTransitionDelay;
- (void)setAutoplayTransitionDelay:(double)arg0;
- (double)autoplayBuildDelay;
- (void)setAutoplayBuildDelay:(double)arg0;
- (double)idleTimerDelay;
- (void)setIdleTimerDelay:(double)arg0;
- (void)setLoopPresentation:(char)arg0;
- (char)idleTimerActive;
- (void)setIdleTimerActive:(char)arg0;
- (char)automaticallyPlaysUponOpen;
- (void)setAutomaticallyPlaysUponOpen:(char)arg0;
- (KNSoundtrack *)soundtrack;
- (void)setSoundtrack:(KNSoundtrack *)arg0;
- (KNRecording *)recording;
- (char)slideNumbersVisible;
- (NSObject *)slideNodeAtIndex:(unsigned int)arg0;
- (NSIndexSet *)slideNodesAtIndexes:(NSArray *)arg0;
- (char)allSlidesSkipped;
- (void)setUiState:(KNUIState *)arg0;
- (char)needsToUpdateThumbnails;
- (char)wasImportedAsPreUFF;
- (char)localizeDocument;
- (void)setRecording:(KNRecording *)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (struct CGPoint)center;
- (void)setMode:(int)arg0;
- (int)mode;
- (KNTheme *)theme;
- (void)setTheme:(KNTheme *)arg0;
- (TSSStylesheet *)stylesheet;

@end
