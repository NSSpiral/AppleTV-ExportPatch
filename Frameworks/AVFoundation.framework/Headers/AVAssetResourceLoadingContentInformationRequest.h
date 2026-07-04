/* Runtime dump - AVAssetResourceLoadingContentInformationRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingContentInformationRequest : NSObject
{
    AVAssetResourceLoadingContentInformationRequestInternal * _contentInformationRequest;
}

@property (copy, nonatomic) NSString * contentType;
@property (nonatomic) long long contentLength;
@property (nonatomic) char byteRangeAccessSupported;
@property (copy, nonatomic) NSDate * renewalDate;

- (NSDate *)renewalDate;
- (AVAssetResourceLoadingContentInformationRequest *)initWithLoadingRequest:(char)arg0;
- (char)isByteRangeAccessSupported;
- (char)isDiskCachingPermitted;
- (void)setRenewalDate:(NSDate *)arg0;
- (void)setDiskCachingPermitted:(char)arg0;
- (NSArray *)propertyList;
- (void)dealloc;
- (AVAssetResourceLoadingContentInformationRequest *)init;
- (NSString *)description;
- (long long)contentLength;
- (void)finalize;
- (void)setContentType:(NSString *)arg0;
- (void)setContentLength:(long long)arg0;
- (void)setByteRangeAccessSupported:(char)arg0;
- (NSString *)contentType;

@end
