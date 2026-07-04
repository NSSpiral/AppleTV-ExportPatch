/* Runtime dump - WebGeolocationPosition
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPosition : NSObject
{
    WebGeolocationPositionInternal * _internal;
}

- (void)dealloc;
- (WebGeolocationPosition *)initWithTimestamp:(double)arg0 latitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3;
- (WebGeolocationPosition *)initWithGeolocationPosition:(struct PassRefPtr<WebCore::GeolocationPosition>)arg0;

@end
