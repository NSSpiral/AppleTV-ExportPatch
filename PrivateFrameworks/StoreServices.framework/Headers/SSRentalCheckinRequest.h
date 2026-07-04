/* Runtime dump - SSRentalCheckinRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRentalCheckinRequest : SSRequest
{
    NSNumber * _accountIdentifier;
    NSNumber * _rentalKeyIdentifier;
    NSArray * _sinfs;
}

@property (readonly) NSArray * sinfs;
@property (readonly) NSNumber * accountIdentifier;
@property (readonly) NSNumber * rentalKeyIdentifier;

- (void)startWithConnectionResponseBlock:(id /* block */)arg0;
- (NSArray *)sinfs;
- (SSRentalCheckinRequest *)initWithAccountIdentifier:(NSNumber *)arg0 rentalKeyIdentifier:(NSNumber *)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSRentalCheckinRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSRentalCheckinRequest *)init;
- (SSRentalCheckinRequest *)initWithSinfs:(NSArray *)arg0;
- (NSNumber *)accountIdentifier;
- (NSNumber *)rentalKeyIdentifier;

@end
