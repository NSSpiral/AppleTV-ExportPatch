/* Runtime dump - ATVJSSSURLRequestProperties
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;

@class ATVJSContext;
@interface ATVJSSSURLRequestProperties : NSObject <ATVJSObject>
{
    SSMutableURLRequestProperties * _ssRequestProperties;
    ATVJSContext * _atvContext;
    struct OpaqueJSValue * _jsObjectRef;
}

@property (readonly, nonatomic) SSURLRequestProperties * requestProperties;
@property (retain, nonatomic) SSMutableURLRequestProperties * ssRequestProperties;
@property (retain, nonatomic) ATVJSContext * atvContext;
@property (nonatomic) struct OpaqueJSValue * jsObjectRef;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;

- (void)setAtvContext:(ATVJSContext *)arg0;
- (ATVJSContext *)atvContext;
- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (void)setSsRequestProperties:(SSMutableURLRequestProperties *)arg0;
- (SSMutableURLRequestProperties *)ssRequestProperties;
- (void)dealloc;
- (struct OpaqueJSValue *)jsObjectRef;
- (SSURLRequestProperties *)requestProperties;

@end
