/* Runtime dump - CertUIItemDetailsSummaryCell
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUIItemDetailsSummaryCell : UITableViewCell
{
    NSArray * _detailViews;
    float _detailLabelOriginX;
}

@property (retain, nonatomic) NSArray * detailViews;
@property (nonatomic) float detailLabelOriginX;

- (void)layoutSubviews;
- (CertUIItemDetailsSummaryCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (void).cxx_destruct;
- (NSArray *)detailViews;
- (void)setDetailViews:(NSArray *)arg0;
- (void)setDetailLabelOriginX:(float)arg0;
- (void)createViewWithDescriptors:(NSArray *)arg0;
- (void)createViewWithItemDetailArray:(NSArray *)arg0;
- (float)detailLabelOriginX;

@end
