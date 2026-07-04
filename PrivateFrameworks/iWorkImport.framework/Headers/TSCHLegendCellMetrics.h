/* Runtime dump - TSCHLegendCellMetrics
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendCellMetrics : NSObject
{
    TSWPParagraphStyle * mParagraphStyle;
    struct __CTFont * mFont;
    float mBadgeSize;
    float mLegendSymbolGap;
    float mTrueTitleHeight;
    float mLineGap;
    float mBaseline;
}

@property (readonly, nonatomic) TSWPParagraphStyle * paragraphStyle;
@property (readonly, nonatomic) struct __CTFont * font;
@property (readonly, nonatomic) float badgeSize;
@property (readonly, nonatomic) float symbolGap;
@property (readonly, nonatomic) float titleHeight;
@property (readonly, nonatomic) float lineGap;
@property (readonly, nonatomic) float baseline;

- (TSWPParagraphStyle *)paragraphStyle;
- (float)symbolGap;
- (TSCHLegendCellMetrics *)initWithParagraphStyle:(TSWPParagraphStyle *)arg0;
- (float)badgeSize;
- (float)titleHeight;
- (float)lineGap;
- (void)dealloc;
- (struct __CTFont *)font;
- (float)baseline;

@end
