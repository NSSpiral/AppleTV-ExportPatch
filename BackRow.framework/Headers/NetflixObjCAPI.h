/* Runtime dump - NetflixObjCAPI
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/IOSBridgeAPI.h>
@interface NetflixObjCAPI : IOSBridgeAPI
{
    struct IOSObjCEventConnection * objCEventConnection_;
}

@property struct IOSObjCEventConnection * objCEventConnection;

+ (NetflixObjCAPI *)sharedInstance;

- (id)objectsync;
- (void)writeResponse:(NSURLResponse *)arg0;
- (struct IOSObjCEventConnection *)objCEventConnection;
- (void)setObjCEventConnection:(struct IOSObjCEventConnection *)arg0;
- (void)dealloc;
- (void)cleanup;

@end
