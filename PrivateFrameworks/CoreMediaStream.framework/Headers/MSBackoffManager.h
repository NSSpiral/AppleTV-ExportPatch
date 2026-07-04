/* Runtime dump - MSBackoffManager
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSBackoffManager : NSObject <NSCoding>
{
    <MSBackoffManagerDelegate> * _delegate;
    double _initialInterval;
    double _backoffFactor;
    double _randomizeFactor;
    double _maxBackoffInterval;
    double _currentInterval;
    NSDate * _nextExpiryDate;
    NSDate * _retryAfterDate;
}

@property (nonatomic) <MSBackoffManagerDelegate> * delegate;
@property (nonatomic) double initialInterval;
@property (nonatomic) double backoffFactor;
@property (nonatomic) double randomizeFactor;
@property (nonatomic) double maxBackoffInterval;
@property (nonatomic) double currentInterval;
@property (retain, nonatomic) NSDate * nextExpiryDate;
@property (retain, nonatomic) NSDate * retryAfterDate;

- (MSBackoffManager *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<MSBackoffManagerDelegate> *)arg0;
- (<MSBackoffManagerDelegate> *)delegate;
- (void)reset;
- (void).cxx_destruct;
- (void)_complainAboutMissingKeyInArchive:(id)arg0;
- (MSBackoffManager *)initWithInitialInterval:(double)arg0 backoffFactor:(double)arg1 randomizeFactor:(double)arg2 maxBackoffInterval:(double)arg3 retryAfterDate:(NSDate *)arg4;
- (void)setCurrentInterval:(double)arg0;
- (NSDate *)nextExpiryDate;
- (void)didReceiveRetryAfterDate:(NSDate *)arg0;
- (void)backoff;
- (NSDictionary *)copyParameters;
- (double)initialInterval;
- (void)setInitialInterval:(double)arg0;
- (double)backoffFactor;
- (void)setBackoffFactor:(double)arg0;
- (double)randomizeFactor;
- (void)setRandomizeFactor:(double)arg0;
- (double)maxBackoffInterval;
- (void)setMaxBackoffInterval:(double)arg0;
- (double)currentInterval;
- (void)setNextExpiryDate:(NSDate *)arg0;
- (NSDate *)retryAfterDate;
- (void)setRetryAfterDate:(NSDate *)arg0;

@end
