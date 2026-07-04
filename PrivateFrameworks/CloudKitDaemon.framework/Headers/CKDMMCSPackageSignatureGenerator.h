/* Runtime dump - CKDMMCSPackageSignatureGenerator
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSPackageSignatureGenerator : NSObject
{
    char _valid;
    void * _generator;
}

@property (nonatomic) void * generator;
@property (nonatomic) char valid;

- (void)dealloc;
- (CKDMMCSPackageSignatureGenerator *)init;
- (char)isValid;
- (NSObject *)dataByFinishingSignature;
- (void)updateWithData:(NSData *)arg0;
- (char *)_finishGenerator;
- (void)setValid:(char)arg0;
- (void)setGenerator:(void *)arg0;
- (void *)generator;

@end
