/* Runtime dump - GKNATObserver
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKNATObserver : NSObject

@property <GKNATObserverDelegate> * delegate;

+ (GKNATObserver *)allocWithZone:(struct _NSZone *)arg0;

- (void)setDelegate:(<GKNATObserverDelegate> *)arg0;
- (<GKNATObserverDelegate> *)delegate;
- (GKNATObserver *)initWithOptions:(NSDictionary *)arg0;
- (int)currentNATType;
- (void)shouldTryNATCheck;

@end
