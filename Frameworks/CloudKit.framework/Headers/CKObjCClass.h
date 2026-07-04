/* Runtime dump - CKObjCClass
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKObjCClass : NSObject
{
    Class _handle;
    NSString * _name;
    NSDictionary * _propertiesByName;
    NSArray * _sortedProperties;
}

@property (readonly, nonatomic) Class handle;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSDictionary * propertiesByName;
@property (readonly, nonatomic) NSArray * sortedProperties;

+ (CKObjCClass *)classForHandle:(Class)arg0;
+ (NSObject *)classForObject:(NSObject *)arg0;

- (CKObjCClass *)initWithHandle:(Class)arg0;
- (NSArray *)sortedProperties;
- (NSString *)name;
- (void).cxx_destruct;
- (Class)handle;
- (NSArray *)allProperties;
- (NSString *)propertyForName:(NSString *)arg0;
- (NSDictionary *)propertiesByName;

@end
