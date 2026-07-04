/* Runtime dump - CMOdometer
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometer : NSObject
{
    <CMOdometerDelegate> * _delegate;
    CMOdometerProxy * _odometerProxy;
}

@property (nonatomic) <CMOdometerDelegate> * delegate;
@property (readonly, nonatomic) CMOdometerProxy * odometerProxy;

+ (char)isOdometerAvailableForActivity:(int)arg0;

- (CMOdometerProxy *)odometerProxy;
- (void)startOdometerUpdatesForActivity:(int)arg0 withHandler:(id /* block */)arg1;
- (void)stopOdometerUpdates;
- (void)dealloc;
- (void)setDelegate:(<CMOdometerDelegate> *)arg0;
- (CMOdometer *)init;
- (<CMOdometerDelegate> *)delegate;

@end
