/* Runtime dump - PBPresentationReaderState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBPresentationReaderState : NSObject
{
    struct PptBinaryReader * mPptBinaryReader;
    PDPresentation * mTgtPresentation;
    ESDRoot * mDocumentRoot;
    ESDContainer * mSrcSlideListHolder;
    struct ChVector<int> * mCurrentSlideTextBlockStartIndexVector;
    unsigned long mSrcSlideId;
    NSMutableArray * mSlideIndexes;
    OITSUNoCopyDictionary * mSlideMasterToMasterStyles;
    struct __CFDictionary * mHyperlinkMap;
    PBOfficeArtReaderState * mOfficeArtState;
    NSMutableArray * mFontEntities;
    PDSlideBase * mTgtSlide;
    unsigned int mTextLength;
    char mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary * mPlaceholderBulletStyles;
    PBOutlineBulletDictionary * mPlaceholderMacCharStyles;
    ESDObject * mCurrentBulletStyle;
    ESDObject * mCurrentMacCharStyle;
    struct ChVector<PBReaderMasterStyleInfo> * mSrcDocMasterStyleInfoVector;
    struct ChVector<PBReaderMasterStyleInfo> * mSrcCurrentMasterStyleInfoVector;
    PBSlideState * mSlideState;
    <TCCancelDelegate> * mCancel;
    char mHasSlideNumberPlaceholder;
    NSMutableDictionary * mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property ESDContainer * sourceSlideListHolder;
@property (retain, nonatomic) <TCCancelDelegate> * cancelDelegate;
@property char hasSlideNumberPlaceholder;

- (void)dealloc;
- (char)isCancelled;
- (NSObject *)officeArtState;
- (struct PptBinaryReader *)reader;
- (void)setCancelDelegate:(<TCCancelDelegate> *)arg0;
- (<TCCancelDelegate> *)cancelDelegate;
- (void)resetSlideState;
- (NSObject *)slideState;
- (id)tgtSlide;
- (NSObject *)currentMacCharStyle;
- (char)hasCharacterPropertyBulletIndex;
- (void)setBulletIndex:(unsigned int)arg0;
- (NSObject *)fontEntityAtIndex:(unsigned int)arg0;
- (NSString *)documentRoot;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg0;
- (void)setSourceTextBoxContainerHolder:(id)arg0 forTargetShape:(id)arg1;
- (void)setHasSlideNumberPlaceholder:(char)arg0;
- (struct ChVector<int> *)currentSlideTextBlockStartIndexVector;
- (ESDContainer *)sourceSlideListHolder;
- (void)setCurrentTextType:(int)arg0 placeholderIndex:(unsigned long)arg1;
- (PBPresentationReaderState *)initWithReader:(struct PptBinaryReader *)arg0 tgtPresentation:(/* block */ id * *)arg1;
- (void)setDocumentRoot:(NSObject *)arg0;
- (void)addFontEntity:(NSObject *)arg0 charSet:(int)arg1 type:(int)arg2 family:(int)arg3;
- (struct PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(NSObject *)arg0;
- (id)tgtPresentation;
- (void)setCurrentSourceMasterStyleInfoVector:(struct ChVector<PBReaderMasterStyleInfo> *)arg0;
- (id)masterStyles:(id)arg0;
- (void)setSourceSlideListHolder:(ESDContainer *)arg0;
- (void)setSourceSlideId:(unsigned long)arg0;
- (void)setCurrentBulletStyle:(NSObject *)arg0 macCharStyle:(NSObject *)arg1;
- (unsigned int)numberOfSlideIndexes;
- (void)addSlideIndex:(unsigned int)arg0;
- (unsigned int)getSlideIndexAt:(unsigned int)arg0;
- (id)slideIndexesRef;
- (unsigned int)fontEntityCount;
- (void)setTgtSlide:(id)arg0;
- (void)setTextLength:(unsigned int)arg0;
- (void)setHasCharacterPropertyBulletIndex:(char)arg0;
- (unsigned int)bulletIndex;
- (void)setPlaceholderBulletStyles:(id)arg0;
- (void)setPlaceholderMacCharStyles:(id)arg0;
- (NSObject *)currentBulletStyle;
- (char)hasCurrentSourceMasterStyleInfoVector;
- (NSObject *)hyperlinkInfoWithId:(unsigned long)arg0 createIfAbsent:(char)arg1;
- (char)hasSlideNumberPlaceholder;
- (struct PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(NSObject *)arg0;
- (void)setMasterStyles:(id)arg0 slideMaster:(PDSlideMaster *)arg1;
- (unsigned int)textLength;

@end
