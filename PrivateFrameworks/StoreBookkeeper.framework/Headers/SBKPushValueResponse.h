/* Runtime dump - SBKPushValueResponse
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPushValueResponse : SBKResponse
{
    NSString * _domainVersion;
    NSData * _conflictItemValuePayload;
    NSString * _conflictItemKey;
    NSString * _conflictItemVersionAnchor;
}

@property (readonly) NSString * domainVersion;
@property (readonly) NSData * conflictItemValuePayload;
@property (readonly) NSString * conflictItemKey;
@property (readonly) NSString * conflictItemVersionAnchor;

+ (NSURLResponse *)responseWithResponse:(NSURLResponse *)arg0 transaction:(SBKTransaction *)arg1;

- (void).cxx_destruct;
- (NSString *)domainVersion;
- (NSData *)conflictItemValuePayload;
- (NSString *)conflictItemKey;
- (NSString *)conflictItemVersionAnchor;
- (void)deserializeResponseBodyWithTransaction:(NSObject *)arg0;

@end
