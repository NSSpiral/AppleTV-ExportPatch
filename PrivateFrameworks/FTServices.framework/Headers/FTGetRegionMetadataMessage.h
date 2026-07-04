/* Runtime dump - FTGetRegionMetadataMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>
{
    NSString * _language;
    NSDictionary * _responseRegionInformation;
}

@property (copy) NSString * language;
@property (copy) NSDictionary * responseRegionInformation;

- (int)command;
- (void)dealloc;
- (FTGetRegionMetadataMessage *)init;
- (FTGetRegionMetadataMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (NSDictionary *)responseRegionInformation;
- (void)setResponseRegionInformation:(NSDictionary *)arg0;
- (char)wantsHTTPHeaders;
- (char)wantsBinaryPush;
- (char)wantsCompressedBody;
- (char)wantsHTTPGet;
- (char)wantsBagKey;
- (int)responseCommand;
- (NSString *)bagKey;
- (void)handleResponseDictionary:(NSDictionary *)arg0;
- (MFMessageBody *)messageBody;
- (NSArray *)requiredKeys;

@end
