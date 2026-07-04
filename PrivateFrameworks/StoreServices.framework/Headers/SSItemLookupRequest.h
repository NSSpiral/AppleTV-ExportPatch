/* Runtime dump - SSItemLookupRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemLookupRequest : SSRequest <SSXPCCoding>
{
    NSMutableDictionary * _parameters;
}

@property (nonatomic) <SSItemLookupRequestDelegate> * delegate;
@property (readonly, copy) NSDictionary * parameters;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (void)setValue:(NSObject *)arg0 forParameter:(/* block */ id)arg1;
- (NSDictionary *)copyXPCEncoding;
- (SSItemLookupRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSItemLookupRequest *)init;
- (char)start;
- (NSDictionary *)parameters;
- (id)_convertedValueForValue:(id)arg0;
- (id)_errorForStatusCode:(int)arg0;
- (NSURLResponse *)_copyItemsFromResponse:(NSURLResponse *)arg0 expirationDate:(NSDate *)arg1;
- (void)startWithItemLookupBlock:(id /* block */)arg0;
- (id)valueForParameter:(id)arg0;
- (NSDictionary *)copyQueryStringParameters;

@end
