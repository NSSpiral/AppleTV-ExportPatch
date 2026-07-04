/* Runtime dump - TSCH2DChartAbstractAreaLayoutItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem
{
    TSCHChartTitleLayoutItem * mTitleElement;
    TSCHChartDataSetNameLayoutItem * mDataSetNameElement;
    TSCHChartBodyLayoutItem * mChartBody;
}

@property (readonly, nonatomic) TSCHChartBodyLayoutItem * bodyLayoutItem;

- (void)setChartBodyLayoutSize:(struct CGSize)arg0;
- (struct CGRect)chartBodyLayoutRect;
- (TSCHChartBodyLayoutItem *)bodyLayoutItem;
- (struct CGRect)i_currentBufferAreaUnitRect;
- (void)dealloc;

@end
