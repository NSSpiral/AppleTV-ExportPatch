/* Runtime dump - CoreDAVParseRule
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVParseRule : NSObject
{
    int _minimumNumber;
    int _maximumNumber;
    NSString * _nameSpace;
    NSString * _elementName;
    Class _objectClass;
    SEL _setterMethod;
}

@property (readonly, nonatomic) int minimumNumber;
@property (readonly, nonatomic) int maximumNumber;
@property (readonly, nonatomic) NSString * nameSpace;
@property (readonly, nonatomic) NSString * elementName;
@property (readonly, nonatomic) Class objectClass;
@property (readonly, nonatomic) SEL setterMethod;

+ (NSNumber *)ruleWithMinimumNumber:(int)arg0 maximumNumber:(int)arg1 nameSpace:(NSString *)arg2 elementName:(NSString *)arg3 objectClass:(Class)arg4 setterMethod:(SEL)arg5;

- (void)dealloc;
- (NSString *)description;
- (NSString *)nameSpace;
- (CoreDAVParseRule *)initWithMinimumNumber:(int)arg0 maximumNumber:(int)arg1 nameSpace:(NSString *)arg2 elementName:(NSString *)arg3 objectClass:(Class)arg4 setterMethod:(SEL)arg5;
- (NSString *)elementName;
- (Class)objectClass;
- (SEL)setterMethod;
- (int)minimumNumber;
- (int)maximumNumber;

@end
