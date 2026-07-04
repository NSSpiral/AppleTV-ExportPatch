/* Runtime dump - AWDMetricContainer
 * Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDMetricContainer : NSObject
{
    PBCodable * _metric;
    unsigned long _metricId;
}

@property (retain, nonatomic) PBCodable * metric;
@property (readonly, nonatomic) unsigned long metricId;

- (void)dealloc;
- (PBCodable *)metric;
- (void)setMetric:(PBCodable *)arg0;
- (AWDMetricContainer *)initWithMetricId:(unsigned long)arg0;
- (unsigned long)metricId;

@end
