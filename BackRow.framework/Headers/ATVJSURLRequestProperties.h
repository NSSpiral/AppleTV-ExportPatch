/* Runtime dump - ATVJSURLRequestProperties
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVJSURLRequestProperties : NSObject
{
    struct OpaqueJSValue * _jsObjectRef;
    SSMutableURLRequestProperties * _requestProperties;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain, nonatomic) SSMutableURLRequestProperties * requestProperties;

- (ATVJSURLRequestProperties *)initWithContext:(struct OpaqueJSContext *)arg0 requestProperties:(SSMutableURLRequestProperties *)arg1;
- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (void)dealloc;
- (struct OpaqueJSValue *)jsObjectRef;
- (SSMutableURLRequestProperties *)requestProperties;
- (void)setRequestProperties:(SSMutableURLRequestProperties *)arg0;

@end
