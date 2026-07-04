/* Runtime dump - NSPropertyTransform
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyTransform : NSObject
{
    NSExpression * _valueExpression;
    NSString * _propertyName;
    NSPropertyTransform * _prerequisiteTransform;
    char _replaceMissingValueOnly;
}

@property (retain, nonatomic) NSString * propertyName;
@property (retain, nonatomic) NSExpression * valueExpression;
@property (retain, nonatomic) NSPropertyTransform * prerequisiteTransform;
@property char replaceMissingValueOnly;

- (NSPropertyTransform *)initWithPropertyName:(NSString *)arg0 valueExpression:(NSExpression *)arg1;
- (void)setPrerequisiteTransform:(NSPropertyTransform *)arg0;
- (void)setReplaceMissingValueOnly:(char)arg0;
- (void)setValueExpression:(NSExpression *)arg0;
- (NSExpression *)valueExpression;
- (void)setPropertyName:(NSString *)arg0;
- (NSPropertyTransform *)prerequisiteTransform;
- (char)replaceMissingValueOnly;
- (void)dealloc;
- (NSPropertyTransform *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSPropertyTransform *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)propertyName;

@end
