/* Runtime dump - NEOnDemandRuleEvaluateConnection
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule
{
    NSArray * _connectionRules;
}

@property (copy) NSArray * connectionRules;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEOnDemandRuleEvaluateConnection *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)setConnectionRules:(NSArray *)arg0;
- (NSArray *)connectionRules;
- (NEOnDemandRuleEvaluateConnection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEOnDemandRuleEvaluateConnection *)init;
- (NEOnDemandRuleEvaluateConnection *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
