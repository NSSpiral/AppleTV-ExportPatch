/* Runtime dump - HSFairPlayInfo
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSFairPlayInfo : NSObject
{
    NSObject<OS_dispatch_queue> * _sapQueue;
    void * _hwInfo;
    void * _session;
}

@property (readonly, nonatomic) NSString * deviceGUID;

- (NSString *)deviceGUID;
- (NSURL *)securityInfoForURL:(NSURL *)arg0;
- (void)dealloc;
- (HSFairPlayInfo *)init;
- (void).cxx_destruct;
- (char)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg0;
- (void)endSecuritySession;
- (NSData *)_hexStringForData:(NSData *)arg0;
- (NSString *)beginNegotiationWithSAPVersion:(unsigned int)arg0;
- (NSString *)continueNegotationWithSAPVersion:(unsigned int)arg0 data:(NSData *)arg1 isComplete:(char *)arg2;

@end
