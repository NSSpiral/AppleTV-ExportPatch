/* Runtime dump - PLCoreService
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLCoreService : PLCoreOperator
{
    NSMutableDictionary * _services;
}

@property (retain) NSMutableDictionary * services;

- (PLCoreService *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)services;
- (void)setServices:(NSMutableDictionary *)arg0;
- (void)startServices;
- (void)stopServices;

@end
