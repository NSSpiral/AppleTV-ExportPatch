/* Runtime dump - CTCellularPlanResponseCodeParser
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanResponseCodeParser : NSObject <CTCellularPlanValidating>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)validate:(NSDate *)arg0 parseTo:(int *)arg1 responseText:(id *)arg2 error:(id *)arg3;
+ (char)validate:(NSDate *)arg0;

@end
