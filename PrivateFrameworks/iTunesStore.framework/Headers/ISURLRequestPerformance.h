/* Runtime dump - ISURLRequestPerformance
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLRequestPerformance : NSObject
{
    double _finishTime;
    double _receivedResponseTime;
    double _renderBeginTime;
    double _renderEndTime;
    double _startTime;
    NSURLResponse * _urlResponse;
}

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSURLResponse * URLResponse;
@property (readonly, nonatomic) double finishInterval;
@property (readonly, nonatomic) double receivedResponseInterval;
@property (readonly, nonatomic) double renderBeginInterval;
@property (readonly, nonatomic) double renderEndInterval;

- (NSURLResponse *)URLResponse;
- (void)dealloc;
- (void)setStartTime:(double)arg0;
- (double)startTime;
- (double)receivedResponseInterval;
- (double)finishInterval;
- (void)setURLResponse:(NSURLResponse *)arg0;
- (void)setFinishTime:(double)arg0;
- (void)setReceivedResponseTime:(double)arg0;
- (double)renderBeginInterval;
- (double)renderEndInterval;
- (void)setRenderBeginTime:(double)arg0;
- (void)setRenderFinishTime:(double)arg0;

@end
