/* Runtime dump - EDPageSetup
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPageSetup : NSObject
{
    int mOrientation;
    int mPageOrder;
    BOOL mCustomFirstPageNumber;
    unsigned long mFirstPageNumber;
    unsigned long mFitToHeight;
    unsigned long mFitToWidth;
    unsigned long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (EDPageSetup *)pageSetup;

- (float)topMargin;
- (void)setTopMargin:(float)arg0;
- (EDPageSetup *)init;
- (int)orientation;
- (unsigned long)scale;
- (void)setScale:(unsigned long)arg0;
- (void)setRightMargin:(float)arg0;
- (void)setOrientation:(int)arg0;
- (void)setOrder:(int)arg0;
- (int)order;
- (float)rightMargin;
- (float)leftMargin;
- (float)headerMargin;
- (float)bottomMargin;
- (void)setLeftMargin:(float)arg0;
- (void)setBottomMargin:(float)arg0;
- (void)setFirstPageNumber:(unsigned long)arg0;
- (void)setCustomFirstPageNumber:(BOOL)arg0;
- (void)setFitToHeight:(unsigned long)arg0;
- (void)setFitToWidth:(unsigned long)arg0;
- (void)setHeaderMargin:(float)arg0;
- (void)setFooterMargin:(float)arg0;
- (BOOL)customFirstPageNumber;
- (unsigned long)firstPageNumber;
- (unsigned long)fitToHeight;
- (unsigned long)fitToWidth;
- (float)footerMargin;

@end
