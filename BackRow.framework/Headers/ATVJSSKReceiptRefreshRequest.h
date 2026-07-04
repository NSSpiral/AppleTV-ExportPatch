/* Runtime dump - ATVJSSKReceiptRefreshRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol SKRequestDelegate;

@class ATVJSContext;
@interface ATVJSSKReceiptRefreshRequest : NSObject <SKRequestDelegate>
{
    char _isJSObjectProtected;
    SKReceiptRefreshRequest * _skRequest;
    ATVJSContext * _atvContext;
    struct OpaqueJSValue * _object;
}

@property (retain, nonatomic) SKReceiptRefreshRequest * skRequest;
@property (retain, nonatomic) ATVJSContext * atvContext;
@property (nonatomic) struct OpaqueJSValue * object;
@property (nonatomic) char isJSObjectProtected;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;

- (void)setAtvContext:(ATVJSContext *)arg0;
- (ATVJSContext *)atvContext;
- (char)isJSObjectProtected;
- (void)setIsJSObjectProtected:(char)arg0;
- (SKReceiptRefreshRequest *)skRequest;
- (void)setSkRequest:(SKReceiptRefreshRequest *)arg0;
- (void)request:(SKRequest *)arg0 didFailWithError:(NSError *)arg1;
- (void)requestDidFinish:(SKRequest *)arg0;
- (void)dealloc;
- (struct OpaqueJSValue *)object;
- (void)setObject:(struct OpaqueJSValue *)arg0;

@end
