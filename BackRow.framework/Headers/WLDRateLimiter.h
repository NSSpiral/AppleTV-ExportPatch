/* Runtime dump - WLDRateLimiter
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLDRateLimiter : NSObject
{
    unsigned int _rate;
    unsigned int _burst;
    unsigned int _tokens;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _accessQueue;
}

@property unsigned int rate;
@property unsigned int burst;

- (void)_addToken;
- (char)_claimToken;
- (WLDRateLimiter *)initWithRate:(unsigned int)arg0 burst:(unsigned int)arg1;
- (char)doOperation;
- (void)setBurst:(unsigned int)arg0;
- (unsigned int)burst;
- (WLDRateLimiter *)init;
- (void).cxx_destruct;
- (unsigned int)rate;
- (void)setRate:(unsigned int)arg0;

@end
