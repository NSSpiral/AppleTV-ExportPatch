/* Runtime dump - WebGeolocation
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocation : NSObject
{
    WebGeolocationPrivate * _private;
}

- (void)dealloc;
- (WebGeolocation *)_initWithWebCoreGeolocation:(struct Geolocation *)arg0;
- (void)setIsAllowed:(char)arg0;

@end
