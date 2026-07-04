/* Runtime dump - CKDContainerSpecificInfoURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    char _needUserID;
    NSString * _containerIdentifier;
    CKDContainerInfo * _containerInfo;
}

@property (nonatomic) char needUserID;
@property (nonatomic) NSString * containerIdentifier;
@property (copy, nonatomic) CKDContainerInfo * containerInfo;

- (NSURL *)url;
- (void).cxx_destruct;
- (char)requiresConfiguration;
- (char)requiresDeviceID;
- (char)requiresSignature;
- (char)allowsAnonymousAccount;
- (char)allowsAuthedAccount;
- (int)serverType;
- (int)partitionType;
- (char)hasRequestBody;
- (void)requestDidParseJSONObject:(NSObject *)arg0;
- (NSDictionary *)additionalHeaderValues;
- (char)needUserID;
- (void)setContainerInfo:(CKDContainerInfo *)arg0;
- (CKDContainerInfo *)containerInfo;
- (CKDContainerSpecificInfoURLRequest *)initWithContainerIdentifier:(NSString *)arg0;
- (void)setNeedUserID:(char)arg0;
- (NSString *)containerIdentifier;
- (void)setContainerIdentifier:(NSString *)arg0;

@end
