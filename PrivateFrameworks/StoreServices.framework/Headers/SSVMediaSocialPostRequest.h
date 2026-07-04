/* Runtime dump - SSVMediaSocialPostRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding>
{
    SSVMediaSocialPostDescription * _postDescription;
}

@property (readonly, nonatomic) SSVMediaSocialPostDescription * postDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVMediaSocialPostRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (SSVMediaSocialPostRequest *)initWithPostDescription:(SSVMediaSocialPostDescription *)arg0;
- (SSVMediaSocialPostDescription *)postDescription;

@end
