/* Runtime dump - OADTextBodyProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextBodyProperties : OADProperties
{
    OADTextBodyAutoFit * mAutoFit;
    OADTextWarp * mTextWarp;
    double mTopInset;
    double mLeftInset;
    double mBottomInset;
    double mRightInset;
    double mRotation;
    double mColumnSpacing;
    unsigned short mColumnCount;
    unsigned short mTextBodyId;
    unsigned char mTextAnchorType;
    unsigned char mFlowType;
    unsigned char mWrapType;
    unsigned char mVerticalOverflowType;
    unsigned char mHorizontalOverflowType;
    id mRepectFirstLastParagraphSpacing;
    id mIsUpright;
    id mIsAnchorCenter;
    id mIsLeftToRightColumns;
    id mHasVerticalOverflowType;
    id mHasHorizontalOverflowType;
    id mHasTextBodyId;
    id mHasFlowType;
    id mHasWrapType;
    id mHasTextAnchorType;
    id mHasIsAnchorCenter;
    id mHasIsUpright;
    id mHasRotation;
    id mHasColumnCount;
    id mHasColumnSpacing;
    id mHasIsLeftToRightColumns;
    id mHasRepectFirstLastParagraphSpacing;
    id mHasTopInset;
    id mHasLeftInset;
    id mHasRightInset;
    id mHasBottomInset;
}

+ (OADTextBodyProperties *)defaultProperties;
+ (OADTextBodyProperties *)defaultEscherWordArtProperties;

- (void)dealloc;
- (OADTextBodyProperties *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setRotation:(double)arg0;
- (double)rotation;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;
- (char)hasTopInset;
- (double)topInset;
- (char)hasLeftInset;
- (double)leftInset;
- (char)hasBottomInset;
- (double)bottomInset;
- (char)hasRightInset;
- (double)rightInset;
- (int)textAnchorType;
- (void)setLeftInset:(double)arg0;
- (void)setTopInset:(double)arg0;
- (void)setRightInset:(double)arg0;
- (void)setBottomInset:(double)arg0;
- (void)setColumnSpacing:(double)arg0;
- (void)setIsLeftToRightColumns:(char)arg0;
- (void)setRespectLastFirstLineSpacing:(char)arg0;
- (void)setIsAnchorCenter:(char)arg0;
- (void)setTextAnchorType:(int)arg0;
- (void)setIsUpright:(char)arg0;
- (void)setAutoFit:(OADTextBodyAutoFit *)arg0;
- (void)setTextWarp:(OADPresetTextWarp *)arg0;
- (void)setFlowType:(int)arg0;
- (void)setWrapType:(int)arg0;
- (void)setVerticalOverflowType:(int)arg0;
- (void)setHorizontalOverflowType:(int)arg0;
- (void)removeUnnecessaryOverrides;
- (OADTextBodyProperties *)initWithDefaults;
- (char)hasRespectLastFirstLineSpacing;
- (char)hasColumnCount;
- (char)hasColumnSpacing;
- (char)hasIsLeftToRightColumns;
- (char)hasAutoFit;
- (char)hasFlowType;
- (char)hasWrapType;
- (char)hasVerticalOverflowType;
- (char)hasHorizontalOverflowType;
- (char)hasTextWarp;
- (OADPresetTextWarp *)textWarp;
- (char)hasIsAnchorCenter;
- (char)hasTextAnchorType;
- (char)hasIsUpright;
- (char)respectLastFirstLineSpacing;
- (double)columnSpacing;
- (char)isLeftToRightColumns;
- (BOOL)autoFit;
- (int)flowType;
- (int)wrapType;
- (int)verticalOverflowType;
- (char)hasTextBodyId;
- (int)textBodyId;
- (void)setTextBodyId:(int)arg0;
- (char)isAnchorCenter;
- (char)isUpright;
- (int)horizontalOverflowType;
- (char)isWarped;
- (char)hasRotation;

@end
