/* Runtime dump - SBFDescriptionBuilder
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFDescriptionBuilder : NSObject
{
    NSObject * _object;
    NSMutableString * _description;
}

+ (NSString *)componentSeparator;
+ (NSString *)nameObjectSeparator;
+ (NSObject *)descriptionBuilderWithObject:(NSObject *)arg0;
+ (NSObject *)descriptionForObject:(NSObject *)arg0 withNamesAndObjects:(NSArray *)arg1;

- (PDBuild *)build;
- (void)dealloc;
- (SBFDescriptionBuilder *)initWithObject:(NSObject *)arg0;
- (void)tryAppendKey:(NSString *)arg0;
- (NSArray *)appendKeys:(NSArray *)arg0;
- (NSObject *)appendObject:(NSObject *)arg0 withName:(NSString *)arg1;
- (NSString *)appendKey:(NSString *)arg0;
- (NSArray *)appendNamesAndObjects:(NSArray *)arg0 args:(void *)arg1;
- (NSString *)appendName:(NSString *)arg0 object:(NSObject *)arg1;
- (NSString *)appendName:(NSString *)arg0 size:(struct CGSize)arg1;
- (NSString *)appendName:(NSString *)arg0 boolValue:(char)arg1;
- (NSString *)appendName:(NSString *)arg0 integerValue:(int)arg1;
- (NSString *)appendName:(NSString *)arg0 unsignedInteger:(unsigned int)arg1;
- (NSString *)appendName:(NSString *)arg0 intValue:(int)arg1;
- (NSString *)appendName:(NSString *)arg0 doubleValue:(double)arg1;
- (NSString *)appendName:(NSString *)arg0 cgFloatValue:(float)arg1;
- (NSString *)appendName:(NSString *)arg0 pointerValue:(void *)arg1;
- (NSString *)appendName:(NSString *)arg0 selector:(SEL)arg1;
- (NSArray *)appendNamesAndObjects:(NSArray *)arg0;

@end
