/* Runtime dump - AAUIPhotoResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIPhotoResponse : AAResponse
{
    NSData * _photoData;
    NSValue * _cropRect;
    NSString * _serverCacheTag;
}

@property (readonly, nonatomic) NSData * photoData;
@property (readonly, nonatomic) NSValue * cropRect;
@property (readonly, nonatomic) NSString * serverCacheTag;

- (void).cxx_destruct;
- (AAUIPhotoResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSString *)serverCacheTag;
- (NSData *)photoData;
- (NSValue *)cropRect;

@end
