/* Runtime dump - BRAirportNetwork
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRAirportNetwork : NSObject
{
    struct __WiFiNetwork * _wiFiNetworkRef;
    char _isDirected;
}

+ (char)asyncNetworkWithName:(NSString *)arg0 error:(id *)arg1;
+ (BRAirportNetwork *)networkWithWiFiNetwork:(struct __WiFiNetwork *)arg0;

- (char)asyncAssociateUsingPassword:(NSString *)arg0 error:(id *)arg1;
- (struct __WiFiNetwork *)wiFiNetworkRef;
- (char)isDirected;
- (void)setDirected:(char)arg0;
- (void)dealloc;
- (BRAirportNetwork *)init;
- (NSString *)name;
- (int)securityType;

@end
