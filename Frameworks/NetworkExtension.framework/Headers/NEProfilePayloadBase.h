/* Runtime dump - NEProfilePayloadBase
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate>
{
    NSDictionary * _payloadAtom;
    NSMutableDictionary * _pendingCertificates;
}

@property (retain, nonatomic) NSDictionary * payloadAtom;
@property (copy, nonatomic) NSMutableDictionary * pendingCertificates;

- (NSDictionary *)payloadAtom;
- (void)setPayloadAtom:(NSDictionary *)arg0;
- (NSMutableDictionary *)pendingCertificates;
- (void)setPendingCertificates:(NSMutableDictionary *)arg0;
- (id)getPreprocessedPayloadContents;
- (char)setPostprocessedPayloadContents:(id)arg0;
- (char)addCertificatePending:(id)arg0 certificateTag:(NSString *)arg1;
- (NEProfilePayloadBase *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NEProfilePayloadBase *)initWithPayload:(NSDictionary *)arg0;
- (NSData *)validatePayload;

@end
