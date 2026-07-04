/* Runtime dump - TSCHChartAxisReferenceLineNonStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisReferenceLineNonStyle : NSObject
{
    TSCHChartAxisID * mAxisIdentifier;
    NSArray * mReferenceLineNonStyleItems;
}

@property (copy, nonatomic) TSCHChartAxisID * axisIdentifier;
@property (copy, nonatomic) NSArray * referenceLineNonStyleItems;

- (void)didInitFromSOS;
- (TSCHChartAxisID *)axisIdentifier;
- (void)setAxisIdentifier:(TSCHChartAxisID *)arg0;
- (NSArray *)referenceLineNonStyleItems;
- (void)setReferenceLineNonStyleItems:(NSArray *)arg0;
- (void)dealloc;

@end
