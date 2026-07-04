/* Runtime dump - NSPropertyMapping
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyMapping : NSObject
{
    void * _reserved;
    NSArray * _transformValidations;
    NSArray * _propertyTransforms;
    NSString * _name;
    NSExpression * _valueExpression;
    NSDictionary * _userInfo;
    struct __propertyMappingFlags _propertyMappingFlags;
}

@property (copy) NSString * name;
@property (retain) NSExpression * valueExpression;
@property (retain) NSDictionary * userInfo;

+ (void)initialize;

- (void)setValueExpression:(NSExpression *)arg0;
- (void)_setPropertyTransforms:(id)arg0;
- (void)_setTransformValidations:(id)arg0;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(char)arg0;
- (NSExpression *)valueExpression;
- (NSString *)_initWithDestinationName:(NSString *)arg0 valueExpression:(NSExpression *)arg1;
- (NSArray *)_propertyTransforms;
- (NSArray *)_transformValidations;
- (NSPropertyMapping *)initWithName:(NSString *)arg0 valueExpression:(NSExpression *)arg1;
- (void)dealloc;
- (NSPropertyMapping *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSPropertyMapping *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setUserInfo:(NSDictionary *)arg0;
- (char)isEditable;
- (NSPropertyMapping *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)userInfo;

@end
