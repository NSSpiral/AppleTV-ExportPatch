/* Runtime dump - CUIPSDLayoutMetricsChannel
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayoutMetricsChannel : NSObject
{
    struct CGRect _edgeInsets;
    NSString * _name;
}

@property (readonly, nonatomic) struct CGRect edgeInsets;
@property (retain, nonatomic) NSString * name;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (struct CGRect)edgeInsets;
- (void).cxx_construct;
- (void)setEdgeInsets:(struct CGRect)arg0;
- (void)sanitizeEdgeInsets;
- (CUIPSDLayoutMetricsChannel *)initWithEdgeInsets:(struct CGRect)arg0;

@end
