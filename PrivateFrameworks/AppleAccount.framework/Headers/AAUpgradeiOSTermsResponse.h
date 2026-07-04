/* Runtime dump - AAUpgradeiOSTermsResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAUpgradeiOSTermsResponse : AAResponse
{
    NSData * _xmlUIData;
}

@property (readonly, nonatomic) NSData * xmlUIData;

- (void).cxx_destruct;
- (NSData *)xmlUIData;
- (AAUpgradeiOSTermsResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSData *)responseXMLData;
- (char)bodyIsPlist;

@end
