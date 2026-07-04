/* Runtime dump - ATVServerInfoResponse
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVServerInfoResponse : ATVDMAPResponse
{
    unsigned short _clientMajorVersion;
    unsigned short _clientMinorVersion;
    unsigned long _serverVersion;
}

- (ATVServerInfoResponse *)initWithClientSharingVersion:(NSString *)arg0 serverSharingVer:(unsigned long)arg1;
- (NSData *)responseBody;

@end
