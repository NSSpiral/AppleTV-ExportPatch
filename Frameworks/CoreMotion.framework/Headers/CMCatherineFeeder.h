/* Runtime dump - CMCatherineFeeder
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMCatherineFeeder : NSObject
{
    CMCatherineFeederInternal * _internal;
}

@property (readonly, nonatomic) CMCatherineFeederInternal * internal;

- (CMCatherineFeederInternal *)internal;
- (void)feedCatherine:(double)arg0 confidence:(double)arg1;
- (void)dealloc;
- (CMCatherineFeeder *)init;

@end
