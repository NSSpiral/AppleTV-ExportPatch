/* Runtime dump - ATVJSMediaToken
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVJSMediaToken : NSObject
{
    struct OpaqueJSValue * _jsObjectRef;
    ATVStoreMediaToken * _mediaToken;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain, nonatomic) ATVStoreMediaToken * mediaToken;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;

- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (void)_finalize;
- (ATVJSMediaToken *)initWithMediaToken:(ATVStoreMediaToken *)arg0 context:(struct OpaqueJSContext *)arg1;
- (ATVStoreMediaToken *)mediaToken;
- (void)setMediaToken:(ATVStoreMediaToken *)arg0;
- (void)dealloc;
- (struct OpaqueJSValue *)jsObjectRef;

@end
