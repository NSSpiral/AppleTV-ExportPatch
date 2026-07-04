/* Runtime dump - CKSignatureGenerator
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSignatureGenerator : NSObject
{
    char _valid;
    void * _generator;
}

@property (nonatomic) void * generator;
@property (nonatomic) char valid;

+ (NSObject *)signatureWithFileDescriptor:(int)arg0 error:(id *)arg1;
+ (char)isValidSignature:(NSObject *)arg0;

- (char *)_newSignatureByFinishingGenerator;
- (void)updateWithBytes:(void *)arg0 length:(void)arg1;
- (void)dealloc;
- (CKSignatureGenerator *)init;
- (char)isValid;
- (NSObject *)dataByFinishingSignature;
- (void)updateWithData:(NSData *)arg0;
- (void)setValid:(char)arg0;
- (void)setGenerator:(void *)arg0;
- (void *)generator;

@end
