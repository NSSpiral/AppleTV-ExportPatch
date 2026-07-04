/* Runtime dump - WebGeolocationPositionInternal
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPositionInternal : NSObject
{
    struct RefPtr<WebCore::GeolocationPosition> _position;
}

- (void).cxx_construct;
- (void).cxx_destruct;
- (WebGeolocationPositionInternal *)initWithCoreGeolocationPosition:(struct PassRefPtr<WebCore::GeolocationPosition>)arg0;

@end
