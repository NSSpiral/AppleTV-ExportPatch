/* Runtime dump - TSCHChartAxisReferenceLineStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisReferenceLineStyle : NSObject
{
    TSCHChartAxisID * mAxisIdentifier;
    NSArray * mReferenceLineStyles;
}

@property (copy, nonatomic) TSCHChartAxisID * axisIdentifier;
@property (copy, nonatomic) NSArray * referenceLineStyles;

- (void)didInitFromSOS;
- (TSCHChartAxisID *)axisIdentifier;
- (void)setAxisIdentifier:(TSCHChartAxisID *)arg0;
- (NSArray *)referenceLineStyles;
- (void)setReferenceLineStyles:(NSArray *)arg0;
- (void)dealloc;

@end
