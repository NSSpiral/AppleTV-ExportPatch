/* Runtime dump - HAPTimedBlockedOperation
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPTimedBlockedOperation : HAPBlockOperation
{
    double _timeout;
}

@property (readonly, nonatomic) double timeout;

- (HAPTimedBlockedOperation *)init;
- (unsigned long long)dispatchTimeout;
- (HAPTimedBlockedOperation *)initWithTimeout:(double)arg0;
- (double)timeout;

@end
