/* Runtime dump - ATVJSSKProductsRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol SKProductsRequestDelegate;

@class ATVJSContext;
@interface ATVJSSKProductsRequest : NSObject <SKProductsRequestDelegate>
{
    char _isJSObjectProtected;
    SKProductsRequest * _skRequest;
    ATVJSContext * _atvContext;
    struct OpaqueJSValue * _object;
}

@property (retain, nonatomic) SKProductsRequest * skRequest;
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
- (SKProductsRequest *)skRequest;
- (void)setSkRequest:(SKProductsRequest *)arg0;
- (void)request:(SKRequest *)arg0 didFailWithError:(NSError *)arg1;
- (void)requestDidFinish:(SKRequest *)arg0;
- (void)productsRequest:(SKProductsRequest *)arg0 didReceiveResponse:(SKProductsResponse *)arg1;
- (void)dealloc;
- (struct OpaqueJSValue *)object;
- (void)setObject:(struct OpaqueJSValue *)arg0;

@end
