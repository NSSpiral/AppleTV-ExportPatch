/* Runtime dump - PLSmartPLService
 * Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLSmartPLService : PLService
{
    NSMutableDictionary * _smartPLHelpers;
}

@property (retain) NSMutableDictionary * smartPLHelpers;

+ (void)load;
+ (PLSmartPLService *)entryEventPointDefinitionSmartTrigger;
+ (NSArray *)entryEventPointDefinitions;

- (PLSmartPLService *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)smartPLHelpers;
- (void)logEventPointSmartPLFiredFromAuxilary:(Class)arg0 withReason:(NSString *)arg1;
- (void)setSmartPLHelpers:(NSMutableDictionary *)arg0;
- (void)initOperatorDependancies;

@end
