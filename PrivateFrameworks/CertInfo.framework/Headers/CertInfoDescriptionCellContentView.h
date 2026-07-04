/* Runtime dump - CertInfoDescriptionCellContentView
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoDescriptionCellContentView : UIView
{
    NSArray * _labelsAndValues;
    float _idealHeight;
    int _sizesCount;
    struct CGSize * _sizes;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)layoutSubviews;
- (float)rowHeight;
- (void).cxx_destruct;
- (UIFont *)_labelFont;
- (void)setLabelsAndValues:(NSArray *)arg0;
- (UIFont *)_valueFont;
- (void)_recalculateIdealHeight;

@end
