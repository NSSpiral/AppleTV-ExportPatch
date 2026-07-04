/* Runtime dump - TSKFidgetResolver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKFidgetResolver : NSObject
{
    double _fidgetThreshold;
    id * _values;
    double * _times;
    unsigned int _head;
}

@property (nonatomic) double fidgetThreshold;
@property (readonly, nonatomic) id nonFidgetValue;

- (unsigned int)p_previousValidIndexFromIndex:(unsigned int)arg0;
- (void)pushValue:(id)arg0 withTime:(double)arg1;
- (void)p_advanceHead;
- (id)nonFidgetValue;
- (void)pushValue:(id)arg0;
- (double)fidgetThreshold;
- (void)setFidgetThreshold:(double)arg0;
- (void)dealloc;
- (TSKFidgetResolver *)init;

@end
