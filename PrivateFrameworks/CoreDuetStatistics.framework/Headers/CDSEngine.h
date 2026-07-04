/* Runtime dump - CDSEngine
 * Image: /System/Library/PrivateFrameworks/CoreDuetStatistics.framework/CoreDuetStatistics
 */

@interface CDSEngine : NSObject

+ (CDSEngine *)valueStatistic:(int)arg0 fromBasisObjects:(NSArray *)arg1 error:(id *)arg2;
+ (CDSEngine *)durationStatistic:(int)arg0 fromBasisObjects:(NSArray *)arg1 error:(id *)arg2;
+ (CDSEngine *)interArrivalStatistic:(int)arg0 fromBasisObjects:(NSArray *)arg1 error:(id *)arg2;
+ (CDSEngine *)canonicalizeBasisObjectSequence:(id)arg0 error:(id *)arg1;

- (char)injestBasisObjects:(NSArray *)arg0 error:(id *)arg1;
- (double)occurrenceCoevalityCorrelationOfAttributeId:(unsigned long long)arg0 toAttributeId:(unsigned long long)arg1 coevalityLeewaySeconds:(double)arg2 error:(id *)arg3;
- (double)occurrenceOrderingCorrelationOfAttributeId:(unsigned long long)arg0 toAttributeId:(unsigned long long)arg1 orderingGapLeewaySeconds:(double)arg2 error:(id *)arg3;
- (double *)copyRangeCoevalityCorrelationMatrixOfAttributeId:(unsigned long long)arg0 toAttributeId:(unsigned long long)arg1 coevalityLeewaySeconds:(double)arg2 error:(id *)arg3;
- (double *)copyRangeOrderingCorrelationMatrixOfAttributeId:(unsigned long long)arg0 toAttributeId:(unsigned long long)arg1 orderingGapLeewaySeconds:(double)arg2 error:(id *)arg3;
- (id)cachedAttributeIds;
- (double *)copyOccurrenceCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 error:(id *)arg2;
- (double *)copyOccurrenceOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 error:(id *)arg2;
- (double *)copyRangeCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 error:(id *)arg2;
- (double *)copyRangeOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 error:(id *)arg2;
- (double *)copyPrincipalOccurrenceCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 writeAttributeIds:(unsigned long long * *)arg2 error:(unsigned long long)arg3;
- (double *)copyPrincipalOccurrenceOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 writeAttributeIds:(unsigned long long * *)arg2 error:(unsigned long long)arg3;
- (double *)copyPrincipalRangeCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 writeAttributeIds:(unsigned long long * *)arg2 writeStatisticTypes:(unsigned long long)arg3 error:(int * *)arg4;
- (double *)copyPrincipalRangeOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg0 writeAttributeCount:(unsigned long long *)arg1 writeAttributeIds:(unsigned long long * *)arg2 writeStatisticTypes:(unsigned long long)arg3 error:(int * *)arg4;
- (id)valueStatistic:(int)arg0 forAttributeId:(unsigned long long)arg1 error:(id *)arg2;
- (id)durationStatistic:(int)arg0 forAttributeId:(unsigned long long)arg1 error:(id *)arg2;
- (id)interArrivalStatistic:(int)arg0 forAttributeId:(unsigned long long)arg1 error:(id *)arg2;

@end
