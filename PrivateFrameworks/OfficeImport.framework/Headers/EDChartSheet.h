/* Runtime dump - EDChartSheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDChartSheet : EDSheet
{
    CHDChart * mMainChart;
    BOOL mIsBoundsSet;
    struct CGRect mBounds;
}

- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg0;
- (void).cxx_construct;
- (BOOL)areBoundsSet;
- (id)mainChart;
- (void)teardown;
- (void)addDrawable:(GQHPagesFloatingDrawable *)arg0;
- (void)setMainChart:(id)arg0;

@end
