/* Runtime dump - SSVMediaContentTasteUpdateRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding>
{
    char _shouldInvalidateLocalCache;
    NSArray * _contentTasteItemUpdates;
}

@property (copy, nonatomic) NSArray * contentTasteItemUpdates;
@property (nonatomic) char shouldInvalidateLocalCache;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVMediaContentTasteUpdateRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (void)startWithResponseBlock:(id /* block */)arg0;
- (void)setContentTasteItemUpdates:(NSArray *)arg0;
- (NSArray *)contentTasteItemUpdates;
- (char)shouldInvalidateLocalCache;
- (void)setShouldInvalidateLocalCache:(char)arg0;

@end
