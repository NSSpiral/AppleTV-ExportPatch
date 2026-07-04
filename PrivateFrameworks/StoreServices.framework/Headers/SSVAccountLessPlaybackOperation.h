/* Runtime dump - SSVAccountLessPlaybackOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation
{
    NSString * _itemIdentifier;
    id _responseBlock;
}

@property (copy) NSString * itemIdentifier;
@property (copy) id responseBlock;

- (void)setItemIdentifier:(NSString *)arg0;
- (void)setResponseBlock:(id /* block */)arg0;
- (id /* block */)responseBlock;
- (void)main;
- (void).cxx_destruct;
- (NSString *)itemIdentifier;
- (NSData *)_requestBodyData;

@end
