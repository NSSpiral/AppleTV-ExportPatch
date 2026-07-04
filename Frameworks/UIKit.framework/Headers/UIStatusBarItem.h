/* Runtime dump - UIStatusBarItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarItem : NSObject
{
    int _idiom;
    int _type;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) Class viewClass;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) int leftOrder;
@property (readonly, nonatomic) int rightOrder;
@property (readonly, nonatomic) NSString * indicatorName;

+ (NSObject *)itemWithType:(int)arg0 idiom:(int)arg1;
+ (char)typeIsValid:(int)arg0;
+ (char)itemType:(int)arg0 idiom:(int)arg1 canBeEnabledForData:(NSData *)arg2 style:(NSObject *)arg3;
+ (char)itemType:(int)arg0 idiom:(int)arg1 appearsInRegion:(int)arg2;
+ (char)isItemWithTypeExclusive:(int)arg0;

- (NSString *)description;
- (int)type;
- (UIStatusBarItem *)initWithType:(int)arg0;
- (char)appearsOnLeft;
- (char)appearsOnRight;
- (char)appearsInRegion:(int)arg0;
- (int)comparePriority:(id)arg0;
- (int)priority;
- (NSString *)indicatorName;
- (int)leftOrder;
- (int)rightOrder;
- (int)centerOrder;
- (Class)viewClass;
- (int)compareLeftOrder:(id)arg0;
- (int)compareRightOrder:(id)arg0;
- (int)compareCenterOrder:(id)arg0;

@end
