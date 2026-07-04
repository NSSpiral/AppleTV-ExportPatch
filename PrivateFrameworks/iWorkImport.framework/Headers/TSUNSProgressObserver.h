/* Runtime dump - TSUNSProgressObserver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNSProgressObserver : NSObject
{
    NSProgress * _nsProgress;
    TSUProgressContext * _progressContext;
    TSUBasicProgress * _basicProgress;
    double _basicProgressMaxValue;
    char _didStart;
}

+ (NSNumber *)observerForNSProgress:(id)arg0 reportingToProgressContext:(NSObject *)arg1;
+ (NSNumber *)observerForNSProgress:(id)arg0 reportingToBasicProgress:(id)arg1 maxValue:(double)arg2;

- (TSUNSProgressObserver *)initWithNSProgress:(NSProgress *)arg0 progressContext:(TSUProgressContext *)arg1 basicProgress:(TSUBasicProgress *)arg2 basicProgressMaxValue:(double)arg3;
- (void)dealloc;
- (TSUNSProgressObserver *)init;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;

@end
