/* Runtime dump - ATVSecureKeyLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSecureKeyLoader : NSObject
{
    <ATVSecureKeyLoaderDelegate> * _delegate;
    NSNumber * _maximumActiveDeviceCount;
}

@property (weak, nonatomic) <ATVSecureKeyLoaderDelegate> * delegate;
@property (copy, nonatomic) NSNumber * maximumActiveDeviceCount;

- (void)setDelegate:(<ATVSecureKeyLoaderDelegate> *)arg0;
- (<ATVSecureKeyLoaderDelegate> *)delegate;
- (void).cxx_destruct;
- (void)startLoadingCertificateDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingContentIdentifierDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingKeyResponseDataForRequest:(NSURLRequest *)arg0;
- (void)sendStopRequest;
- (NSNumber *)maximumActiveDeviceCount;
- (void)setMaximumActiveDeviceCount:(NSNumber *)arg0;

@end
