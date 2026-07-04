/* Runtime dump - VSCacheUpdateRequest
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSCacheUpdateRequest : NSObject
{
    NSString * _modelID;
    NSString * _classID;
}

- (void)dealloc;
- (NSString *)description;
- (NSString *)modelIdentifier;
- (VSCacheUpdateRequest *)initWithModelIdentifier:(NSString *)arg0 classIdentifier:(NSString *)arg1;
- (NSURLRequest *)coalescedRequest:(NSURLRequest *)arg0;
- (NSString *)classIdentifier;

@end
