/* Runtime dump - WebDeviceOrientationInternal
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientationInternal : NSObject
{
    struct RefPtr<WebCore::DeviceOrientationData> m_orientation;
}

- (void).cxx_construct;
- (void).cxx_destruct;
- (WebDeviceOrientationInternal *)initWithCoreDeviceOrientation:(struct PassRefPtr<WebCore::DeviceOrientationData>)arg0;

@end
