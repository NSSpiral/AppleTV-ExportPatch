/* Runtime dump - ATVJSiCloudAuthContext
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext;
@interface ATVJSiCloudAuthContext : NSObject
{
    ATVJSContext * _context;
    struct OpaqueJSValue * _callback;
}

@property (readonly, retain, nonatomic) ATVJSContext * context;
@property (readonly, nonatomic) struct OpaqueJSValue * callback;

- (void)iCloudAuthChanged:(NSNotification *)arg0;
- (ATVJSiCloudAuthContext *)initWithContext:(struct OpaqueJSContext *)arg0 callback:(struct OpaqueJSValue *)arg1;
- (void)retrieveiCloudAuthToken;
- (void)dealloc;
- (ATVJSContext *)context;
- (struct OpaqueJSValue *)callback;

@end
