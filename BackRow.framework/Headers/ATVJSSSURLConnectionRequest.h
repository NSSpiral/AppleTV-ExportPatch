/* Runtime dump - ATVJSSSURLConnectionRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext;
@interface ATVJSSSURLConnectionRequest : NSObject
{
    char _isJSObjectProtected;
    SSURLConnectionRequest * _ssConnectionRequest;
    ATVJSContext * _atvContext;
    struct OpaqueJSValue * _jsObject;
}

@property (retain, nonatomic) SSURLConnectionRequest * ssConnectionRequest;
@property (retain, nonatomic) ATVJSContext * atvContext;
@property (nonatomic) struct OpaqueJSValue * jsObject;
@property (nonatomic) char isJSObjectProtected;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;

- (void)setSsConnectionRequest:(SSURLConnectionRequest *)arg0;
- (void)setAtvContext:(ATVJSContext *)arg0;
- (SSURLConnectionRequest *)ssConnectionRequest;
- (struct OpaqueJSValue *)jsObject;
- (ATVJSContext *)atvContext;
- (char)isJSObjectProtected;
- (void)setIsJSObjectProtected:(char)arg0;
- (void)setJsObject:(struct OpaqueJSValue *)arg0;
- (void)dealloc;
- (void)start;

@end
