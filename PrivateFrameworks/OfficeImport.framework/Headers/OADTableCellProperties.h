/* Runtime dump - OADTableCellProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableCellProperties : NSObject
{
    OADStroke * mLeftStroke;
    char mIsLeftStrokeOverridden;
    OADStroke * mRightStroke;
    char mIsRightStrokeOverridden;
    OADStroke * mTopStroke;
    char mIsTopStrokeOverridden;
    OADStroke * mBottomStroke;
    char mIsBottomStrokeOverridden;
    OADStroke * mTopLeftToBottomRightStroke;
    char mIsTopLeftToBottomRightStrokeOverridden;
    OADStroke * mBottomLeftToTopRightStroke;
    char mIsBottomLeftToTopRightStrokeOverridden;
    OADTableCell3DProperties * mThreeDProperties;
    char mIsThreeDPropertiesOverridden;
    OADFill * mFill;
    char mIsFillOverridden;
    float mLeftMargin;
    char mIsLeftMarginOverridden;
    float mRightMargin;
    char mIsRightMarginOverridden;
    float mTopMargin;
    char mIsTopMarginOverridden;
    float mBottomMargin;
    char mIsBottomMarginOverridden;
    int mTextFlow;
    char mIsTextFlowOverridden;
    int mTextAnchor;
    char mIsTextAnchorOverridden;
    char mTextAnchorCenter;
    char mIsTextAnchorCenterOverridden;
    int mTextHorizontalOverflow;
    char mIsTextHorizontalOverflowOverridden;
}

- (float)topMargin;
- (void)setTopMargin:(float)arg0;
- (void)dealloc;
- (EDFill *)fill;
- (void)setRightMargin:(float)arg0;
- (float)rightMargin;
- (float)leftMargin;
- (float)bottomMargin;
- (char)isLeftMarginOverridden;
- (char)isRightMarginOverridden;
- (char)isTopMarginOverridden;
- (char)isBottomMarginOverridden;
- (void)setLeftMargin:(float)arg0;
- (char)isFillOverridden;
- (void)setFill:(TSDFill *)arg0;
- (int)textAnchor;
- (char)isTopStrokeOverridden;
- (TSDStroke *)topStroke;
- (char)isBottomStrokeOverridden;
- (TSDStroke *)bottomStroke;
- (char)isLeftStrokeOverridden;
- (TSDStroke *)leftStroke;
- (char)isRightStrokeOverridden;
- (TSDStroke *)rightStroke;
- (char)isTextAnchorOverridden;
- (void)setLeftStroke:(TSDStroke *)arg0;
- (void)setRightStroke:(TSDStroke *)arg0;
- (void)setTopStroke:(TSDStroke *)arg0;
- (void)setBottomStroke:(TSDStroke *)arg0;
- (void)setTopLeftToBottomRightStroke:(id)arg0;
- (void)setBottomLeftToTopRightStroke:(id)arg0;
- (void)setBottomMargin:(float)arg0;
- (void)setTextFlow:(int)arg0;
- (void)setTextAnchor:(int)arg0;
- (void)setTextAnchorCenter:(char)arg0;
- (void)setTextHorizontalOverflow:(int)arg0;
- (id)topLeftToBottomRightStroke;
- (id)bottomLeftToTopRightStroke;
- (id)stroke:(int)arg0;
- (char)isTopLeftToBottomRightStrokeOverridden;
- (char)isBottomLeftToTopRightStrokeOverridden;
- (id)strokeNormalToDir:(int)arg0 bound:(int)arg1;
- (NSDictionary *)threeDProperties;
- (void)setThreeDProperties:(NSDictionary *)arg0;
- (char)isThreeDPropertiesOverridden;
- (int)textFlow;
- (char)isTextFlowOverridden;
- (char)textAnchorCenter;
- (char)isTextAnchorCenterOverridden;
- (int)textHorizontalOverflow;
- (char)isTextHorizontalOverflowOverridden;

@end
