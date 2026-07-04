/* Runtime dump - WebDeviceOrientation
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientation : NSObject
{
    WebDeviceOrientationInternal * m_internal;
}

- (void)dealloc;
- (WebDeviceOrientation *)initWithCoreDeviceOrientation:(struct PassRefPtr<WebCore::DeviceOrientationData>)arg0;
- (WebDeviceOrientation *)initWithCanProvideAlpha:(BOOL)arg0 alpha:(double)arg1 canProvideBeta:(BOOL)arg2 beta:(double)arg3 canProvideGamma:(BOOL)arg4 gamma:(double)arg5;

@end
