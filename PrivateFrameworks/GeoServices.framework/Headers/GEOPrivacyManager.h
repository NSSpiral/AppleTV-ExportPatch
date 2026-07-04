/* Runtime dump - GEOPrivacyManager
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPrivacyManager : NSObject

- (void)dealloc;
- (GEOPrivacyManager *)init;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_fireRecentsClearedNotification;

@end
