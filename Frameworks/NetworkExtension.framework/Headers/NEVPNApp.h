/* Runtime dump - NEVPNApp
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNApp : NEVPN
{
    NSArray * _appRules;
}

@property (copy) NSArray * appRules;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEVPNApp *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (NSArray *)appRules;
- (void)setAppRules:(NSArray *)arg0;
- (NSObject *)copyAppRuleByID:(NSObject *)arg0;
- (NSString *)copyAppRuleBySigningIdentifier:(NSString *)arg0;
- (char)removeAppRuleByID:(NSObject *)arg0;
- (id)copyAppRuleIDs;
- (NEVPNApp *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNApp *)init;
- (NEVPNApp *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
