/* Runtime dump - WebDeviceOrientationProviderMockInternal
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientationProviderMockInternal : NSObject
{
    struct OwnPtr<WebCore::DeviceOrientationClientMock> m_core;
}

- (WebDeviceOrientationProviderMockInternal *)init;
- (void)setOrientation:(CMDeviceOrientation *)arg0;
- (void).cxx_construct;
- (void)setController:(struct DeviceOrientationController *)arg0;
- (void).cxx_destruct;
- (void)stopUpdating;
- (void)startUpdating;
- (int)lastOrientation;

@end
