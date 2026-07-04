/* Runtime dump - SFCompanionAdvertiser
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionAdvertiser : NSObject
{
    char _supportsStreams;
    <SFCompanionAdvertiserDelegate> * _delegate;
    NSString * _serviceType;
}

@property <SFCompanionAdvertiserDelegate> * delegate;
@property char supportsStreams;
@property (readonly, copy) NSString * serviceType;
@property (readonly) NSData * serviceEndpointData;

- (SFCompanionAdvertiser *)initWithServiceType:(NSString *)arg0;
- (void)setSupportsStreams:(char)arg0;
- (NSData *)serviceEndpointData;
- (void)getContinuationStreamsWithEndpointData:(NSData *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)setDelegate:(<SFCompanionAdvertiserDelegate> *)arg0;
- (<SFCompanionAdvertiserDelegate> *)delegate;
- (void)stop;
- (void)start;
- (NSString *)serviceType;
- (char)supportsStreams;

@end
