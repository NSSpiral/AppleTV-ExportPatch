/* Runtime dump - TSCHMultiDataChartRepInterpolations
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepInterpolations : NSObject
{
    CAMediaTimingFunction * mOverallTimingFunction;
    CAMediaTimingFunction * mIndividualTimingFunction;
}

@property (readonly, nonatomic) CAMediaTimingFunction * overall;
@property (readonly, nonatomic) CAMediaTimingFunction * individual;

+ (TSCHMultiDataChartRepInterpolations *)interpolationsWithOverallTimingFunction:(id)arg0 individualTimingFunction:(id)arg1;

- (TSCHMultiDataChartRepInterpolations *)initWithOverallTimingFunction:(id)arg0 individualTimingFunction:(id)arg1;
- (CAMediaTimingFunction *)overall;
- (CAMediaTimingFunction *)individual;
- (void)dealloc;

@end
