/* Runtime dump - CAMCaptureResponse
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCaptureResponse : NSObject
{
    char _completed;
    int _type;
    CAMInflightAsset * _asset;
    NSMutableDictionary * _metadata;
    NSDictionary * _additionalInformation;
    NSDictionary * _diagnostics;
    CAMCaptureRequest * _request;
    NSDictionary * __parameterStorage;
}

@property (readonly, nonatomic) int type;
@property (nonatomic) char completed;
@property (retain, nonatomic) CAMInflightAsset * asset;
@property (retain, nonatomic) NSMutableDictionary * metadata;
@property (copy, nonatomic) NSDictionary * additionalInformation;
@property (copy, nonatomic) NSDictionary * diagnostics;
@property (copy, nonatomic) CAMCaptureRequest * request;
@property (readonly, copy, nonatomic) NSDictionary * _parameterStorage;

- (void)setCompleted:(char)arg0;
- (char)isCompleted;
- (CAMCaptureResponse *)init;
- (CAMCaptureRequest *)request;
- (int)type;
- (CAMCaptureResponse *)initWithType:(int)arg0;
- (void).cxx_destruct;
- (CAMInflightAsset *)asset;
- (void)setAsset:(CAMInflightAsset *)arg0;
- (NSDictionary *)_parameterStorage;
- (NSString *)parameterForKey:(NSString *)arg0;
- (void)releaseCachedImages;
- (NSDictionary *)diagnostics;
- (NSDictionary *)additionalInformation;
- (void)setAdditionalInformation:(NSDictionary *)arg0;
- (void)setDiagnostics:(NSDictionary *)arg0;
- (void)setMetadata:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)metadata;
- (void)setRequest:(CAMCaptureRequest *)arg0;

@end
