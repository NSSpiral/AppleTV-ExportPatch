/* Runtime dump - SSVFairPlaySAPContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySAPContext : NSObject
{
    char _complete;
    struct FPSAPContextOpaque_ * _context;
    struct FairPlayHWInfo_ _hardwareInfo;
    int _version;
}

@property (readonly, nonatomic) char complete;

- (void)dealloc;
- (char)isComplete;
- (void)_teardownSession;
- (SSVFairPlaySAPContext *)initWithSAPVersion:(int)arg0;
- (NSData *)exchangeData:(NSData *)arg0 error:(id *)arg1;
- (NSData *)primingSignatureForData:(NSData *)arg0 error:(id *)arg1;
- (NSData *)signData:(NSData *)arg0 error:(id *)arg1;
- (char)verifyPrimeSignature:(NSObject *)arg0 error:(id *)arg1;
- (char)verifySignature:(NSObject *)arg0 forData:(NSData *)arg1 error:(id *)arg2;

@end
