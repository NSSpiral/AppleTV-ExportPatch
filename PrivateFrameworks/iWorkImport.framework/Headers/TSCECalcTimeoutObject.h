/* Runtime dump - TSCECalcTimeoutObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECalcTimeoutObject : NSObject
{
    double _timeoutInterval;
    NSString * _blockingIdentifier;
}

@property (readonly) double timeoutInterval;
@property (readonly) NSString * blockingIdentifier;

- (NSString *)blockingIdentifier;
- (void)dealloc;
- (TSCECalcTimeoutObject *)initWithTimeout:(double)arg0;
- (double)timeoutInterval;

@end
