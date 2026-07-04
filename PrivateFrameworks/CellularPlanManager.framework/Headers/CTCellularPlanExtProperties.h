/* Runtime dump - CTCellularPlanExtProperties
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanExtProperties : NSObject <NSCopying, NSSecureCoding>
{
    char _selected;
    int _status;
}

@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) char selected;

+ (char)supportsSecureCoding;
+ (NSString *)statusAsString:(int)arg0;

- (CTCellularPlanExtProperties *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CTCellularPlanExtProperties *)copyWithZone:(struct _NSZone *)arg0;
- (char)selected;
- (int)status;
- (CTCellularPlanExtProperties *)initWithStatus:(int)arg0 selected:(char)arg1;

@end
