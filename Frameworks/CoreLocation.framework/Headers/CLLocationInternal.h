/* Runtime dump - CLLocationInternal
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationInternal : NSObject
{
    struct ? fLocation;
    CLLocationMatchInfo * fMatchInfo;
}

- (CLLocationInternal *)initWithClientLocation:(struct ?)arg0;
- (CLLocationInternal *)initWithClientLocation:(struct ?)arg0 matchInfo:(double)arg1;
- (void)dealloc;
- (CLLocationInternal *)copyWithZone:(struct _NSZone *)arg0;

@end
