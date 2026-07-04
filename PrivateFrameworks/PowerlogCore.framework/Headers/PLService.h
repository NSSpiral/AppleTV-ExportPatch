/* Runtime dump - PLService
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLService : PLOperator

+ (void)load;
+ (void)startServices;
+ (void)stopServices;
+ (PLService *)initServices;

@end
