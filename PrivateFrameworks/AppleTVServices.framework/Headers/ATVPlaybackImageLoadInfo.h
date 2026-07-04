/* Runtime dump - ATVPlaybackImageLoadInfo
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPlaybackImageLoadInfo : NSObject
{
    NSString * _identifier;
    NSDate * _requestedDate;
    id _timeBasedHandler;
    id _dateBasedHandler;
    double _requestedTime;
    struct CGSize _maxSize;
    struct ? _requestedCMTime;
}

@property (copy, nonatomic) NSString * identifier;
@property (nonatomic) double requestedTime;
@property (retain, nonatomic) NSDate * requestedDate;
@property (nonatomic) struct ? requestedCMTime;
@property (nonatomic) struct CGSize maxSize;
@property (copy, nonatomic) id timeBasedHandler;
@property (copy, nonatomic) id dateBasedHandler;

- (NSString *)description;
- (NSString *)identifier;
- (struct CGSize)maxSize;
- (void)setIdentifier:(NSString *)arg0;
- (void)setMaxSize:(struct CGSize)arg0;
- (void).cxx_destruct;
- (double)requestedTime;
- (id /* block */)dateBasedHandler;
- (NSDate *)requestedDate;
- (id /* block */)timeBasedHandler;
- (void)callCompletionHandlerWithImage:(UIImage *)arg0 actualCMTime:(struct ?)arg1 actualDate:(NSDate *)arg2;
- (void)setRequestedTime:(double)arg0;
- (void)setRequestedDate:(NSDate *)arg0;
- (struct ?)requestedCMTime;
- (void)setRequestedCMTime:(struct ?)arg0;
- (void)setTimeBasedHandler:(id /* block */)arg0;
- (void)setDateBasedHandler:(id /* block */)arg0;

@end
