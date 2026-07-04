/* Runtime dump - SSRentalCheckoutRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding>
{
    NSNumber * _accountIdentifier;
    long long _downloadIdentifier;
    NSNumber * _rentalKeyIdentifier;
    NSArray * _sinfs;
    char _shouldValidateRentalInfo;
}

@property (readonly) NSArray * sinfs;
@property (readonly) NSNumber * accountIdentifier;
@property (readonly) NSNumber * rentalKeyIdentifier;
@property (readonly) long long downloadIdentifier;
@property (nonatomic) char shouldValidateRentalInfo;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithConnectionResponseBlock:(id /* block */)arg0;
- (NSArray *)sinfs;
- (SSRentalCheckoutRequest *)initWithAccountIdentifier:(NSNumber *)arg0 rentalKeyIdentifier:(NSNumber *)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSRentalCheckoutRequest *)initWithXPCEncoding:(NSString *)arg0;
- (long long)downloadIdentifier;
- (void)dealloc;
- (SSRentalCheckoutRequest *)init;
- (SSRentalCheckoutRequest *)initWithSinfs:(NSArray *)arg0;
- (void)setShouldValidateRentalInfo:(char)arg0;
- (NSNumber *)accountIdentifier;
- (SSRentalCheckoutRequest *)initWithDownloadIdentifier:(long long)arg0;
- (NSNumber *)rentalKeyIdentifier;
- (char)shouldValidateRentalInfo;

@end
