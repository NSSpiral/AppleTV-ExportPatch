/* Runtime dump - NetflixNrdObjectCallback
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NetflixNrdObjectCallback : NSObject
{
    id target_;
    SEL selector_;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;

- (void)performWithObject:(NSObject *)arg0;
- (void)performWithObject:(NSObject *)arg0 afterDelay:(double)arg1;
- (void)dealloc;
- (void)setTarget:(NSObject *)arg0;
- (void)setSelector:(SEL)arg0;
- (NSObject *)target;
- (SEL)selector;
- (void)perform;
- (void).cxx_destruct;
- (NetflixNrdObjectCallback *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1;

@end
