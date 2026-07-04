/* Runtime dump - GEOTileDBProtection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileDBProtection : NSObject
{
    int _currentState;
    int _notifyToken;
}

+ (GEOTileDBProtection *)sharedObject;

- (void)dealloc;
- (GEOTileDBProtection *)init;
- (int)state;
- (void)updateState;
- (void)_statusChanged;

@end
