/* Runtime dump - ATVJSMediaTokenService
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVJSMediaTokenService : NSObject
{
    struct OpaqueJSValue * _jsObjectRef;
    ATVStoreMediaTokenService * _mediaTokenService;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain, nonatomic) ATVStoreMediaTokenService * mediaTokenService;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;

- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (ATVJSMediaTokenService *)initWithMediaTokenService:(ATVStoreMediaTokenService *)arg0 context:(struct OpaqueJSContext *)arg1;
- (void)_finalize;
- (ATVStoreMediaTokenService *)mediaTokenService;
- (void)setMediaTokenService:(ATVStoreMediaTokenService *)arg0;
- (void)dealloc;
- (struct OpaqueJSValue *)jsObjectRef;

@end
