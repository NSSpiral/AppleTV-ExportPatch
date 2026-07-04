/* Runtime dump - WebDeviceOrientationProviderMock
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider>
{
    WebDeviceOrientationProviderMockInternal * m_internal;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (WebDeviceOrientationProviderMock *)shared;

- (void)dealloc;
- (WebDeviceOrientationProviderMock *)init;
- (void)setOrientation:(CMDeviceOrientation *)arg0;
- (void)setController:(struct DeviceOrientationController *)arg0;
- (void)stopUpdating;
- (void)startUpdating;
- (int)lastOrientation;

@end
